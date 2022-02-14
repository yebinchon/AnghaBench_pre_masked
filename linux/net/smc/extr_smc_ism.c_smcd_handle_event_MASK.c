
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smcd_event {int dummy; } ;
struct smcd_dev {int event_wq; } ;
struct smc_ism_event_work {int work; struct smcd_event event; struct smcd_dev* smcd; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct smc_ism_event_work* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;

void FUNC_3(struct smcd_dev *VAR_2, struct smcd_event *VAR_3)
{
 struct smc_ism_event_work *VAR_4;


 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;
 FUNC_0(&VAR_4->work, VAR_1);
 VAR_4->smcd = VAR_2;
 VAR_4->event = *VAR_3;
 FUNC_2(VAR_2->event_wq, &VAR_4->work);
}
