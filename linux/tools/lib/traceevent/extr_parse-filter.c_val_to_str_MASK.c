
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int val; } ;
struct tep_filter_arg {TYPE_1__ value; } ;
struct tep_event_filter {int dummy; } ;


 int FUNC_0 (char**,char*,int ) ;

__attribute__((used)) static char *FUNC_1(struct tep_event_filter *VAR_0, struct tep_filter_arg *VAR_1)
{
 char *VAR_2 = ((void*)0);

 FUNC_0(&VAR_2, "%d", VAR_1->value.val);

 return VAR_2;
}
