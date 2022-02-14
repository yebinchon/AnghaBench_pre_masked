
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char,char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char,char*) ;

int
FUNC_4(char VAR_2, char *VAR_3)
{

 FUNC_0(1,"parsing board option: -%c %s", VAR_2, VAR_3);

 if (VAR_1 != ((void*)0)) {
  FUNC_1("only one board option allowed");
  return VAR_0;
 }

 if (FUNC_3(VAR_2, VAR_3))
  return VAR_0;

 VAR_1 = FUNC_2(VAR_3);
 if (VAR_1 == ((void*)0)){
  FUNC_1("invalid/unknown board specified: %s", VAR_3);
  return VAR_0;
 }

 return 0;
}
