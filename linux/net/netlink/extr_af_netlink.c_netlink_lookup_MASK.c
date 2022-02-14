
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct netlink_table {int dummy; } ;
struct net {int dummy; } ;


 struct sock* FUNC_0 (struct netlink_table*,int ,struct net*) ;
 struct netlink_table* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static struct sock *FUNC_4(struct net *VAR_1, int VAR_2, u32 VAR_3)
{
 struct netlink_table *VAR_4 = &VAR_0[VAR_2];
 struct sock *VAR_5;

 FUNC_1();
 VAR_5 = FUNC_0(VAR_4, VAR_3, VAR_1);
 if (VAR_5)
  FUNC_3(VAR_5);
 FUNC_2();

 return VAR_5;
}
