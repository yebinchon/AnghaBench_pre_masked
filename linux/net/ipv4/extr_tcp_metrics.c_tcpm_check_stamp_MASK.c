
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_metrics_block {scalar_t__ tcpm_stamp; } ;
struct dst_entry {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tcp_metrics_block*,struct dst_entry*,int) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct tcp_metrics_block *VAR_2, struct dst_entry *VAR_3)
{
 if (VAR_2 && FUNC_2(FUNC_1(VAR_1, VAR_2->tcpm_stamp + VAR_0)))
  FUNC_0(VAR_2, VAR_3, 0);
}
