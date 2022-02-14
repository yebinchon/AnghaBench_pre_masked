
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int num_entries; } ;
struct flow_rule {TYPE_1__ action; } ;
struct TYPE_4__ {int entries; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 struct flow_rule* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct flow_rule*,int ,unsigned int) ;

struct flow_rule *FUNC_2(unsigned int VAR_2)
{
 struct flow_rule *VAR_3;

 VAR_3 = FUNC_0(FUNC_1(VAR_3, VAR_1.entries, VAR_2),
         VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->action.num_entries = VAR_2;

 return VAR_3;
}
