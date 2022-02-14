
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_metrics_block {int * tcpm_vals; } ;
typedef enum tcp_metric_index { ____Placeholder_tcp_metric_index } tcp_metric_index ;



__attribute__((used)) static void FUNC_0(struct tcp_metrics_block *VAR_0,
      enum tcp_metric_index VAR_1,
      u32 VAR_2)
{
 VAR_0->tcpm_vals[VAR_1] = VAR_2;
}
