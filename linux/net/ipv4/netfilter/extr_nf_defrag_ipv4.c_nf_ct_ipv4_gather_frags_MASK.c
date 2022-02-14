
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sk_buff {int ignore_df; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct net*,struct sk_buff*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct net *VAR_0, struct sk_buff *VAR_1,
       u_int32_t VAR_2)
{
 int VAR_3;

 FUNC_1();
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2();

 if (!VAR_3)
  VAR_1->ignore_df = 1;

 return VAR_3;
}
