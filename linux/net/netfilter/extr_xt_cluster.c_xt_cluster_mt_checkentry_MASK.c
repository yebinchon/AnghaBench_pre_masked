
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {int family; int net; struct xt_cluster_match_info* matchinfo; } ;
struct xt_cluster_match_info {unsigned long long total_nodes; unsigned long long node_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(const struct xt_mtchk_param *VAR_3)
{
 struct xt_cluster_match_info *VAR_4 = VAR_3->matchinfo;
 int VAR_5;

 if (VAR_4->total_nodes > VAR_2) {
  FUNC_1("you have exceeded the maximum number of cluster nodes (%u > %u)\n",
        VAR_4->total_nodes, VAR_2);
  return -VAR_1;
 }
 if (VAR_4->node_mask >= (1ULL << VAR_4->total_nodes)) {
  FUNC_1("node mask cannot exceed total number of nodes\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_0(VAR_3->net, VAR_3->family);
 if (VAR_5 < 0)
  FUNC_1("cannot load conntrack support for proto=%u\n",
        VAR_3->family);
 return VAR_5;
}
