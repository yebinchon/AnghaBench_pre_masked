
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_trigger_attrs {size_t n_actions; int * action_str; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_4, struct hist_trigger_attrs *VAR_5)
{
 int VAR_6 = -VAR_0;

 if (VAR_5->n_actions >= VAR_3)
  return VAR_6;

 if ((FUNC_1(VAR_4, "onmatch(")) ||
     (FUNC_1(VAR_4, "onmax(")) ||
     (FUNC_1(VAR_4, "onchange("))) {
  VAR_5->action_str[VAR_5->n_actions] = FUNC_0(VAR_4, VAR_2);
  if (!VAR_5->action_str[VAR_5->n_actions]) {
   VAR_6 = -VAR_1;
   return VAR_6;
  }
  VAR_5->n_actions++;
  VAR_6 = 0;
 }
 return VAR_6;
}
