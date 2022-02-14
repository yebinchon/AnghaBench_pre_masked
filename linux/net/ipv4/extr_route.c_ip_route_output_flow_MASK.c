
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct rtable {int dst; } ;
struct net {int dummy; } ;
struct flowi4 {scalar_t__ flowi4_proto; } ;


 scalar_t__ FUNC_0 (struct rtable*) ;
 struct rtable* FUNC_1 (struct net*,struct flowi4*) ;
 int FUNC_2 (struct flowi4*) ;
 scalar_t__ FUNC_3 (struct net*,int *,int ,struct sock const*,int ) ;

struct rtable *FUNC_4(struct net *VAR_0, struct flowi4 *VAR_1,
        const struct sock *VAR_2)
{
 struct rtable *VAR_3 = FUNC_1(VAR_0, VAR_1);

 if (FUNC_0(VAR_3))
  return VAR_3;

 if (VAR_1->flowi4_proto)
  VAR_3 = (struct rtable *)FUNC_3(VAR_0, &VAR_3->dst,
       FUNC_2(VAR_1),
       VAR_2, 0);

 return VAR_3;
}
