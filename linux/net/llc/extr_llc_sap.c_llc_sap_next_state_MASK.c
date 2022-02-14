
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct llc_sap_state_trans {int next_state; } ;
struct llc_sap {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct llc_sap*,struct llc_sap_state_trans*,struct sk_buff*) ;
 struct llc_sap_state_trans* FUNC_1 (struct llc_sap*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct llc_sap *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3 = 1;
 struct llc_sap_state_trans *VAR_4;

 if (VAR_1->state > VAR_0)
  goto out;
 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_4)
  goto out;





 VAR_3 = FUNC_0(VAR_1, VAR_4, VAR_2);
 if (VAR_3)
  goto out;



 VAR_1->state = VAR_4->next_state;
out:
 return VAR_3;
}
