
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct can_filter {int can_mask; int can_id; } ;


 int FUNC_0 (struct net*,struct net_device*,int ,int ,int ,struct sock*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct net *VAR_1, struct net_device *VAR_2,
    struct sock *VAR_3, struct can_filter *VAR_4,
    int VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  FUNC_0(VAR_1, VAR_2, VAR_4[VAR_6].can_id,
      VAR_4[VAR_6].can_mask, VAR_0, VAR_3);
}
