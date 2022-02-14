
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bch_control {int* mod8_tab; } ;


 int FUNC_0 (struct bch_control*) ;

__attribute__((used)) static void FUNC_1(struct bch_control *VAR_0,
     const unsigned char *VAR_1, unsigned int VAR_2,
     uint32_t *VAR_3)
{
 int VAR_4;
 const uint32_t *VAR_5;
 const int VAR_6 = FUNC_0(VAR_0)-1;

 while (VAR_2--) {
  VAR_5 = VAR_0->mod8_tab + (VAR_6+1)*(((VAR_3[0] >> 24)^(*VAR_1++)) & 0xff);

  for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
   VAR_3[VAR_4] = ((VAR_3[VAR_4] << 8)|(VAR_3[VAR_4+1] >> 24))^(*VAR_5++);

  VAR_3[VAR_6] = (VAR_3[VAR_6] << 8)^(*VAR_5);
 }
}
