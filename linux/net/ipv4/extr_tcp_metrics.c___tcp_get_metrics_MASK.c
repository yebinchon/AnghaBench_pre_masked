
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_metrics_block {int tcpm_daddr; int tcpm_saddr; int tcpm_next; } ;
struct net {int dummy; } ;
struct inetpeer_addr {int dummy; } ;
struct TYPE_2__ {int chain; } ;


 scalar_t__ FUNC_0 (int *,struct inetpeer_addr const*) ;
 scalar_t__ FUNC_1 (int ,struct net*) ;
 struct tcp_metrics_block* FUNC_2 (int ) ;
 struct tcp_metrics_block* FUNC_3 (struct tcp_metrics_block*,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (struct tcp_metrics_block*) ;

__attribute__((used)) static struct tcp_metrics_block *FUNC_5(const struct inetpeer_addr *VAR_1,
         const struct inetpeer_addr *VAR_2,
         struct net *VAR_3, unsigned int VAR_4)
{
 struct tcp_metrics_block *VAR_5;
 int VAR_6 = 0;

 for (VAR_5 = FUNC_2(VAR_0[VAR_4].chain); VAR_5;
      VAR_5 = FUNC_2(VAR_5->tcpm_next)) {
  if (FUNC_0(&VAR_5->tcpm_saddr, VAR_1) &&
      FUNC_0(&VAR_5->tcpm_daddr, VAR_2) &&
      FUNC_1(FUNC_4(VAR_5), VAR_3))
   break;
  VAR_6++;
 }
 return FUNC_3(VAR_5, VAR_6);
}
