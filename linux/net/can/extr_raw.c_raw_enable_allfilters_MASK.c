
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct raw_sock {int count; int filter; int err_mask; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct net*,struct net_device*,struct sock*,int ,int ) ;
 int FUNC_1 (struct net*,struct net_device*,struct sock*,int ) ;
 int FUNC_2 (struct net*,struct net_device*,struct sock*,int ,int ) ;
 struct raw_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct net *VAR_0, struct net_device *VAR_1,
     struct sock *VAR_2)
{
 struct raw_sock *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3->filter, VAR_3->count);
 if (!VAR_4) {
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3->err_mask);
  if (VAR_4)
   FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3->filter,
         VAR_3->count);
 }

 return VAR_4;
}
