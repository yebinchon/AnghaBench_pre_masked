
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AutoPrewarmSharedState ;


 int FUNC_0 (char*,char*,int *,scalar_t__*,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (char*,char*,char*,int *,int,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_6(void)
{
 FUNC_1("pg_prewarm.autoprewarm_interval",
       "Sets the interval between dumps of shared buffers",
       "If set to zero, time-based dumping is disabled.",
       &VAR_5,
       300,
       0, VAR_1 / 1000,
       VAR_3,
       VAR_0,
       ((void*)0),
       ((void*)0),
       ((void*)0));

 if (!VAR_6)
  return;


 FUNC_0("pg_prewarm.autoprewarm",
        "Starts the autoprewarm worker.",
        ((void*)0),
        &VAR_4,
        1,
        VAR_2,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));

 FUNC_2("pg_prewarm");

 FUNC_4(FUNC_3(sizeof(AutoPrewarmSharedState)));


 if (VAR_4)
  FUNC_5();
}
