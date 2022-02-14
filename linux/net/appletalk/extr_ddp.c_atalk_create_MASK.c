
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ type; int * ops; } ;
struct sock {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct net*,int *) ;
 struct sock* FUNC_2 (struct net*,int ,int ,int *,int) ;
 int FUNC_3 (struct socket*,struct sock*) ;
 int FUNC_4 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_13, struct socket *VAR_14, int VAR_15,
   int VAR_16)
{
 struct sock *VAR_17;
 int VAR_18 = -VAR_4;

 if (!FUNC_1(VAR_13, &VAR_12))
  return -VAR_1;





 if (VAR_14->type != VAR_8 && VAR_14->type != VAR_7)
  goto out;

 VAR_18 = -VAR_3;
 if (VAR_14->type == VAR_8 && !VAR_16 && !FUNC_0(VAR_0))
  goto out;

 VAR_18 = -VAR_2;
 VAR_17 = FUNC_2(VAR_13, VAR_6, VAR_5, &VAR_11, VAR_16);
 if (!VAR_17)
  goto out;
 VAR_18 = 0;
 VAR_14->ops = &VAR_10;
 FUNC_3(VAR_14, VAR_17);


 FUNC_4(VAR_17, VAR_9);
out:
 return VAR_18;
}
