
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {int dummy; } ;
struct skynet_config {char* logservice; scalar_t__ daemon; int thread; int bootstrap; int logger; int profile; int module_path; int harbor; } ;
struct sigaction {int sa_mask; int sa_flags; int * sa_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct skynet_context*,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,char*) ;
 int VAR_2 ;
 int FUNC_5 (int ,struct sigaction*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct skynet_context*) ;
 struct skynet_context* FUNC_8 (char*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (int ) ;
 int VAR_3 ;

void
FUNC_20(struct skynet_config * VAR_4) {

 struct sigaction VAR_5;
 VAR_5.sa_handler = &VAR_2;
 VAR_5.sa_flags = VAR_0;
 FUNC_6(&VAR_5.sa_mask);
 FUNC_5(VAR_1, &VAR_5, ((void*)0));

 if (VAR_4->daemon) {
  if (FUNC_2(VAR_4->daemon)) {
   FUNC_3(1);
  }
 }
 FUNC_12(VAR_4->harbor);
 FUNC_9(VAR_4->harbor);
 FUNC_14();
 FUNC_13(VAR_4->module_path);
 FUNC_18();
 FUNC_17();
 FUNC_15(VAR_4->profile);

 struct skynet_context *VAR_6 = FUNC_8(VAR_4->logservice, VAR_4->logger);
 if (VAR_6 == ((void*)0)) {
  FUNC_4(VAR_3, "Can't launch %s service\n", VAR_4->logservice);
  FUNC_3(1);
 }

 FUNC_10(FUNC_7(VAR_6), "logger");

 FUNC_0(VAR_6, VAR_4->bootstrap);

 FUNC_19(VAR_4->thread);


 FUNC_11();
 FUNC_16();
 if (VAR_4->daemon) {
  FUNC_1(VAR_4->daemon);
 }
}
