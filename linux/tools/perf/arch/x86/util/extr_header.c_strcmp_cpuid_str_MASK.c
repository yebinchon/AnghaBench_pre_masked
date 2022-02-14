
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t rm_eo; size_t rm_so; } ;
typedef TYPE_1__ regmatch_t ;
typedef int regex_t ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (int *,char const*,int,TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (char const*) ;
 char const* FUNC_6 (char const*,char) ;

int FUNC_7(const char *VAR_1, const char *VAR_2)
{
 regex_t VAR_3;
 regmatch_t VAR_4[1];
 int VAR_5;
 bool VAR_6 = FUNC_0(VAR_1);
 bool VAR_7 = FUNC_0(VAR_2);





 if (VAR_6 && !VAR_7) {
  FUNC_1("Invalid CPUID %s. Full CPUID is required, "
   "vendor-family-model-stepping\n", VAR_2);
  return 1;
 }

 if (FUNC_2(&VAR_3, VAR_1, VAR_0) != 0) {

  FUNC_1("Invalid regular expression %s\n", VAR_1);
  return 1;
 }

 VAR_5 = !FUNC_3(&VAR_3, VAR_2, 1, VAR_4, 0);
 FUNC_4(&VAR_3);
 if (VAR_5) {
  size_t VAR_8 = (VAR_4[0].rm_eo - VAR_4[0].rm_so);
  size_t VAR_9;




  if (!VAR_6 && VAR_7)
   VAR_9 = FUNC_6(VAR_2, '-') - VAR_2;
  else
   VAR_9 = FUNC_5(VAR_2);


  if (VAR_8 == VAR_9)
   return 0;
 }

 return 1;
}
