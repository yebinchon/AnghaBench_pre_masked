
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2tp_dfs_seq_data {int tunnel_idx; int net; scalar_t__ tunnel; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct l2tp_dfs_seq_data *VAR_0)
{

 if (VAR_0->tunnel)
  FUNC_0(VAR_0->tunnel);

 VAR_0->tunnel = FUNC_1(VAR_0->net, VAR_0->tunnel_idx);
 VAR_0->tunnel_idx++;
}
