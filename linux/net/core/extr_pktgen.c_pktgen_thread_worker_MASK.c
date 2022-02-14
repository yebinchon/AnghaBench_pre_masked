
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pktgen_thread {int cpu; int control; TYPE_2__* tsk; int queue; TYPE_1__* net; int start_done; } ;
struct pktgen_dev {int dummy; } ;
struct TYPE_4__ {int comm; } ;
struct TYPE_3__ {scalar_t__ pktgen_exiting; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct pktgen_dev*) ;
 scalar_t__ FUNC_7 () ;
 struct pktgen_dev* FUNC_8 (struct pktgen_thread*) ;
 int FUNC_9 (struct pktgen_thread*) ;
 int FUNC_10 (struct pktgen_thread*) ;
 int FUNC_11 (struct pktgen_thread*) ;
 int FUNC_12 (struct pktgen_dev*) ;
 int FUNC_13 (struct pktgen_thread*) ;
 int FUNC_14 (struct pktgen_thread*) ;
 int FUNC_15 (struct pktgen_dev*) ;
 int FUNC_16 (char*,int,...) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (int ) ;
 int FUNC_20 () ;
 scalar_t__ FUNC_21 (int) ;
 int VAR_6 ;
 int FUNC_22 (int ,int,int) ;

__attribute__((used)) static int FUNC_23(void *VAR_7)
{
 FUNC_1(VAR_6);
 struct pktgen_thread *VAR_8 = VAR_7;
 struct pktgen_dev *VAR_9 = ((void*)0);
 int VAR_10 = VAR_8->cpu;

 FUNC_0(FUNC_18() != VAR_10);

 FUNC_4(&VAR_8->queue);
 FUNC_2(&VAR_8->start_done);

 FUNC_16("starting pktgen/%d:  pid=%d\n", VAR_10, FUNC_19(VAR_5));

 FUNC_17();

 while (!FUNC_5()) {
  VAR_9 = FUNC_8(VAR_8);

  if (FUNC_21(!VAR_9 && VAR_8->control == 0)) {
   if (VAR_8->net->pktgen_exiting)
    break;
   FUNC_22(VAR_8->queue,
        VAR_8->control != 0,
        VAR_0/10);
   FUNC_20();
   continue;
  }

  if (FUNC_6(VAR_9)) {
   FUNC_15(VAR_9);

   if (FUNC_7())
    FUNC_12(VAR_9);
   else
    FUNC_3();
  }

  if (VAR_8->control & VAR_4) {
   FUNC_14(VAR_8);
   VAR_8->control &= ~(VAR_4);
  }

  if (VAR_8->control & VAR_3) {
   FUNC_13(VAR_8);
   VAR_8->control &= ~(VAR_3);
  }

  if (VAR_8->control & VAR_2) {
   FUNC_9(VAR_8);
   VAR_8->control &= ~(VAR_2);
  }

  if (VAR_8->control & VAR_1) {
   FUNC_10(VAR_8);
   VAR_8->control &= ~(VAR_1);
  }

  FUNC_20();
 }

 FUNC_16("%s stopping all device\n", VAR_8->tsk->comm);
 FUNC_14(VAR_8);

 FUNC_16("%s removing all device\n", VAR_8->tsk->comm);
 FUNC_9(VAR_8);

 FUNC_16("%s removing thread\n", VAR_8->tsk->comm);
 FUNC_11(VAR_8);

 return 0;
}
