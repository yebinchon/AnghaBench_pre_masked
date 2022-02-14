
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,int ) ;

__attribute__((used)) static void
FUNC_6(void)
{
 FILE *VAR_2;
 char *VAR_3;

 VAR_3 = FUNC_5("%s/postgresql.conf", VAR_1);
 VAR_2 = FUNC_2(VAR_3, VAR_0);
 if (VAR_2 == ((void*)0))
 {
  FUNC_4("could not open file \"%s\" for writing: %m", VAR_3);
  FUNC_0(1);
 }
 if (FUNC_1(VAR_2))
 {
  FUNC_4("could not write file \"%s\": %m", VAR_3);
  FUNC_0(1);
 }
 FUNC_3(VAR_3);
}
