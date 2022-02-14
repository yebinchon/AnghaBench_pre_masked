
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sock {scalar_t__ sk_state; } ;
struct TYPE_2__ {int dccps_featneg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,int ,int ,int const*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct sock*) ;

int FUNC_3(struct sock *VAR_4, u8 VAR_5, u8 VAR_6,
     u8 const *VAR_7, u8 VAR_8)
{
 if (VAR_4->sk_state != VAR_0)
  return -VAR_2;
 if (FUNC_1(VAR_5) != VAR_3)
  return -VAR_1;
 return FUNC_0(&FUNC_2(VAR_4)->dccps_featneg, VAR_5, VAR_6,
      0, VAR_7, VAR_8);
}
