
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
typedef int can_err_mask_t ;


 int VAR_0 ;
 int FUNC_0 (struct net*,struct net_device*,int ,int,int ,struct sock*,char*,struct sock*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct net *VAR_2, struct net_device *VAR_3,
    struct sock *VAR_4, can_err_mask_t VAR_5)
{
 int VAR_6 = 0;

 if (VAR_5)
  VAR_6 = FUNC_0(VAR_2, VAR_3, 0, VAR_5 | VAR_0,
          VAR_1, VAR_4, "raw", VAR_4);

 return VAR_6;
}
