
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int fz_context ;


 int VAR_0 ;
 float FUNC_0 (int) ;
 int FUNC_1 (float) ;

__attribute__((used)) static inline int
FUNC_2(fz_context *VAR_1, uint16_t VAR_2)
{
 int VAR_3;
 float VAR_4;

 VAR_3 = VAR_2 & 0x7fff;
 if (!VAR_3)
  VAR_4 = 0;
 else
 {
  VAR_4 = FUNC_0(VAR_0/256 * (VAR_3 + .5f) - VAR_0*64);
  if (VAR_2 & 0x8000)
   VAR_4 = -VAR_4;
 }

 return ((VAR_4 <= 0) ? 0 : (VAR_4 >= 1) ? 255 : (int)(256*FUNC_1(VAR_4)));
}
