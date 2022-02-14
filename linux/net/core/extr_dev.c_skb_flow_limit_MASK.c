
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct softnet_data {int flow_limit; } ;
struct sk_buff {int dummy; } ;
struct sd_flow_limit {int num_buckets; unsigned int* history; size_t history_head; int* buckets; int count; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 struct sd_flow_limit* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct sk_buff*) ;
 int VAR_2 ;
 struct softnet_data* FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6(struct sk_buff *VAR_3, unsigned int VAR_4)
{
 return 0;
}
