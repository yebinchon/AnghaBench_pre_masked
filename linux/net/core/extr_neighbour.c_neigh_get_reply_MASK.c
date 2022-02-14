
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct neighbour {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct neighbour*,int ,int ,int ,int ) ;
 int FUNC_2 () ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct net*,int ) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_3, struct neighbour *VAR_4,
      u32 VAR_5, u32 VAR_6)
{
 struct sk_buff *VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_3(FUNC_2(), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_7, VAR_4, VAR_5, VAR_6, VAR_2, 0);
 if (VAR_8) {
  FUNC_0(VAR_7);
  goto errout;
 }

 VAR_8 = FUNC_4(VAR_7, VAR_3, VAR_5);
errout:
 return VAR_8;
}
