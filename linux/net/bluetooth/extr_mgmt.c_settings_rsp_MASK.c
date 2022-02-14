
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgmt_pending_cmd {int * sk; int list; int opcode; } ;
struct cmd_lookup {int * sk; int hdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mgmt_pending_cmd*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mgmt_pending_cmd *VAR_0, void *VAR_1)
{
 struct cmd_lookup *VAR_2 = VAR_1;

 FUNC_2(VAR_0->sk, VAR_0->opcode, VAR_2->hdev);

 FUNC_0(&VAR_0->list);

 if (VAR_2->sk == ((void*)0)) {
  VAR_2->sk = VAR_0->sk;
  FUNC_3(VAR_2->sk);
 }

 FUNC_1(VAR_0);
}
