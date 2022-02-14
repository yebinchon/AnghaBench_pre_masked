
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_id {struct p9_client* context; } ;
struct rdma_cm_event {int event; } ;
struct p9_trans_rdma {int cm_done; int cm_id; int state; } ;
struct p9_client {void* status; struct p9_trans_rdma* trans; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct rdma_cm_id *VAR_6, struct rdma_cm_event *VAR_7)
{
 struct p9_client *VAR_8 = VAR_6->context;
 struct p9_trans_rdma *VAR_9 = VAR_8->trans;
 switch (VAR_7->event) {
 case 141:
  FUNC_1(VAR_9->state != VAR_4);
  VAR_9->state = VAR_1;
  break;

 case 130:
  FUNC_1(VAR_9->state != VAR_1);
  VAR_9->state = VAR_5;
  break;

 case 135:
  FUNC_1(VAR_9->state != VAR_5);
  VAR_9->state = VAR_3;
  break;

 case 136:
  if (VAR_9)
   VAR_9->state = VAR_2;
  VAR_8->status = VAR_0;
  break;

 case 129:
  break;

 case 143:
 case 131:
 case 137:
 case 133:
 case 134:
 case 132:
 case 139:
 case 138:
 case 140:
 case 142:
 case 128:
  VAR_8->status = VAR_0;
  FUNC_3(VAR_9->cm_id);
  break;
 default:
  FUNC_0();
 }
 FUNC_2(&VAR_9->cm_done);
 return 0;
}
