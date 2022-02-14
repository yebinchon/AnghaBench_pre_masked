
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct iio_channel_info {int shift; int mask; int bits_used; float offset; float scale; scalar_t__ is_signed; } ;
typedef int int8_t ;


 int FUNC_0 (char*,float) ;

void FUNC_1(uint8_t VAR_0, struct iio_channel_info *VAR_1)
{




 VAR_0 >>= VAR_1->shift;
 VAR_0 &= VAR_1->mask;
 if (VAR_1->is_signed) {
  int8_t VAR_2 = (int8_t)(VAR_0 << (8 - VAR_1->bits_used)) >>
        (8 - VAR_1->bits_used);
  FUNC_0("%05f ", ((float)VAR_2 + VAR_1->offset) * VAR_1->scale);
 } else {
  FUNC_0("%05f ", ((float)VAR_0 + VAR_1->offset) * VAR_1->scale);
 }
}
