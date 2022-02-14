
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgmt_pending_cmd {int * sk; } ;
struct cmd_lookup {int * sk; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mgmt_pending_cmd *VAR_0, void *VAR_1)
{
 struct cmd_lookup *VAR_2 = VAR_1;

 if (VAR_2->sk == ((void*)0)) {
  VAR_2->sk = VAR_0->sk;
  FUNC_0(VAR_2->sk);
 }
}
