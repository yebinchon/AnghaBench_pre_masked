
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {size_t sk_family; scalar_t__ sk_kern_sock; } ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct sock*,int ,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct sock *VAR_8)
{
 if (VAR_8->sk_kern_sock)
  FUNC_0(
   VAR_8,
   VAR_2[VAR_8->sk_family],
   VAR_3 + VAR_8->sk_family,
   VAR_0[VAR_8->sk_family],
   VAR_1 + VAR_8->sk_family);
 else
  FUNC_0(
   VAR_8,
   VAR_6[VAR_8->sk_family],
   VAR_7 + VAR_8->sk_family,
   VAR_4[VAR_8->sk_family],
   VAR_5 + VAR_8->sk_family);
}
