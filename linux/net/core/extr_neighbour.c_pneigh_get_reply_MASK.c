
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct pneigh_entry {int dummy; } ;
struct net {int dummy; } ;
struct neigh_table {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*,struct pneigh_entry*,int ,int ,int ,int ,struct neigh_table*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct sk_buff*,struct net*,int ) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_3, struct pneigh_entry *VAR_4,
       u32 VAR_5, u32 VAR_6, struct neigh_table *VAR_7)
{
 struct sk_buff *VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_1(FUNC_3(), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_8, VAR_4, VAR_5, VAR_6, VAR_2, 0, VAR_7);
 if (VAR_9) {
  FUNC_0(VAR_8);
  goto errout;
 }

 VAR_9 = FUNC_4(VAR_8, VAR_3, VAR_5);
errout:
 return VAR_9;
}
