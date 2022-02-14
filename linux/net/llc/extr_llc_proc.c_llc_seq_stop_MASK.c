
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct seq_file {int dummy; } ;
struct llc_sock {struct llc_sap* sap; } ;
struct llc_sap {int sk_lock; } ;


 void* VAR_0 ;
 struct llc_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 if (VAR_2 && VAR_2 != VAR_0) {
  struct sock *VAR_3 = VAR_2;
  struct llc_sock *VAR_4 = FUNC_0(VAR_3);
  struct llc_sap *VAR_5 = VAR_4->sap;

  FUNC_2(&VAR_5->sk_lock);
 }
 FUNC_1();
}
