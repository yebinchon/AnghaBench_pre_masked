
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 char* FUNC_3 (char const*) ;

char *
FUNC_4(const char *VAR_2)
{
 char *VAR_3;

 if (!VAR_2)
 {
  FUNC_2(VAR_1,
    "%s", FUNC_0("cannot duplicate null pointer (internal error)\n"));
  FUNC_1(VAR_0);
 }
 VAR_3 = FUNC_3(VAR_2);
 if (!VAR_3)
 {
  FUNC_2(VAR_1, "%s", FUNC_0("out of memory\n"));
  FUNC_1(VAR_0);
 }
 return VAR_3;
}
