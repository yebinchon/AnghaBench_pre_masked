
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 char* VAR_0 ;
 int * FUNC_1 (char*,char*) ;
 int * VAR_1 ;

__attribute__((used)) static FILE *
FUNC_2(void)
{
 FILE *VAR_2;
 char *VAR_3;

 (void) FUNC_0(VAR_1);
 VAR_3 = VAR_0;
 VAR_2 = FUNC_1((VAR_3[0] == '\0') ? "more" : VAR_3, "w");
 if (VAR_2 == ((void*)0))
  return (VAR_1);
 return (VAR_2);
}
