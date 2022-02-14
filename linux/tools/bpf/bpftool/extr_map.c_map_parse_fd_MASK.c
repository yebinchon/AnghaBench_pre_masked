
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ) ;
 unsigned int FUNC_6 (char*,char**,int ) ;

int FUNC_7(int *VAR_2, char ***VAR_3)
{
 int VAR_4;

 if (FUNC_2(**VAR_3, "id")) {
  unsigned int VAR_5;
  char *VAR_6;

  FUNC_0();

  VAR_5 = FUNC_6(**VAR_3, &VAR_6, 0);
  if (*VAR_6) {
   FUNC_4("can't parse %s as ID", **VAR_3);
   return -1;
  }
  FUNC_0();

  VAR_4 = FUNC_1(VAR_5);
  if (VAR_4 < 0)
   FUNC_4("get map by id (%u): %s", VAR_5, FUNC_5(VAR_1));
  return VAR_4;
 } else if (FUNC_2(**VAR_3, "pinned")) {
  char *VAR_7;

  FUNC_0();

  VAR_7 = **VAR_3;
  FUNC_0();

  return FUNC_3(VAR_7, VAR_0);
 }

 FUNC_4("expected 'id' or 'pinned', got: '%s'?", **VAR_3);
 return -1;
}
