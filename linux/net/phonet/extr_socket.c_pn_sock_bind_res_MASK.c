
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct sock {int sk_socket; } ;
struct TYPE_2__ {int ** sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_1__ VAR_6 ;
 int FUNC_5 (int *,struct sock*) ;
 int VAR_7 ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;

int FUNC_8(struct sock *VAR_8, u8 VAR_9)
{
 int VAR_10 = -VAR_1;

 if (!FUNC_3(FUNC_7(VAR_8), &VAR_5))
  return -VAR_3;
 if (!FUNC_0(VAR_0))
  return -VAR_4;
 if (FUNC_4(VAR_8->sk_socket))
  return -VAR_2;

 FUNC_1(&VAR_7);
 if (VAR_6.sk[VAR_9] == ((void*)0)) {
  FUNC_6(VAR_8);
  FUNC_5(VAR_6.sk[VAR_9], VAR_8);
  VAR_10 = 0;
 }
 FUNC_2(&VAR_7);
 return VAR_10;
}
