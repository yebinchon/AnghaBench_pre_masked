
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct kcore_copy_info {scalar_t__ last_module_symbol; scalar_t__ first_symbol; scalar_t__ last_symbol; scalar_t__ etext; scalar_t__ stext; } ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char) ;
 int FUNC_2 (struct kcore_copy_info*,scalar_t__) ;
 scalar_t__ FUNC_3 (char const*,char) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(void *VAR_0, const char *VAR_1, char VAR_2,
     u64 VAR_3)
{
 struct kcore_copy_info *VAR_4 = VAR_0;

 if (!FUNC_1(VAR_2))
  return 0;

 if (FUNC_3(VAR_1, '[')) {
  if (VAR_3 > VAR_4->last_module_symbol)
   VAR_4->last_module_symbol = VAR_3;
  return 0;
 }

 if (!VAR_4->first_symbol || VAR_3 < VAR_4->first_symbol)
  VAR_4->first_symbol = VAR_3;

 if (!VAR_4->last_symbol || VAR_3 > VAR_4->last_symbol)
  VAR_4->last_symbol = VAR_3;

 if (!FUNC_4(VAR_1, "_stext")) {
  VAR_4->stext = VAR_3;
  return 0;
 }

 if (!FUNC_4(VAR_1, "_etext")) {
  VAR_4->etext = VAR_3;
  return 0;
 }

 if (FUNC_0(VAR_1) && !FUNC_2(VAR_4, VAR_3))
  return -1;

 return 0;
}
