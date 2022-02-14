
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int sk; } ;
struct flow_keys {int dummy; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct flow_keys const*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_3(const struct sk_buff *VAR_0, const struct flow_keys *VAR_1)
{
 __be32 VAR_2 = FUNC_1(VAR_1);

 if (VAR_2)
  return FUNC_2(VAR_2);

 return FUNC_0(VAR_0->sk);
}
