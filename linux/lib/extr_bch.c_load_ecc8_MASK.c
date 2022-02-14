
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bch_control {int dummy; } ;


 scalar_t__ FUNC_0 (struct bch_control*) ;
 int FUNC_1 (struct bch_control*) ;
 int FUNC_2 (int*,int const*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct bch_control *VAR_0, uint32_t *VAR_1,
        const uint8_t *VAR_2)
{
 uint8_t VAR_3[4] = {0, 0, 0, 0};
 unsigned int VAR_4, VAR_5 = FUNC_1(VAR_0)-1;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++, VAR_2 += 4)
  VAR_1[VAR_4] = (VAR_2[0] << 24)|(VAR_2[1] << 16)|(VAR_2[2] << 8)|VAR_2[3];

 FUNC_2(VAR_3, VAR_2, FUNC_0(VAR_0)-4*VAR_5);
 VAR_1[VAR_5] = (VAR_3[0] << 24)|(VAR_3[1] << 16)|(VAR_3[2] << 8)|VAR_3[3];
}
