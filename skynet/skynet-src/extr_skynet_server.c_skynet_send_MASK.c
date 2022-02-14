
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct skynet_message {int session; size_t sz; void* data; scalar_t__ source; } ;
struct skynet_context {scalar_t__ handle; } ;
struct TYPE_2__ {scalar_t__ handle; } ;
struct remote_message {size_t sz; size_t type; void* message; TYPE_1__ destination; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct skynet_context*,int,int*,void**,size_t*) ;
 scalar_t__ FUNC_1 (scalar_t__,struct skynet_message*) ;
 int FUNC_2 (struct skynet_context*,char*,...) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct remote_message*,scalar_t__,int) ;
 struct remote_message* FUNC_6 (int) ;

int
FUNC_7(struct skynet_context * VAR_3, uint32_t VAR_4, uint32_t VAR_5 , int VAR_6, int VAR_7, void * VAR_8, size_t VAR_9) {
 if ((VAR_9 & VAR_0) != VAR_9) {
  FUNC_2(VAR_3, "The message to %x is too large", VAR_5);
  if (VAR_6 & VAR_2) {
   FUNC_3(VAR_8);
  }
  return -2;
 }
 FUNC_0(VAR_3, VAR_6, &VAR_7, (void **)&VAR_8, &VAR_9);

 if (VAR_4 == 0) {
  VAR_4 = VAR_3->handle;
 }

 if (VAR_5 == 0) {
  if (VAR_8) {
   FUNC_2(VAR_3, "Destination address can't be 0");
   FUNC_3(VAR_8);
   return -1;
  }

  return VAR_7;
 }
 if (FUNC_4(VAR_5)) {
  struct remote_message * VAR_10 = FUNC_6(sizeof(*VAR_10));
  VAR_10->destination.handle = VAR_5;
  VAR_10->message = VAR_8;
  VAR_10->sz = VAR_9 & VAR_0;
  VAR_10->type = VAR_9 >> VAR_1;
  FUNC_5(VAR_10, VAR_4, VAR_7);
 } else {
  struct skynet_message VAR_11;
  VAR_11.source = VAR_4;
  VAR_11.session = VAR_7;
  VAR_11.data = VAR_8;
  VAR_11.sz = VAR_9;

  if (FUNC_1(VAR_5, &VAR_11)) {
   FUNC_3(VAR_8);
   return -1;
  }
 }
 return VAR_7;
}
