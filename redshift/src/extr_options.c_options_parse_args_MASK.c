
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int options_t ;
typedef int location_provider_t ;
typedef int gamma_method_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char**,char*) ;
 int VAR_1 ;
 int FUNC_2 (char,int ,int *,char const*,int const*,int const*) ;

void
FUNC_3(
 options_t *VAR_2, int VAR_3, char *VAR_4[],
 const gamma_method_t *VAR_5,
 const location_provider_t *VAR_6)
{
 const char* VAR_7 = VAR_4[0];
 int VAR_8;
 while ((VAR_8 = FUNC_1(VAR_3, VAR_4, "b:c:g:hl:m:oO:pPrt:vVx")) != -1) {
  char VAR_9 = VAR_8;
  int VAR_10 = FUNC_2(
   VAR_9, VAR_1, VAR_2, VAR_7, VAR_5,
   VAR_6);
  if (VAR_10 < 0) FUNC_0(VAR_0);
 }
}
