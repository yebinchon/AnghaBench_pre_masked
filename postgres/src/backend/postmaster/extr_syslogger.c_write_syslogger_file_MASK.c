
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int,int,int *) ;
 int FUNC_1 (int ) ;
 int * VAR_3 ;
 int FUNC_2 (char*,int ) ;

void
FUNC_3(const char *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;
 FILE *VAR_8;
 VAR_8 = (VAR_6 == VAR_0 &&
      VAR_1 != ((void*)0)) ? VAR_1 : VAR_3;

 VAR_7 = FUNC_0(VAR_4, 1, VAR_5, VAR_8);







 if (VAR_7 != VAR_5)
  FUNC_2("could not write to log file: %s\n", FUNC_1(VAR_2));
}
