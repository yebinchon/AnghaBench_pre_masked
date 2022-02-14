
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_session {int dummy; } ;
struct TYPE_3__ {int hists; } ;
struct TYPE_4__ {TYPE_1__ hists; scalar_t__ stats_only; } ;
typedef int FILE ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int,int ,int ,int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct perf_session*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(FILE *VAR_2, struct perf_session *VAR_3)
{
 FUNC_6();

 FUNC_2(VAR_2);
 FUNC_0(VAR_2, "\n");
 FUNC_5(VAR_2);
 FUNC_0(VAR_2, "\n");
 FUNC_3(VAR_2, VAR_3);

 if (VAR_0.stats_only)
  return;

 FUNC_0(VAR_2, "\n");
 FUNC_0(VAR_2, "=================================================\n");
 FUNC_0(VAR_2, "           Shared Data Cache Line Table          \n");
 FUNC_0(VAR_2, "=================================================\n");
 FUNC_0(VAR_2, "#\n");

 FUNC_1(&VAR_0.hists.hists, 1, 0, 0, 0, VAR_1, 1);

 FUNC_0(VAR_2, "\n");
 FUNC_0(VAR_2, "=================================================\n");
 FUNC_0(VAR_2, "      Shared Cache Line Distribution Pareto      \n");
 FUNC_0(VAR_2, "=================================================\n");
 FUNC_0(VAR_2, "#\n");

 FUNC_4(VAR_2);
}
