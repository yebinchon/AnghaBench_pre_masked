
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nrealwriters_stress; int nrealreaders_stress; int * lrsa; int * lwsa; int cur_ops; int n_lock_torture_errors; } ;


 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int * VAR_6 ;

__attribute__((used)) static void FUNC_8(void)
{
 int VAR_7;

 if (FUNC_4())
  return;







 if (!VAR_0.lwsa && !VAR_0.lrsa)
  goto end;

 if (VAR_6) {
  for (VAR_7 = 0; VAR_7 < VAR_0.nrealwriters_stress; VAR_7++)
   FUNC_7(VAR_3,
          VAR_6[VAR_7]);
  FUNC_1(VAR_6);
  VAR_6 = ((void*)0);
 }

 if (VAR_4) {
  for (VAR_7 = 0; VAR_7 < VAR_0.nrealreaders_stress; VAR_7++)
   FUNC_7(VAR_1,
          VAR_4[VAR_7]);
  FUNC_1(VAR_4);
  VAR_4 = ((void*)0);
 }

 FUNC_7(VAR_2, VAR_5);
 FUNC_3();

 if (FUNC_0(&VAR_0.n_lock_torture_errors))
  FUNC_2(VAR_0.cur_ops,
      "End of test: FAILURE");
 else if (FUNC_6())
  FUNC_2(VAR_0.cur_ops,
      "End of test: LOCK_HOTPLUG");
 else
  FUNC_2(VAR_0.cur_ops,
      "End of test: SUCCESS");

 FUNC_1(VAR_0.lwsa);
 VAR_0.lwsa = ((void*)0);
 FUNC_1(VAR_0.lrsa);
 VAR_0.lrsa = ((void*)0);

end:
 FUNC_5();
}
