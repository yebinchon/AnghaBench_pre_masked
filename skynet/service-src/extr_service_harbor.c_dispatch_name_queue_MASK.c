
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct slave {int fd; scalar_t__ status; struct harbor_msg_queue* queue; } ;
struct skynet_context {int dummy; } ;
struct keyvalue {int value; struct harbor_msg_queue* queue; int key; } ;
struct harbor_msg_queue {int dummy; } ;
struct TYPE_2__ {int destination; int session; int source; } ;
struct harbor_msg {int buffer; TYPE_1__ header; int size; } ;
struct harbor {int slave; struct slave* s; struct skynet_context* ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int ,int) ;
 struct harbor_msg* FUNC_1 (struct harbor_msg_queue*) ;
 int FUNC_2 (struct harbor_msg_queue*,struct harbor_msg*) ;
 int FUNC_3 (struct harbor_msg_queue*) ;
 int FUNC_4 (struct skynet_context*,int,int ,int ,TYPE_1__*) ;
 int FUNC_5 (struct skynet_context*,char*,char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct skynet_context*,int ,int,int,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_8(struct harbor *VAR_5, struct keyvalue * VAR_6) {
 struct harbor_msg_queue * VAR_7 = VAR_6->queue;
 uint32_t VAR_8 = VAR_6->value;
 int VAR_9 = VAR_8 >> VAR_2;
 struct skynet_context * VAR_10 = VAR_5->ctx;
 struct slave *VAR_11 = &VAR_5->s[VAR_9];
 int VAR_12 = VAR_11->fd;
 if (VAR_12 == 0) {
  if (VAR_11->status == VAR_4) {
   char VAR_13 [VAR_0+1];
   FUNC_0(VAR_13, VAR_6->key, VAR_0);
   VAR_13[VAR_0] = '\0';
   FUNC_5(VAR_10, "Drop message to %s (in harbor %d)",VAR_13,VAR_9);
  } else {
   if (VAR_11->queue == ((void*)0)) {
    VAR_11->queue = VAR_6->queue;
    VAR_6->queue = ((void*)0);
   } else {
    struct harbor_msg * VAR_14;
    while ((VAR_14 = FUNC_1(VAR_7))!=((void*)0)) {
     FUNC_2(VAR_11->queue, VAR_14);
    }
   }
   if (VAR_9 == (VAR_5->slave >> VAR_2)) {

    struct harbor_msg * VAR_15;
    while ((VAR_15 = FUNC_1(VAR_11->queue)) != ((void*)0)) {
     int VAR_16 = VAR_15->header.destination >> VAR_2;
     FUNC_7(VAR_10, VAR_15->header.source, VAR_8 , VAR_16 | VAR_3, VAR_15->header.session, VAR_15->buffer, VAR_15->size);
    }
    FUNC_3(VAR_11->queue);
    VAR_11->queue = ((void*)0);
   }
  }
  return;
 }
 struct harbor_msg * VAR_17;
 while ((VAR_17 = FUNC_1(VAR_7)) != ((void*)0)) {
  VAR_17->header.destination |= (VAR_8 & VAR_1);
  FUNC_4(VAR_10, VAR_12, VAR_17->buffer, VAR_17->size, &VAR_17->header);
  FUNC_6(VAR_17->buffer);
 }
}
