
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smack_known {int list; int smk_hashed; int smk_known; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,struct hlist_head*) ;
 int FUNC_2 (int *,int *) ;
 struct hlist_head* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;

void FUNC_4(struct smack_known *VAR_3)
{
 unsigned int VAR_4;
 struct hlist_head *VAR_5;

 VAR_4 = FUNC_0(((void*)0), VAR_3->smk_known, FUNC_3(VAR_3->smk_known));
 VAR_5 = &VAR_1[VAR_4 & (VAR_0 - 1)];

 FUNC_1(&VAR_3->smk_hashed, VAR_5);
 FUNC_2(&VAR_3->list, &VAR_2);
}
