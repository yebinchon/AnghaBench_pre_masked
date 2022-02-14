
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int jiffies_kick_kthreads; scalar_t__ gp_kthread; int name; int gp_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(void)
{
 unsigned long VAR_5;

 if (!VAR_3)
  return;
 VAR_5 = FUNC_0(VAR_4.jiffies_kick_kthreads);
 if (FUNC_5(VAR_2, VAR_5) && VAR_4.gp_kthread &&
     (FUNC_4() || FUNC_0(VAR_4.gp_flags))) {
  FUNC_1(1, "Kicking %s grace-period kthread\n",
     VAR_4.name);
  FUNC_3(VAR_0);
  FUNC_6(VAR_4.gp_kthread);
  FUNC_2(VAR_4.jiffies_kick_kthreads, VAR_5 + VAR_1);
 }
}
