
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_bridge_fdb_entry {int dummy; } ;
struct net_bridge {int dev; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct net_bridge_fdb_entry const*,int) ;
 struct net* FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,struct net_bridge*,struct net_bridge_fdb_entry const*,int ,int ,int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct sk_buff*,struct net*,int ,int ,int *,int ) ;
 int FUNC_8 (struct net*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct net_bridge *VAR_4,
         const struct net_bridge_fdb_entry *VAR_5, int VAR_6,
         bool VAR_7)
{
 struct net *VAR_8 = FUNC_2(VAR_4->dev);
 struct sk_buff *VAR_9;
 int VAR_10 = -VAR_1;

 if (VAR_7)
  FUNC_1(VAR_5, VAR_6);

 VAR_9 = FUNC_6(FUNC_4(), VAR_2);
 if (VAR_9 == ((void*)0))
  goto errout;

 VAR_10 = FUNC_3(VAR_9, VAR_4, VAR_5, 0, 0, VAR_6, 0);
 if (VAR_10 < 0) {

  FUNC_0(VAR_10 == -VAR_0);
  FUNC_5(VAR_9);
  goto errout;
 }
 FUNC_7(VAR_9, VAR_8, 0, VAR_3, ((void*)0), VAR_2);
 return;
errout:
 FUNC_8(VAR_8, VAR_3, VAR_10);
}
