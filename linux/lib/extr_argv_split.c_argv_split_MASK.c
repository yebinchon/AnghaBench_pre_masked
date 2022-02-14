
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char*) ;
 char** FUNC_3 (int,int,int ) ;
 char* FUNC_4 (char const*,scalar_t__,int ) ;

char **FUNC_5(gfp_t VAR_1, const char *VAR_2, int *VAR_3)
{
 char *VAR_4;
 bool VAR_5;
 char **VAR_6, **VAR_7;
 int VAR_8;

 VAR_4 = FUNC_4(VAR_2, VAR_0 - 1, VAR_1);
 if (!VAR_4)
  return ((void*)0);

 VAR_8 = FUNC_0(VAR_4);
 VAR_6 = FUNC_3(VAR_8 + 2, sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }

 *VAR_6 = VAR_4;
 VAR_7 = ++VAR_6;
 for (VAR_5 = 1; *VAR_4; VAR_4++) {
  if (FUNC_1(*VAR_4)) {
   VAR_5 = 1;
   *VAR_4 = 0;
  } else if (VAR_5) {
   VAR_5 = 0;
   *VAR_6++ = VAR_4;
  }
 }
 *VAR_6 = ((void*)0);

 if (VAR_3)
  *VAR_3 = VAR_8;
 return VAR_7;
}
