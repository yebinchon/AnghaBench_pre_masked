
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sigaction {int sa_flags; int sa_sigaction; int sa_mask; } ;
struct TYPE_9__ {int ss_flags; void* ss_size; scalar_t__ ss_sp; } ;
typedef TYPE_2__ stack_t ;
struct TYPE_8__ {void* ss_size; scalar_t__ ss_sp; } ;
struct TYPE_10__ {TYPE_1__ uc_stack; int * uc_link; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_9 (int *,void*,int,int,int,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,struct sigaction*,int *) ;
 int FUNC_12 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_13 (int *) ;
 scalar_t__ VAR_19 ;
 int FUNC_14 (scalar_t__) ;
 int VAR_20 ;
 TYPE_3__ VAR_21 ;
 scalar_t__ VAR_22 ;

int FUNC_15(void)
{
 struct sigaction VAR_23;
 stack_t VAR_24;
 int VAR_25;

 FUNC_5();
 FUNC_6(3);

 FUNC_13(&VAR_23.sa_mask);
 VAR_23.sa_flags = VAR_8 | VAR_9;
 VAR_23.sa_sigaction = VAR_17;
 FUNC_11(VAR_11, &VAR_23, ((void*)0));
 VAR_23.sa_sigaction = VAR_18;
 FUNC_11(VAR_12, &VAR_23, ((void*)0));
 VAR_19 = FUNC_9(((void*)0), VAR_10, VAR_6 | VAR_7,
        VAR_4 | VAR_2 | VAR_5, -1, 0);
 if (VAR_19 == VAR_3) {
  FUNC_2("mmap() - %s\n", FUNC_14(VAR_16));
  return VAR_1;
 }

 VAR_25 = FUNC_12(((void*)0), &VAR_24);
 if (VAR_25) {
  FUNC_2("sigaltstack() - %s\n", FUNC_14(VAR_16));
  FUNC_0(VAR_1);
 }
 if (VAR_24.ss_flags == VAR_14) {
  FUNC_7(
    "Initial sigaltstack state was SS_DISABLE\n");
 } else {
  FUNC_2("Initial sigaltstack state was %x; "
         "should have been SS_DISABLE\n", VAR_24.ss_flags);
  return VAR_1;
 }

 VAR_24.ss_sp = VAR_19;
 VAR_24.ss_size = VAR_10;
 VAR_24.ss_flags = VAR_15 | VAR_13;
 VAR_25 = FUNC_12(&VAR_24, ((void*)0));
 if (VAR_25) {
  if (VAR_16 == VAR_0) {
   FUNC_4(
    "[NOTE]\tThe running kernel doesn't support SS_AUTODISARM\n");






   return 0;
  } else {
   FUNC_2(
    "sigaltstack(SS_ONSTACK | SS_AUTODISARM)  %s\n",
     FUNC_14(VAR_16));
   return VAR_1;
  }
 }

 VAR_22 = FUNC_9(((void*)0), VAR_10, VAR_6 | VAR_7,
        VAR_4 | VAR_2 | VAR_5, -1, 0);
 if (VAR_22 == VAR_3) {
  FUNC_2("mmap() - %s\n", FUNC_14(VAR_16));
  return VAR_1;
 }
 FUNC_1(&VAR_21);
 VAR_21.uc_link = ((void*)0);
 VAR_21.uc_stack.ss_sp = VAR_22;
 VAR_21.uc_stack.ss_size = VAR_10;
 FUNC_8(&VAR_21, VAR_20, 0);
 FUNC_10(VAR_11);

 VAR_25 = FUNC_12(((void*)0), &VAR_24);
 if (VAR_25) {
  FUNC_2("sigaltstack() - %s\n", FUNC_14(VAR_16));
  FUNC_0(VAR_1);
 }
 if (VAR_24.ss_flags != VAR_13) {
  FUNC_2("ss_flags=%x, should be SS_AUTODISARM\n",
    VAR_24.ss_flags);
  FUNC_0(VAR_1);
 }
 FUNC_7(
   "sigaltstack is still SS_AUTODISARM after signal\n");

 FUNC_3();
 return 0;
}
