
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seg6_hmac_info {scalar_t__ hmackeyid; } ;
struct rhashtable_compare_arg {scalar_t__ key; } ;
typedef scalar_t__ __u32 ;



__attribute__((used)) static int FUNC_0(struct rhashtable_compare_arg *VAR_0, const void *VAR_1)
{
 const struct seg6_hmac_info *VAR_2 = VAR_1;

 return (VAR_2->hmackeyid != *(__u32 *)VAR_0->key);
}
