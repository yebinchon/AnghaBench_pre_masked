
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_reg {int srcmod; } ;
struct instruction {struct shader_reg* src; } ;
struct asm_parser {int status; int line_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct asm_parser*,char*,int ,int ) ;
 int FUNC_1 (struct asm_parser*,int ) ;
 int FUNC_2 (struct asm_parser*,int ) ;
 int FUNC_3 (struct shader_reg const*,int ) ;
 int FUNC_4 (struct shader_reg const*) ;
 struct shader_reg FUNC_5 (struct shader_reg const*,int ) ;
 int VAR_2 ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct asm_parser *VAR_3,
                                    struct instruction *VAR_4, int VAR_5,
                                    const struct shader_reg *VAR_6) {
    struct shader_reg VAR_7;

    if(!FUNC_3(VAR_6, VAR_2)) {
        FUNC_0(VAR_3, "Line %u: Source register %s not supported in PS 2.x\n",
                          VAR_3->line_no,
                          FUNC_4(VAR_6));
        FUNC_6(&VAR_3->status, VAR_0);
    }
    FUNC_2(VAR_3, VAR_6->srcmod);
    FUNC_1(VAR_3, VAR_6->srcmod);
    VAR_7 = FUNC_5(VAR_6, VAR_1);
    VAR_4->src[VAR_5] = VAR_7;
}
