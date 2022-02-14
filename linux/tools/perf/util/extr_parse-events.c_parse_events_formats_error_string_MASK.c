
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int static_terms ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char**,char*,char*,...) ;
 int FUNC_1 (char*,int) ;

char *FUNC_2(char *VAR_1)
{
 char *VAR_2;

 char VAR_3[VAR_0 *
     (sizeof("no-overwrite") - 1)];

 FUNC_1(VAR_3, sizeof(VAR_3));

 if (VAR_1) {
  if (FUNC_0(&VAR_2, "valid terms: %s,%s",
        VAR_1, VAR_3) < 0)
   goto fail;
 } else {
  if (FUNC_0(&VAR_2, "valid terms: %s", VAR_3) < 0)
   goto fail;
 }
 return VAR_2;

fail:
 return ((void*)0);
}
