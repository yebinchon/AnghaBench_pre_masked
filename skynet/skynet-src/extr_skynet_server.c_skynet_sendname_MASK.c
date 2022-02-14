
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct skynet_context {scalar_t__ handle; } ;
struct TYPE_2__ {scalar_t__ handle; int name; } ;
struct remote_message {size_t sz; size_t type; void* message; TYPE_1__ destination; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct skynet_context*,int,int*,void**,size_t*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (struct skynet_context*,char*,char const*) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (struct remote_message*,scalar_t__,int) ;
 struct remote_message* FUNC_6 (int) ;
 int FUNC_7 (struct skynet_context*,scalar_t__,scalar_t__,int,int,void*,size_t) ;
 scalar_t__ FUNC_8 (char const*,int *,int) ;

int
FUNC_9(struct skynet_context * VAR_3, uint32_t VAR_4, const char * VAR_5 , int VAR_6, int VAR_7, void * VAR_8, size_t VAR_9) {
 if (VAR_4 == 0) {
  VAR_4 = VAR_3->handle;
 }
 uint32_t VAR_10 = 0;
 if (VAR_5[0] == ':') {
  VAR_10 = FUNC_8(VAR_5+1, ((void*)0), 16);
 } else if (VAR_5[0] == '.') {
  VAR_10 = FUNC_4(VAR_5 + 1);
  if (VAR_10 == 0) {
   if (VAR_6 & VAR_2) {
    FUNC_3(VAR_8);
   }
   return -1;
  }
 } else {
  if ((VAR_9 & VAR_0) != VAR_9) {
   FUNC_2(VAR_3, "The message to %s is too large", VAR_5);
   if (VAR_6 & VAR_2) {
    FUNC_3(VAR_8);
   }
   return -2;
  }
  FUNC_0(VAR_3, VAR_6, &VAR_7, (void **)&VAR_8, &VAR_9);

  struct remote_message * VAR_11 = FUNC_6(sizeof(*VAR_11));
  FUNC_1(VAR_11->destination.name, VAR_5);
  VAR_11->destination.handle = 0;
  VAR_11->message = VAR_8;
  VAR_11->sz = VAR_9 & VAR_0;
  VAR_11->type = VAR_9 >> VAR_1;

  FUNC_5(VAR_11, VAR_4, VAR_7);
  return VAR_7;
 }

 return FUNC_7(VAR_3, VAR_4, VAR_10, VAR_6, VAR_7, VAR_8, VAR_9);
}
