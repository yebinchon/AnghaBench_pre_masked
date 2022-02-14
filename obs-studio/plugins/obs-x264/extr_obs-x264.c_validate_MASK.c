
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_x264 {int dummy; } ;


 scalar_t__ FUNC_0 (char const*,char const* const) ;
 int FUNC_1 (char*,char const*,char const*) ;

__attribute__((used)) static const char *FUNC_2(struct obs_x264 *VAR_0, const char *VAR_1,
       const char *VAR_2, const char *const *VAR_3)
{
 if (!VAR_1 || !*VAR_1)
  return VAR_1;

 while (*VAR_3) {
  if (FUNC_0(VAR_1, *VAR_3) == 0)
   return VAR_1;

  VAR_3++;
 }

 FUNC_1("Invalid %s: %s", VAR_2, VAR_1);
 return ((void*)0);
}
