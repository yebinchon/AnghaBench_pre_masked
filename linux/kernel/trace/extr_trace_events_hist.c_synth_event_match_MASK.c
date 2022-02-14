
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synth_event {char const* name; } ;
struct dyn_event {int dummy; } ;


 char const* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 struct synth_event* FUNC_1 (struct dyn_event*) ;

__attribute__((used)) static bool FUNC_2(const char *VAR_1, const char *VAR_2,
   int VAR_3, const char **VAR_4, struct dyn_event *VAR_5)
{
 struct synth_event *VAR_6 = FUNC_1(VAR_5);

 return FUNC_0(VAR_6->name, VAR_2) == 0 &&
  (!VAR_1 || FUNC_0(VAR_1, VAR_0) == 0);
}
