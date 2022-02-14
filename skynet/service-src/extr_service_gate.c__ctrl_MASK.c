
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct skynet_context {int dummy; } ;
struct gate {int listen_id; int hash; int broker; struct skynet_context* ctx; } ;


 int FUNC_0 (struct gate*,int,int ,int ) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,void const*,int) ;
 int FUNC_5 (struct skynet_context*,char*,char*) ;
 int FUNC_6 (struct skynet_context*,char*) ;
 int FUNC_7 (struct skynet_context*,int) ;
 int FUNC_8 (struct skynet_context*,int) ;
 char* FUNC_9 (char**,char*) ;
 int FUNC_10 (char*,int *,int) ;
 int FUNC_11 (char*,int *,int) ;

__attribute__((used)) static void
FUNC_12(struct gate * VAR_0, const void * VAR_1, int VAR_2) {
 struct skynet_context * VAR_3 = VAR_0->ctx;
 char VAR_4[VAR_2+1];
 FUNC_4(VAR_4, VAR_1, VAR_2);
 VAR_4[VAR_2] = '\0';
 char * VAR_5 = VAR_4;
 int VAR_6;
 if (VAR_2 == 0)
  return;
 for (VAR_6=0;VAR_6<VAR_2;VAR_6++) {
  if (VAR_5[VAR_6]==' ') {
   break;
  }
 }
 if (FUNC_3(VAR_5,"kick",VAR_6)==0) {
  FUNC_1(VAR_4, VAR_2, VAR_6);
  int VAR_7 = FUNC_10(VAR_5 , ((void*)0), 10);
  int VAR_8 = FUNC_2(&VAR_0->hash, VAR_7);
  if (VAR_8>=0) {
   FUNC_7(VAR_3, VAR_7);
  }
  return;
 }
 if (FUNC_3(VAR_5,"forward",VAR_6)==0) {
  FUNC_1(VAR_4, VAR_2, VAR_6);
  char * VAR_9 = VAR_4;
  char * VAR_10 = FUNC_9(&VAR_9, " ");
  if (VAR_9 == ((void*)0)) {
   return;
  }
  int VAR_11 = FUNC_10(VAR_10 , ((void*)0), 10);
  char * VAR_12 = FUNC_9(&VAR_9, " ");
  if (VAR_9 == ((void*)0)) {
   return;
  }
  uint32_t VAR_13 = FUNC_11(VAR_12+1, ((void*)0), 16);
  uint32_t VAR_14 = FUNC_11(VAR_9+1, ((void*)0), 16);
  FUNC_0(VAR_0, VAR_11, VAR_13, VAR_14);
  return;
 }
 if (FUNC_3(VAR_5,"broker",VAR_6)==0) {
  FUNC_1(VAR_4, VAR_2, VAR_6);
  VAR_0->broker = FUNC_6(VAR_3, VAR_5);
  return;
 }
 if (FUNC_3(VAR_5,"start",VAR_6) == 0) {
  FUNC_1(VAR_4, VAR_2, VAR_6);
  int VAR_15 = FUNC_10(VAR_5 , ((void*)0), 10);
  int VAR_16 = FUNC_2(&VAR_0->hash, VAR_15);
  if (VAR_16>=0) {
   FUNC_8(VAR_3, VAR_15);
  }
  return;
 }
 if (FUNC_3(VAR_5, "close", VAR_6) == 0) {
  if (VAR_0->listen_id >= 0) {
   FUNC_7(VAR_3, VAR_0->listen_id);
   VAR_0->listen_id = -1;
  }
  return;
 }
 FUNC_5(VAR_3, "[gate] Unkown command : %s", VAR_5);
}
