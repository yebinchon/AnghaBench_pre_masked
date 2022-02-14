
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*,int ,...) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_3)
{
 FILE *VAR_4;
 char *VAR_5;

 if (VAR_3 == ((void*)0))
  VAR_5 = FUNC_6("%s/PG_VERSION", VAR_2);
 else
  VAR_5 = FUNC_6("%s/%s/PG_VERSION", VAR_2, VAR_3);

 if ((VAR_4 = FUNC_2(VAR_5, VAR_0)) == ((void*)0))
 {
  FUNC_5("could not open file \"%s\" for writing: %m", VAR_5);
  FUNC_0(1);
 }
 if (FUNC_3(VAR_4, "%s\n", VAR_1) < 0 ||
  FUNC_1(VAR_4))
 {
  FUNC_5("could not write file \"%s\": %m", VAR_5);
  FUNC_0(1);
 }
 FUNC_4(VAR_5);
}
