
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct sock {int dummy; } ;
struct TYPE_2__ {struct sock** sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sock*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 () ;

int FUNC_6(struct sock *VAR_5, u8 VAR_6)
{
 int VAR_7 = -VAR_1;

 if (!FUNC_1(VAR_0))
  return -VAR_2;

 FUNC_2(&VAR_4);
 if (VAR_3.sk[VAR_6] == VAR_5) {
  FUNC_0(VAR_3.sk[VAR_6], ((void*)0));
  VAR_7 = 0;
 }
 FUNC_3(&VAR_4);

 if (VAR_7 == 0) {
  FUNC_5();
  FUNC_4(VAR_5);
 }
 return VAR_7;
}
