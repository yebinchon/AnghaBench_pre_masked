
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct pimhdr {int dummy; } ;
struct net_bridge_port {int dummy; } ;
struct net_bridge {int dummy; } ;
typedef int _pimhdr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_bridge*,struct net_bridge_port*) ;
 scalar_t__ FUNC_1 (struct pimhdr*) ;
 scalar_t__ FUNC_2 (struct pimhdr*) ;
 struct pimhdr* FUNC_3 (struct sk_buff const*,unsigned int,int,struct pimhdr*) ;
 unsigned int FUNC_4 (struct sk_buff const*) ;

__attribute__((used)) static void FUNC_5(struct net_bridge *VAR_2,
        struct net_bridge_port *VAR_3,
        const struct sk_buff *VAR_4)
{
 unsigned int VAR_5 = FUNC_4(VAR_4);
 struct pimhdr *VAR_6, VAR_7;

 VAR_6 = FUNC_3(VAR_4, VAR_5, sizeof(VAR_7), &VAR_7);
 if (!VAR_6 || FUNC_2(VAR_6) != VAR_1 ||
     FUNC_1(VAR_6) != VAR_0)
  return;

 FUNC_0(VAR_2, VAR_3);
}
