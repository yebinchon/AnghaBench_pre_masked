
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct skynet_socket_message {void* buffer; int ud; int id; int type; } ;
struct skynet_context {int dummy; } ;
struct TYPE_2__ {int handle; int name; } ;
struct remote_message {scalar_t__ message; int sz; int type; TYPE_1__ destination; } ;
struct harbor {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct harbor*,void const*,size_t,int,int) ;
 int FUNC_1 (struct harbor*,int ) ;
 int FUNC_2 (struct harbor*,struct skynet_socket_message const*) ;
 int FUNC_3 (struct harbor*,int,int ,int ,int,scalar_t__,int ) ;
 int FUNC_4 (struct harbor*,int,int ,int ,int,scalar_t__,int ) ;
 int FUNC_5 (struct harbor*,int) ;
 int FUNC_6 (struct skynet_context*,char*,int,...) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (struct skynet_context*,int ,int,int,int,int *,int ) ;

__attribute__((used)) static int
FUNC_9(struct skynet_context * VAR_1, void * VAR_2, int VAR_3, int VAR_4, uint32_t VAR_5, const void * VAR_6, size_t VAR_7) {
 struct harbor * VAR_8 = VAR_2;
 switch (VAR_3) {
 case 134: {
  const struct skynet_socket_message * VAR_9 = VAR_6;
  switch(VAR_9->type) {
  case 130:
   FUNC_2(VAR_8, VAR_9);
   FUNC_7(VAR_9->buffer);
   break;
  case 129:
  case 132: {
   int VAR_10 = FUNC_1(VAR_8, VAR_9->id);
   if (VAR_10) {
    FUNC_5(VAR_8,VAR_10);
   } else {
    FUNC_6(VAR_1, "Unkown fd (%d) closed", VAR_9->id);
   }
   break;
  }
  case 131:

   break;
  case 128: {
   int VAR_11 = FUNC_1(VAR_8, VAR_9->id);
   if (VAR_11) {
    FUNC_6(VAR_1, "message havn't send to Harbor (%d) reach %d K", VAR_11, VAR_9->ud);
   }
   break;
  }
  default:
   FUNC_6(VAR_1, "recv invalid socket message type %d", VAR_3);
   break;
  }
  return 0;
 }
 case 135: {
  FUNC_0(VAR_8, VAR_6,VAR_7,VAR_4,VAR_5);
  return 0;
 }
 case 133 : {

  const struct remote_message *VAR_12 = VAR_6;
  if (VAR_12->destination.handle == 0) {
   if (FUNC_4(VAR_8, VAR_5 , VAR_12->destination.name, VAR_12->type, VAR_4, VAR_12->message, VAR_12->sz)) {
    return 0;
   }
  } else {
   if (FUNC_3(VAR_8, VAR_5 , VAR_12->destination.handle, VAR_12->type, VAR_4, VAR_12->message, VAR_12->sz)) {
    return 0;
   }
  }
  FUNC_7((void *)VAR_12->message);
  return 0;
 }
 default:
  FUNC_6(VAR_1, "recv invalid message from %x,  type = %d", VAR_5, VAR_3);
  if (VAR_4 != 0 && VAR_3 != VAR_0) {
   FUNC_8(VAR_1,0,VAR_5,VAR_0, VAR_4, ((void*)0), 0);
  }
  return 0;
 }
}
