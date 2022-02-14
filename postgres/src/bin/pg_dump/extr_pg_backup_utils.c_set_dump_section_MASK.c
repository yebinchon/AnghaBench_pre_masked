
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char*,char const*) ;
 char* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (char const*,char*) ;

void
FUNC_5(const char *VAR_6, int *VAR_7)
{

 if (*VAR_7 == VAR_3)
  *VAR_7 = 0;

 if (FUNC_4(VAR_6, "pre-data") == 0)
  *VAR_7 |= VAR_2;
 else if (FUNC_4(VAR_6, "data") == 0)
  *VAR_7 |= VAR_0;
 else if (FUNC_4(VAR_6, "post-data") == 0)
  *VAR_7 |= VAR_1;
 else
 {
  FUNC_3("unrecognized section name: \"%s\"", VAR_6);
  FUNC_2(VAR_5, FUNC_0("Try \"%s --help\" for more information.\n"),
    VAR_4);
  FUNC_1(1);
 }
}
