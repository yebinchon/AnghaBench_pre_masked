
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int truesize; } ;
struct TYPE_3__ {int (* sk_data_ready ) (TYPE_1__*) ;int sk_receive_queue; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_1)
{
 if (!VAR_0) {
  FUNC_2("atmsvc: no signaling daemon\n");
  FUNC_1(VAR_1);
  return;
 }
 FUNC_0(VAR_0, VAR_1->truesize);
 FUNC_4(&FUNC_3(VAR_0)->sk_receive_queue, VAR_1);
 FUNC_3(VAR_0)->sk_data_ready(FUNC_3(VAR_0));
}
