
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sk_buff {int dummy; } ;
struct netns_ipvs {int net; } ;


 int FUNC_0 (int ,struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static inline int FUNC_5(struct netns_ipvs *VAR_0,
         struct sk_buff *VAR_1, u_int32_t VAR_2)
{
 int VAR_3;

 FUNC_3();
 VAR_3 = FUNC_0(VAR_0->net, VAR_1, VAR_2);
 FUNC_4();
 if (!VAR_3)
  FUNC_2(FUNC_1(VAR_1));

 return VAR_3;
}
