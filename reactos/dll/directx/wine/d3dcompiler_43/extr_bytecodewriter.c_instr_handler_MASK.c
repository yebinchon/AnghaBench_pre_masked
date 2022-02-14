
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct instruction {int dstmod; int shift; int dst; scalar_t__ has_dst; int opcode; } ;
struct bytecode_buffer {int dummy; } ;
struct bc_writer {TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* dstreg ) (struct bc_writer*,int *,struct bytecode_buffer*,int ,int ) ;int (* opcode ) (struct bc_writer*,struct instruction const*,int ,struct bytecode_buffer*) ;} ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bc_writer*,struct instruction const*,int ,struct bytecode_buffer*) ;
 int FUNC_2 (struct bc_writer*,int *,struct bytecode_buffer*,int ,int ) ;
 int FUNC_3 (struct bc_writer*,struct instruction const*,struct bytecode_buffer*) ;

__attribute__((used)) static void FUNC_4(struct bc_writer *VAR_0,
                          const struct instruction *VAR_1,
                          struct bytecode_buffer *VAR_2) {
    DWORD VAR_3 = FUNC_0(VAR_1->opcode);

    VAR_0->funcs->opcode(VAR_0, VAR_1, VAR_3, VAR_2);
    if(VAR_1->has_dst) VAR_0->funcs->dstreg(VAR_0, &VAR_1->dst, VAR_2, VAR_1->shift, VAR_1->dstmod);
    FUNC_3(VAR_0, VAR_1, VAR_2);
}
