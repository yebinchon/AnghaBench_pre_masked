
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ sk; } ;
struct aa_sk_ctx {struct aa_label* label; } ;
struct aa_ns {int dummy; } ;
struct aa_label {int dummy; } ;


 struct aa_sk_ctx* FUNC_0 (scalar_t__) ;
 struct aa_label* FUNC_1 () ;
 struct aa_ns* FUNC_2 () ;
 void* FUNC_3 (struct aa_label*) ;
 int FUNC_4 (struct aa_label*) ;
 int FUNC_5 (struct aa_ns*) ;
 struct aa_label* FUNC_6 (struct aa_ns*) ;

__attribute__((used)) static int FUNC_7(struct socket *VAR_0, int VAR_1,
           int VAR_2, int VAR_3, int VAR_4)
{
 struct aa_label *VAR_5;

 if (VAR_4) {
  struct aa_ns *VAR_6 = FUNC_2();

  VAR_5 = FUNC_3(FUNC_6(VAR_6));
  FUNC_5(VAR_6);
 } else
  VAR_5 = FUNC_1();

 if (VAR_0->sk) {
  struct aa_sk_ctx *VAR_7 = FUNC_0(VAR_0->sk);

  FUNC_4(VAR_7->label);
  VAR_7->label = FUNC_3(VAR_5);
 }
 FUNC_4(VAR_5);

 return 0;
}
