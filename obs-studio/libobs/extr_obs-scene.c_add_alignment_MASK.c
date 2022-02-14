
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vec2 {float x; float y; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(struct vec2 *VAR_4, uint32_t VAR_5, int VAR_6, int VAR_7)
{
 if (VAR_5 & VAR_2)
  VAR_4->x += (float)VAR_6;
 else if ((VAR_5 & VAR_1) == 0)
  VAR_4->x += (float)(VAR_6 / 2);

 if (VAR_5 & VAR_0)
  VAR_4->y += (float)VAR_7;
 else if ((VAR_5 & VAR_3) == 0)
  VAR_4->y += (float)(VAR_7 / 2);
}
