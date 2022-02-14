
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bch_control {int dummy; } ;


 scalar_t__ FUNC_0 (struct bch_control*) ;
 int FUNC_1 (struct bch_control*) ;
 int FUNC_2 (int*,int*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct bch_control *VAR_0, uint8_t *VAR_1,
         const uint32_t *VAR_2)
{
 uint8_t VAR_3[4];
 unsigned int VAR_4, VAR_5 = FUNC_1(VAR_0)-1;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  *VAR_1++ = (VAR_2[VAR_4] >> 24);
  *VAR_1++ = (VAR_2[VAR_4] >> 16) & 0xff;
  *VAR_1++ = (VAR_2[VAR_4] >> 8) & 0xff;
  *VAR_1++ = (VAR_2[VAR_4] >> 0) & 0xff;
 }
 VAR_3[0] = (VAR_2[VAR_5] >> 24);
 VAR_3[1] = (VAR_2[VAR_5] >> 16) & 0xff;
 VAR_3[2] = (VAR_2[VAR_5] >> 8) & 0xff;
 VAR_3[3] = (VAR_2[VAR_5] >> 0) & 0xff;
 FUNC_2(VAR_1, VAR_3, FUNC_0(VAR_0)-4*VAR_5);
}
