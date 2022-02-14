
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int substring_t ;
struct ima_rule_entry {TYPE_1__* lsm; } ;
struct TYPE_2__ {int type; int args_p; scalar_t__ rule; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct ima_rule_entry *VAR_3,
        substring_t *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_3->lsm[VAR_5].rule)
  return -VAR_1;

 VAR_3->lsm[VAR_5].args_p = FUNC_1(VAR_4);
 if (!VAR_3->lsm[VAR_5].args_p)
  return -VAR_2;

 VAR_3->lsm[VAR_5].type = VAR_6;
 VAR_7 = FUNC_2(VAR_3->lsm[VAR_5].type,
        VAR_0,
        VAR_3->lsm[VAR_5].args_p,
        &VAR_3->lsm[VAR_5].rule);
 if (!VAR_3->lsm[VAR_5].rule) {
  FUNC_0(VAR_3->lsm[VAR_5].args_p);
  return -VAR_1;
 }

 return VAR_7;
}
