
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct flow_keys {int dummy; } ;
typedef int siphash_key_t ;
typedef int __u32 ;


 int FUNC_0 (struct sk_buff const*,struct flow_keys*,int const*) ;

__u32 FUNC_1(const struct sk_buff *VAR_0,
      const siphash_key_t *VAR_1)
{
 struct flow_keys VAR_2;

 return FUNC_0(VAR_0, &VAR_2, VAR_1);
}
