
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_family; scalar_t__ sk_prot; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__*,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_8)
{
 int VAR_9 = VAR_8->sk_family == VAR_0 ? VAR_2 : VAR_1;


 if (VAR_9 == VAR_2 &&
     FUNC_6(VAR_8->sk_prot != FUNC_4(&VAR_4))) {
  FUNC_2(&VAR_6);
  if (FUNC_1(VAR_8->sk_prot != VAR_4)) {
   FUNC_0(VAR_7[VAR_2], VAR_8->sk_prot);
   FUNC_5(&VAR_4, VAR_8->sk_prot);
  }
  FUNC_3(&VAR_6);
 }

 if (VAR_9 == VAR_1 &&
     FUNC_6(VAR_8->sk_prot != FUNC_4(&VAR_3))) {
  FUNC_2(&VAR_5);
  if (FUNC_1(VAR_8->sk_prot != VAR_3)) {
   FUNC_0(VAR_7[VAR_1], VAR_8->sk_prot);
   FUNC_5(&VAR_3, VAR_8->sk_prot);
  }
  FUNC_3(&VAR_5);
 }
}
