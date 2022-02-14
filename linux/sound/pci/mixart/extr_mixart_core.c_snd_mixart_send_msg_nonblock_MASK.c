
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mixart_msg {int dummy; } ;
struct mixart_mgr {int msg_processed; int msg_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mixart_mgr*,struct mixart_msg*,int ,int ,int *) ;

int FUNC_4(struct mixart_mgr *VAR_1, struct mixart_msg *VAR_2)
{
 u32 VAR_3;
 int VAR_4;


 FUNC_1(&VAR_1->msg_lock);
 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_0, 0, &VAR_3);
 FUNC_2(&VAR_1->msg_lock);


 FUNC_0(&VAR_1->msg_processed);

 return VAR_4;
}
