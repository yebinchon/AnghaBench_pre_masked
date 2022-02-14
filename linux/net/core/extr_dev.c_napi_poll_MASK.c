
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct napi_struct {int weight; int (* poll ) (struct napi_struct*,int) ;int poll_list; TYPE_1__* dev; scalar_t__ gro_bitmask; int state; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct napi_struct*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,struct list_head*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct napi_struct*) ;
 int FUNC_7 (struct napi_struct*) ;
 int FUNC_8 (struct napi_struct*,int) ;
 void* FUNC_9 (struct napi_struct*) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (struct napi_struct*,int) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 int FUNC_14 (struct napi_struct*,int,int) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct napi_struct *VAR_2, struct list_head *VAR_3)
{
 void *VAR_4;
 int VAR_5, VAR_6;

 FUNC_4(&VAR_2->poll_list);

 VAR_4 = FUNC_9(VAR_2);

 VAR_6 = VAR_2->weight;







 VAR_5 = 0;
 if (FUNC_13(VAR_1, &VAR_2->state)) {
  VAR_5 = VAR_2->poll(VAR_2, VAR_6);
  FUNC_14(VAR_2, VAR_5, VAR_6);
 }

 FUNC_0(VAR_5 > VAR_6);

 if (FUNC_2(VAR_5 < VAR_6))
  goto out_unlock;






 if (FUNC_15(FUNC_7(VAR_2))) {
  FUNC_6(VAR_2);
  goto out_unlock;
 }

 FUNC_1(VAR_2);

 if (VAR_2->gro_bitmask) {



  FUNC_8(VAR_2, VAR_0 >= 1000);
 }




 if (FUNC_15(!FUNC_5(&VAR_2->poll_list))) {
  FUNC_11("%s: Budget exhausted after napi rescheduled\n",
        VAR_2->dev ? VAR_2->dev->name : "backlog");
  goto out_unlock;
 }

 FUNC_3(&VAR_2->poll_list, VAR_3);

out_unlock:
 FUNC_10(VAR_4);

 return VAR_5;
}
