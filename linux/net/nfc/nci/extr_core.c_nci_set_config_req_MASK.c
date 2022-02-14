
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nci_set_config_param {scalar_t__ len; int val; int id; } ;
struct nci_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ len; int val; int id; } ;
struct nci_core_set_config_cmd {int num_params; TYPE_1__ param; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (struct nci_dev*,int ,scalar_t__,struct nci_core_set_config_cmd*) ;

__attribute__((used)) static void FUNC_3(struct nci_dev *VAR_2, unsigned long VAR_3)
{
 struct nci_set_config_param *VAR_4 = (struct nci_set_config_param *)VAR_3;
 struct nci_core_set_config_cmd VAR_5;

 FUNC_0(VAR_4->len > VAR_0);

 VAR_5.num_params = 1;
 VAR_5.param.id = VAR_4->id;
 VAR_5.param.len = VAR_4->len;
 FUNC_1(VAR_5.param.val, VAR_4->val, VAR_4->len);

 FUNC_2(VAR_2, VAR_1, (3 + VAR_4->len), &VAR_5);
}
