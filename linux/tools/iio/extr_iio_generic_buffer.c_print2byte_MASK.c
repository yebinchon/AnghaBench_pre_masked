
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct iio_channel_info {int shift; int mask; int bits_used; float offset; float scale; scalar_t__ is_signed; scalar_t__ be; } ;
typedef int int16_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,float) ;

void FUNC_3(uint16_t VAR_0, struct iio_channel_info *VAR_1)
{

 if (VAR_1->be)
  VAR_0 = FUNC_0(VAR_0);
 else
  VAR_0 = FUNC_1(VAR_0);





 VAR_0 >>= VAR_1->shift;
 VAR_0 &= VAR_1->mask;
 if (VAR_1->is_signed) {
  int16_t VAR_2 = (int16_t)(VAR_0 << (16 - VAR_1->bits_used)) >>
         (16 - VAR_1->bits_used);
  FUNC_2("%05f ", ((float)VAR_2 + VAR_1->offset) * VAR_1->scale);
 } else {
  FUNC_2("%05f ", ((float)VAR_0 + VAR_1->offset) * VAR_1->scale);
 }
}
