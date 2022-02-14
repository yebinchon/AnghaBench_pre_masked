
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bytecode_buffer {int dummy; } ;
struct bwriter_shader {int num_inputs; int inputs; } ;
struct bc_writer {int state; } ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct bc_writer*,struct bwriter_shader const*,int) ;
 int FUNC_2 (struct bwriter_shader const*,struct bytecode_buffer*,int ) ;
 int FUNC_3 (struct bwriter_shader const*,struct bytecode_buffer*,int ) ;
 int FUNC_4 (struct bwriter_shader const*,struct bytecode_buffer*,int ) ;
 int FUNC_5 (struct bc_writer*,struct bytecode_buffer*,int ,int ,int ,int ) ;
 int FUNC_6 (struct bwriter_shader const*,struct bytecode_buffer*) ;

__attribute__((used)) static void FUNC_7(struct bc_writer *VAR_2, const struct bwriter_shader *VAR_3, struct bytecode_buffer *VAR_4) {
    HRESULT VAR_5 = FUNC_1(VAR_2, VAR_3, 8);
    if(FUNC_0(VAR_5)) {
        VAR_2->state = VAR_5;
        return;
    }

    FUNC_5(VAR_2, VAR_4, VAR_1, VAR_3->inputs, VAR_3->num_inputs, VAR_0);
    FUNC_6(VAR_3, VAR_4);
    FUNC_3(VAR_3, VAR_4, VAR_1);
    FUNC_2(VAR_3, VAR_4, VAR_1);
    FUNC_4(VAR_3, VAR_4, VAR_1);
}
