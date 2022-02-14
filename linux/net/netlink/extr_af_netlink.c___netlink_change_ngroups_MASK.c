
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {size_t sk_protocol; } ;
struct netlink_table {unsigned int groups; int listeners; } ;
struct listeners {int masks; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (struct listeners*,int ) ;
 struct listeners* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 struct listeners* FUNC_4 (int ) ;
 struct netlink_table* VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,struct listeners*) ;

int FUNC_6(struct sock *VAR_4, unsigned int VAR_5)
{
 struct listeners *VAR_6, *VAR_7;
 struct netlink_table *VAR_8 = &VAR_2[VAR_4->sk_protocol];

 if (VAR_5 < 32)
  VAR_5 = 32;

 if (FUNC_0(VAR_8->groups) < FUNC_0(VAR_5)) {
  VAR_6 = FUNC_2(sizeof(*VAR_6) + FUNC_0(VAR_5), VAR_1);
  if (!VAR_6)
   return -VAR_0;
  VAR_7 = FUNC_4(VAR_8->listeners);
  FUNC_3(VAR_6->masks, VAR_7->masks, FUNC_0(VAR_8->groups));
  FUNC_5(VAR_8->listeners, VAR_6);

  FUNC_1(VAR_7, VAR_3);
 }
 VAR_8->groups = VAR_5;

 return 0;
}
