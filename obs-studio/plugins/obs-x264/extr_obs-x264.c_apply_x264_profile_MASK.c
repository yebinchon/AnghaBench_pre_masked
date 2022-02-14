
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_x264 {int params; int context; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int *,char const*) ;

__attribute__((used)) static inline void FUNC_2(struct obs_x264 *VAR_0,
          const char *VAR_1)
{
 if (!VAR_0->context && VAR_1 && *VAR_1) {
  int VAR_2 = FUNC_1(&VAR_0->params, VAR_1);
  if (VAR_2 != 0)
   FUNC_0("Failed to set x264 profile '%s'", VAR_1);
 }
}
