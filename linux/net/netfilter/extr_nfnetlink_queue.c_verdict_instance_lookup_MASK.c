
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct nfqnl_instance {scalar_t__ peer_portid; } ;
struct nfnl_queue_net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfqnl_instance* FUNC_0 (int ) ;
 struct nfqnl_instance* FUNC_1 (struct nfnl_queue_net*,int ) ;

__attribute__((used)) static struct nfqnl_instance *
FUNC_2(struct nfnl_queue_net *VAR_2, u16 VAR_3, u32 VAR_4)
{
 struct nfqnl_instance *VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 if (VAR_5->peer_portid != VAR_4)
  return FUNC_0(-VAR_1);

 return VAR_5;
}
