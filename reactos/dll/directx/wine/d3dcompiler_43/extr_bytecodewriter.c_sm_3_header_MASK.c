
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bytecode_buffer {int dummy; } ;
struct bwriter_shader {int num_outputs; int outputs; int num_inputs; int inputs; } ;
struct bc_writer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bwriter_shader const*,struct bytecode_buffer*,int ) ;
 int FUNC_1 (struct bwriter_shader const*,struct bytecode_buffer*,int ) ;
 int FUNC_2 (struct bwriter_shader const*,struct bytecode_buffer*,int ) ;
 int FUNC_3 (struct bc_writer*,struct bytecode_buffer*,int ,int ,int ,int ) ;
 int FUNC_4 (struct bwriter_shader const*,struct bytecode_buffer*) ;

__attribute__((used)) static void FUNC_5(struct bc_writer *VAR_3, const struct bwriter_shader *VAR_4, struct bytecode_buffer *VAR_5) {
    FUNC_3(VAR_3, VAR_5, VAR_2, VAR_4->inputs, VAR_4->num_inputs, VAR_0);
    FUNC_3(VAR_3, VAR_5, VAR_2, VAR_4->outputs, VAR_4->num_outputs, VAR_1);
    FUNC_1(VAR_4, VAR_5, VAR_2);
    FUNC_0(VAR_4, VAR_5, VAR_2);
    FUNC_2(VAR_4, VAR_5, VAR_2);
    FUNC_4(VAR_4, VAR_5);
}
