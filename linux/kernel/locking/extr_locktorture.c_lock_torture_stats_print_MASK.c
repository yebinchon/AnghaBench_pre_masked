
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nrealwriters_stress; int nrealreaders_stress; int lrsa; TYPE_1__* cur_ops; int lwsa; } ;
struct TYPE_3__ {scalar_t__ readlock; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static void FUNC_5(void)
{
 int VAR_2 = VAR_1.nrealwriters_stress * 200 + 8192;
 char *VAR_3;

 if (VAR_1.cur_ops->readlock)
  VAR_2 += VAR_1.nrealreaders_stress * 200 + 8192;

 VAR_3 = FUNC_2(VAR_2, VAR_0);
 if (!VAR_3) {
  FUNC_4("lock_torture_stats_print: Out of memory, need: %d",
         VAR_2);
  return;
 }

 FUNC_0(VAR_3, VAR_1.lwsa, 1);
 FUNC_3("%s", VAR_3);
 FUNC_1(VAR_3);

 if (VAR_1.cur_ops->readlock) {
  VAR_3 = FUNC_2(VAR_2, VAR_0);
  if (!VAR_3) {
   FUNC_4("lock_torture_stats_print: Out of memory, need: %d",
          VAR_2);
   return;
  }

  FUNC_0(VAR_3, VAR_1.lrsa, 0);
  FUNC_3("%s", VAR_3);
  FUNC_1(VAR_3);
 }
}
