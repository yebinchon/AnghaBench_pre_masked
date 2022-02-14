
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct xt_cluster_match_info {int hash_seed; } ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (void const*,int,int ) ;

__attribute__((used)) static inline u_int32_t
FUNC_1(const void *VAR_1, const struct xt_cluster_match_info *VAR_2)
{
 return FUNC_0(VAR_1, VAR_0 / sizeof(__u32), VAR_2->hash_seed);
}
