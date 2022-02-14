
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct seq_file {int dummy; } ;
struct pppox_sock {int chan; } ;
struct l2tp_session {int dummy; } ;


 int FUNC_0 (int *) ;
 struct sock* FUNC_1 (struct l2tp_session*) ;
 struct pppox_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct seq_file*,char*,int ) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct seq_file *VAR_0, void *VAR_1)
{
 struct l2tp_session *VAR_2 = VAR_1;
 struct sock *VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3) {
  struct pppox_sock *VAR_4 = FUNC_2(VAR_3);

  FUNC_3(VAR_0, "   interface %s\n", FUNC_0(&VAR_4->chan));
  FUNC_4(VAR_3);
 }
}
