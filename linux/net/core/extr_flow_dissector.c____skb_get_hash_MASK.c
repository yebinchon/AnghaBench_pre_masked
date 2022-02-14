
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct flow_keys {int dummy; } ;
typedef int siphash_key_t ;


 int VAR_0 ;
 int FUNC_0 (struct flow_keys*,int const*) ;
 int FUNC_1 (struct sk_buff const*,struct flow_keys*,int ) ;

__attribute__((used)) static inline u32 FUNC_2(const struct sk_buff *VAR_1,
      struct flow_keys *VAR_2,
      const siphash_key_t *VAR_3)
{
 FUNC_1(VAR_1, VAR_2,
       VAR_0);

 return FUNC_0(VAR_2, VAR_3);
}
