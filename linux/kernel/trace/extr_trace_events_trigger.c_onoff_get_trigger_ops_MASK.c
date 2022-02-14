
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_trigger_ops {int dummy; } ;


 scalar_t__ FUNC_0 (char*,char*) ;
 struct event_trigger_ops VAR_0 ;
 struct event_trigger_ops VAR_1 ;
 struct event_trigger_ops VAR_2 ;
 struct event_trigger_ops VAR_3 ;

__attribute__((used)) static struct event_trigger_ops *
FUNC_1(char *VAR_4, char *VAR_5)
{
 struct event_trigger_ops *VAR_6;


 if (FUNC_0(VAR_4, "traceon") == 0)
  VAR_6 = VAR_5 ? &VAR_2 :
   &VAR_3;
 else
  VAR_6 = VAR_5 ? &VAR_0 :
   &VAR_1;

 return VAR_6;
}
