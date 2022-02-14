
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {int dummy; } ;
struct gate {int listen_id; struct skynet_context* ctx; } ;


 int VAR_0 ;
 int FUNC_0 (struct skynet_context*,char*,char*) ;
 int FUNC_1 (struct skynet_context*,char const*,int,int ) ;
 int FUNC_2 (struct skynet_context*,int ) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,int *,int) ;

__attribute__((used)) static int
FUNC_5(struct gate *VAR_1, char * VAR_2) {
 struct skynet_context * VAR_3 = VAR_1->ctx;
 char * VAR_4 = FUNC_3(VAR_2,':');
 const char * VAR_5 = "";
 int VAR_6;
 if (VAR_4 == ((void*)0)) {
  VAR_6 = FUNC_4(VAR_2, ((void*)0), 10);
  if (VAR_6 <= 0) {
   FUNC_0(VAR_3, "Invalid gate address %s",VAR_2);
   return 1;
  }
 } else {
  VAR_6 = FUNC_4(VAR_4 + 1, ((void*)0), 10);
  if (VAR_6 <= 0) {
   FUNC_0(VAR_3, "Invalid gate address %s",VAR_2);
   return 1;
  }
  VAR_4[0] = '\0';
  VAR_5 = VAR_2;
 }
 VAR_1->listen_id = FUNC_1(VAR_3, VAR_5, VAR_6, VAR_0);
 if (VAR_1->listen_id < 0) {
  return 1;
 }
 FUNC_2(VAR_3, VAR_1->listen_id);
 return 0;
}
