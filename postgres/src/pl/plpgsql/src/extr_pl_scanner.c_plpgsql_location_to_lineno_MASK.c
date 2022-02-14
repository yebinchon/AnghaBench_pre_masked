
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;
 int VAR_1 ;
 char const* VAR_2 ;
 int FUNC_0 () ;
 char* VAR_3 ;
 char* FUNC_1 (char const*,char) ;

int
FUNC_2(int VAR_4)
{
 const char *VAR_5;

 if (VAR_4 < 0 || VAR_3 == ((void*)0))
  return 0;
 VAR_5 = VAR_3 + VAR_4;


 if (VAR_5 < VAR_2)
  FUNC_0();

 while (VAR_0 != ((void*)0) && VAR_5 > VAR_0)
 {
  VAR_2 = VAR_0 + 1;
  VAR_1++;
  VAR_0 = FUNC_1(VAR_2, '\n');
 }

 return VAR_1;
}
