
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct skynet_monitor {int dummy; } ;
struct skynet_message {int data; int source; } ;
struct skynet_context {struct message_queue* queue; int * cb; } ;
struct message_queue {int dummy; } ;
struct drop_t {int member_0; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct skynet_context*,struct skynet_message*) ;
 int VAR_0 ;
 int FUNC_2 (struct skynet_context*) ;
 int FUNC_3 (struct skynet_context*,char*,int) ;
 int FUNC_4 (int ) ;
 struct message_queue* FUNC_5 () ;
 int FUNC_6 (struct message_queue*) ;
 struct skynet_context* FUNC_7 (int ) ;
 int FUNC_8 (struct skynet_monitor*,int ,int ) ;
 int FUNC_9 (struct message_queue*) ;
 int FUNC_10 (struct message_queue*) ;
 int FUNC_11 (struct message_queue*) ;
 scalar_t__ FUNC_12 (struct message_queue*,struct skynet_message*) ;
 int FUNC_13 (struct message_queue*,int ,struct drop_t*) ;

struct message_queue *
FUNC_14(struct skynet_monitor *VAR_1, struct message_queue *VAR_2, int VAR_3) {
 if (VAR_2 == ((void*)0)) {
  VAR_2 = FUNC_5();
  if (VAR_2==((void*)0))
   return ((void*)0);
 }

 uint32_t VAR_4 = FUNC_9(VAR_2);

 struct skynet_context * VAR_5 = FUNC_7(VAR_4);
 if (VAR_5 == ((void*)0)) {
  struct drop_t VAR_6 = { VAR_4 };
  FUNC_13(VAR_2, VAR_0, &VAR_6);
  return FUNC_5();
 }

 int VAR_7,VAR_8=1;
 struct skynet_message VAR_9;

 for (VAR_7=0;VAR_7<VAR_8;VAR_7++) {
  if (FUNC_12(VAR_2,&VAR_9)) {
   FUNC_2(VAR_5);
   return FUNC_5();
  } else if (VAR_7==0 && VAR_3 >= 0) {
   VAR_8 = FUNC_10(VAR_2);
   VAR_8 >>= VAR_3;
  }
  int VAR_10 = FUNC_11(VAR_2);
  if (VAR_10) {
   FUNC_3(VAR_5, "May overload, message queue length = %d", VAR_10);
  }

  FUNC_8(VAR_1, VAR_9.source , VAR_4);

  if (VAR_5->cb == ((void*)0)) {
   FUNC_4(VAR_9.data);
  } else {
   FUNC_1(VAR_5, &VAR_9);
  }

  FUNC_8(VAR_1, 0,0);
 }

 FUNC_0(VAR_2 == VAR_5->queue);
 struct message_queue *VAR_11 = FUNC_5();
 if (VAR_11) {


  FUNC_6(VAR_2);
  VAR_2 = VAR_11;
 }
 FUNC_2(VAR_5);

 return VAR_2;
}
