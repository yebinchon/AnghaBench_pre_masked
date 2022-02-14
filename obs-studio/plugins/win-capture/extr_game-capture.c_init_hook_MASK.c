
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; } ;
struct game_capture {int active; scalar_t__ retrying; int * next_window; int * window; int hook_init; TYPE_1__ config; } ;
struct dstr {int array; int member_0; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct game_capture*) ;
 int FUNC_2 (struct dstr*) ;
 scalar_t__ FUNC_3 (struct dstr*,int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct game_capture*) ;
 int FUNC_6 (struct game_capture*) ;
 int FUNC_7 (struct game_capture*) ;
 int FUNC_8 (struct game_capture*) ;
 int FUNC_9 (struct game_capture*) ;
 int FUNC_10 (struct game_capture*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct game_capture*) ;
 scalar_t__ FUNC_13 (struct game_capture*) ;

__attribute__((used)) static bool FUNC_14(struct game_capture *VAR_1)
{
 struct dstr VAR_2 = {0};
 bool VAR_3 = 0;

 if (VAR_1->config.mode == VAR_0) {
  if (FUNC_3(&VAR_2, VAR_1->next_window)) {
   FUNC_4("attempting to hook fullscreen process: %s",
        VAR_2.array);
  }
 } else {
  if (FUNC_3(&VAR_2, VAR_1->next_window)) {
   FUNC_4("attempting to hook process: %s", VAR_2.array);
  }
 }

 VAR_3 = FUNC_11(VAR_2.array);
 if (VAR_3)
  FUNC_4("cannot capture %s due to being blacklisted", VAR_2.array);
 FUNC_2(&VAR_2);

 if (VAR_3) {
  return 0;
 }
 if (FUNC_13(VAR_1)) {
  return 0;
 }
 if (!FUNC_12(VAR_1)) {
  return 0;
 }
 if (!FUNC_7(VAR_1)) {
  return 0;
 }
 if (!FUNC_8(VAR_1)) {
  return 0;
 }
 if (!FUNC_1(VAR_1)) {
  if (!FUNC_10(VAR_1)) {
   return 0;
  }
 }
 if (!FUNC_9(VAR_1)) {
  return 0;
 }
 if (!FUNC_6(VAR_1)) {
  return 0;
 }
 if (!FUNC_5(VAR_1)) {
  return 0;
 }

 FUNC_0(VAR_1->hook_init);

 VAR_1->window = VAR_1->next_window;
 VAR_1->next_window = ((void*)0);
 VAR_1->active = 1;
 VAR_1->retrying = 0;
 return 1;
}
