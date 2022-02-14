
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mgmt_pending_cmd {int param; int opcode; int index; int sk; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct mgmt_pending_cmd *VAR_0,
       u8 VAR_1)
{
 return FUNC_0(VAR_0->sk, VAR_0->index, VAR_0->opcode, VAR_1,
     VAR_0->param, 1);
}
