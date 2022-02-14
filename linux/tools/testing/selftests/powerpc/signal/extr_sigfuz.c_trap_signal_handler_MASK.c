
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int* gp_regs; } ;
struct TYPE_12__ {TYPE_4__* uc_link; TYPE_1__ uc_mcontext; } ;
typedef TYPE_3__ ucontext_t ;
typedef int siginfo_t ;
struct TYPE_11__ {int* gp_regs; } ;
struct TYPE_13__ {TYPE_2__ uc_mcontext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int,int ) ;
 TYPE_4__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,void*,int) ;
 int FUNC_4 (TYPE_4__*,int ,int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 () ;
 void* FUNC_8 () ;
 TYPE_4__* VAR_20 ;

__attribute__((used)) static void FUNC_9(int VAR_21, siginfo_t *VAR_22, void *VAR_23)
{
 ucontext_t *VAR_24 = VAR_23;

 VAR_24->uc_link = VAR_20;







 if (FUNC_6(3)) {
  FUNC_4(VAR_24->uc_link, FUNC_7(), sizeof(ucontext_t));
 } else if (FUNC_6(2)) {
  FUNC_3(VAR_24->uc_link, VAR_23, sizeof(ucontext_t));
 } else if (FUNC_6(2)) {
  if (VAR_20) {
   FUNC_0(VAR_20);
   VAR_20 = ((void*)0);
  }
  VAR_20 = FUNC_2(sizeof(ucontext_t));
  VAR_24->uc_link = VAR_20;

  FUNC_1(VAR_24->uc_link, sizeof(ucontext_t), VAR_2);
 }

 if (VAR_19 & VAR_0) {

  if (FUNC_6(4)) {
   VAR_24->uc_link->uc_mcontext.gp_regs[VAR_11] |= VAR_3;
  } else {
   if (FUNC_6(2)) {
    VAR_24->uc_link->uc_mcontext.gp_regs[VAR_11] |=
       VAR_4;
   } else if (FUNC_6(2)) {
    VAR_24->uc_link->uc_mcontext.gp_regs[VAR_11] |=
      VAR_4 | VAR_3;
   }
  }


  if (FUNC_6(2)) {
   VAR_24->uc_mcontext.gp_regs[VAR_11] |= VAR_3;
  } else if (FUNC_6(2)) {
   if (FUNC_6(2))
    VAR_24->uc_mcontext.gp_regs[VAR_11] |=
     VAR_4;
   else if (FUNC_6(2))
    VAR_24->uc_mcontext.gp_regs[VAR_11] |=
     VAR_4 | VAR_3;
  }
 }

 if (FUNC_6(20)) {

  if (FUNC_6(5))
   FUNC_5();


  return;
 }

 if (FUNC_6(10))
  VAR_24->uc_mcontext.gp_regs[VAR_11] = FUNC_8();
 if (FUNC_6(10))
  VAR_24->uc_mcontext.gp_regs[VAR_12] = FUNC_8();
 if (FUNC_6(10))
  VAR_24->uc_link->uc_mcontext.gp_regs[VAR_11] = FUNC_8();
 if (FUNC_6(10))
  VAR_24->uc_link->uc_mcontext.gp_regs[VAR_12] = FUNC_8();

 VAR_24->uc_mcontext.gp_regs[VAR_17] = FUNC_8();
 VAR_24->uc_mcontext.gp_regs[VAR_9] = FUNC_8();
 VAR_24->uc_mcontext.gp_regs[VAR_7] = FUNC_8();
 VAR_24->uc_mcontext.gp_regs[VAR_13] = FUNC_8();
 VAR_24->uc_mcontext.gp_regs[VAR_18] = FUNC_8();
 VAR_24->uc_mcontext.gp_regs[VAR_15] = FUNC_8();
 VAR_24->uc_mcontext.gp_regs[VAR_16] = FUNC_8();
 VAR_24->uc_mcontext.gp_regs[VAR_8] = FUNC_8();
 VAR_24->uc_mcontext.gp_regs[VAR_6] = FUNC_8();
 VAR_24->uc_mcontext.gp_regs[VAR_10] = FUNC_8();
 VAR_24->uc_mcontext.gp_regs[VAR_5] = FUNC_8();
 VAR_24->uc_mcontext.gp_regs[VAR_14] = FUNC_8();

 VAR_24->uc_link->uc_mcontext.gp_regs[VAR_17] = FUNC_8();
 VAR_24->uc_link->uc_mcontext.gp_regs[VAR_9] = FUNC_8();
 VAR_24->uc_link->uc_mcontext.gp_regs[VAR_7] = FUNC_8();
 VAR_24->uc_link->uc_mcontext.gp_regs[VAR_13] = FUNC_8();
 VAR_24->uc_link->uc_mcontext.gp_regs[VAR_18] = FUNC_8();
 VAR_24->uc_link->uc_mcontext.gp_regs[VAR_15] = FUNC_8();
 VAR_24->uc_link->uc_mcontext.gp_regs[VAR_16] = FUNC_8();
 VAR_24->uc_link->uc_mcontext.gp_regs[VAR_8] = FUNC_8();
 VAR_24->uc_link->uc_mcontext.gp_regs[VAR_6] = FUNC_8();
 VAR_24->uc_link->uc_mcontext.gp_regs[VAR_10] = FUNC_8();
 VAR_24->uc_link->uc_mcontext.gp_regs[VAR_5] = FUNC_8();
 VAR_24->uc_link->uc_mcontext.gp_regs[VAR_14] = FUNC_8();

 if (VAR_19 & VAR_1) {
  if (FUNC_6(2))
   FUNC_5();
 }
}
