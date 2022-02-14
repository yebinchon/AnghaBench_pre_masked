
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct sock*,long*,int,int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_6, long VAR_7)
{
 FUNC_0(VAR_4, VAR_5);
 int VAR_8 = 0;

 FUNC_1(FUNC_4(VAR_6), &VAR_4);
 while (1) {
  if (FUNC_5(VAR_6, &VAR_7, VAR_6->sk_state == VAR_2, &VAR_4))
   break;
  VAR_8 = -VAR_1;
  if (FUNC_3(VAR_3))
   break;
  VAR_8 = -VAR_0;
  if (!VAR_7)
   break;
  VAR_8 = 0;
 }
 FUNC_2(FUNC_4(VAR_6), &VAR_4);
 return VAR_8;
}
