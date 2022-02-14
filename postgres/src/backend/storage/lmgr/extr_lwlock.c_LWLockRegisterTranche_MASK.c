
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 char const** VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char const**,int) ;

void
FUNC_2(int VAR_2, const char *VAR_3)
{
 FUNC_0(VAR_0 != ((void*)0));

 if (VAR_2 >= VAR_1)
 {
  int VAR_4 = VAR_1;
  int VAR_5 = VAR_1;

  while (VAR_4 <= VAR_2)
   VAR_4 *= 2;

  VAR_0 = (const char **)
   FUNC_1(VAR_0, VAR_4 * sizeof(char *));
  VAR_1 = VAR_4;
  while (VAR_5 < VAR_1)
   VAR_0[VAR_5++] = ((void*)0);
 }

 VAR_0[VAR_2] = VAR_3;
}
