
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ type; } ;
struct sock {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct socket*,struct sock*,int) ;
 int VAR_5 ;
 struct sock* FUNC_1 (struct net*,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct net *VAR_6, struct socket *VAR_7, int VAR_8,
        int VAR_9)
{
 struct sock *VAR_10;

 if (VAR_7->type != VAR_4 || VAR_8)
  return -VAR_2;

 VAR_10 = FUNC_1(VAR_6, VAR_0, VAR_3, &VAR_5, VAR_9);
 if (!VAR_10)
  return -VAR_1;

 return FUNC_0(VAR_7, VAR_10, VAR_8);
}
