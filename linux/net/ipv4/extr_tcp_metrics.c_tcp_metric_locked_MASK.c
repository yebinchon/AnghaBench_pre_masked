
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_metrics_block {int tcpm_lock; } ;
typedef enum tcp_metric_index { ____Placeholder_tcp_metric_index } tcp_metric_index ;



__attribute__((used)) static bool FUNC_0(struct tcp_metrics_block *VAR_0,
         enum tcp_metric_index VAR_1)
{
 return VAR_0->tcpm_lock & (1 << VAR_1);
}
