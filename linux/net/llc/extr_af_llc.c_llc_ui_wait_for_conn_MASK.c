
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct sock*,long*,int,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_6(struct sock *VAR_4, long VAR_5)
{
 FUNC_0(VAR_2, VAR_3);

 FUNC_1(FUNC_4(VAR_4), &VAR_2);
 while (1) {
  if (FUNC_5(VAR_4, &VAR_5, VAR_4->sk_state != VAR_0, &VAR_2))
   break;
  if (FUNC_3(VAR_1) || !VAR_5)
   break;
 }
 FUNC_2(FUNC_4(VAR_4), &VAR_2);
 return VAR_5;
}
