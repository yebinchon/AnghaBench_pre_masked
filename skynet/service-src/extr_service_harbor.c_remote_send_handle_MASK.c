
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct slave {scalar_t__ fd; scalar_t__ status; int * queue; } ;
struct skynet_context {int dummy; } ;
struct remote_message_header {int source; int destination; int session; } ;
struct harbor {int id; struct slave* s; struct skynet_context* ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *,void*,size_t,struct remote_message_header*) ;
 int FUNC_2 (struct skynet_context*,scalar_t__,char const*,size_t,struct remote_message_header*) ;
 int FUNC_3 (struct skynet_context*,char*,int,int,int,int,int) ;
 int FUNC_4 (struct skynet_context*,int,int,int,int,void*,size_t) ;

__attribute__((used)) static int
FUNC_5(struct harbor *VAR_6, uint32_t VAR_7, uint32_t VAR_8, int VAR_9, int VAR_10, const char * VAR_11, size_t VAR_12) {
 int VAR_13 = VAR_8 >> VAR_1;
 struct skynet_context * VAR_14 = VAR_6->ctx;
 if (VAR_13 == VAR_6->id) {

  FUNC_4(VAR_14, VAR_7, VAR_8 , VAR_9 | VAR_3, VAR_10, (void *)VAR_11, VAR_12);
  return 1;
 }

 struct slave * VAR_15 = &VAR_6->s[VAR_13];
 if (VAR_15->fd == 0 || VAR_15->status == VAR_5) {
  if (VAR_15->status == VAR_4) {


   FUNC_4(VAR_14, VAR_8, VAR_7, VAR_2, 0 , ((void*)0), 0);
   FUNC_3(VAR_14, "Drop message to harbor %d from %x to %x (session = %d, msgsz = %d)",VAR_13, VAR_7, VAR_8,VAR_10,(int)VAR_12);
  } else {
   if (VAR_15->queue == ((void*)0)) {
    VAR_15->queue = FUNC_0();
   }
   struct remote_message_header VAR_16;
   VAR_16.source = VAR_7;
   VAR_16.destination = (VAR_9 << VAR_1) | (VAR_8 & VAR_0);
   VAR_16.session = (uint32_t)VAR_10;
   FUNC_1(VAR_15->queue, (void *)VAR_11, VAR_12, &VAR_16);
   return 1;
  }
 } else {
  struct remote_message_header VAR_17;
  VAR_17.source = VAR_7;
  VAR_17.destination = (VAR_8 & VAR_0) | ((uint32_t)VAR_9 << VAR_1);
  VAR_17.session = (uint32_t)VAR_10;
  FUNC_2(VAR_14, VAR_15->fd, VAR_11,VAR_12,&VAR_17);
 }

 return 0;
}
