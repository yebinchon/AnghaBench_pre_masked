
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct instruction {scalar_t__ opcode; } ;
struct bytecode_buffer {int dummy; } ;
struct bc_writer {TYPE_1__* funcs; } ;
struct TYPE_4__ {scalar_t__ opcode; int (* func ) (struct bc_writer*,struct instruction const*,struct bytecode_buffer*) ;} ;
struct TYPE_3__ {TYPE_2__* instructions; } ;
typedef int HRESULT ;
typedef size_t DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct bc_writer*,struct instruction const*,struct bytecode_buffer*) ;

__attribute__((used)) static HRESULT FUNC_4(struct bc_writer *VAR_3,
                                  const struct instruction *VAR_4,
                                  struct bytecode_buffer *VAR_5) {
    DWORD VAR_6=0;

    while(VAR_3->funcs->instructions[VAR_6].opcode != VAR_0) {
        if(VAR_4->opcode == VAR_3->funcs->instructions[VAR_6].opcode) {
            if(!VAR_3->funcs->instructions[VAR_6].func) {
                FUNC_1("Opcode %u not supported by this profile\n", VAR_4->opcode);
                return VAR_1;
            }
            VAR_3->funcs->instructions[VAR_6].func(VAR_3, VAR_4, VAR_5);
            return VAR_2;
        }
        VAR_6++;
    }

    FUNC_0("Unhandled instruction %u - %s\n", VAR_4->opcode,
          FUNC_2(VAR_4->opcode));
    return VAR_1;
}
