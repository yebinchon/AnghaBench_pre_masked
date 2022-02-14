
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,int,int) ;
 int FUNC_1 (unsigned char*,int,int,int) ;

__attribute__((used)) static void
FUNC_2(unsigned char *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 int VAR_8 = (1 << VAR_3) - 1;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
 {
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  {
   VAR_7 = FUNC_0(VAR_0, VAR_5 * VAR_2 + VAR_6, VAR_3);
   if (!VAR_4 || VAR_6 < VAR_2 - 1)
    VAR_7 = VAR_8 - VAR_7;
   FUNC_1(VAR_0, VAR_5 * VAR_2 + VAR_6, VAR_3, VAR_7);
  }
 }
}
