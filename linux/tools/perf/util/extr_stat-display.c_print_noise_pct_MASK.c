
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_stat_config {char* csv_sep; int output; scalar_t__ csv_output; } ;


 int FUNC_0 (int ,char*,...) ;
 double FUNC_1 (double,double) ;

__attribute__((used)) static void FUNC_2(struct perf_stat_config *VAR_0,
       double VAR_1, double VAR_2)
{
 double VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (VAR_0->csv_output)
  FUNC_0(VAR_0->output, "%s%.2f%%", VAR_0->csv_sep, VAR_3);
 else if (VAR_3)
  FUNC_0(VAR_0->output, "  ( +-%6.2f%% )", VAR_3);
}
