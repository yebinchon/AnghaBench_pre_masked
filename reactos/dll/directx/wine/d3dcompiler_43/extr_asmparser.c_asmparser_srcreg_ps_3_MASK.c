
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_reg {int srcmod; } ;
struct instruction {struct shader_reg* src; } ;
struct asm_parser {int status; int line_no; } ;


 int VAR_0 ;
 int FUNC_0 (struct asm_parser*,char*,int ,int ) ;
 int FUNC_1 (struct asm_parser*,int ) ;
 int FUNC_2 (struct asm_parser*,struct shader_reg const*) ;
 int FUNC_3 (struct shader_reg const*,int ) ;
 int FUNC_4 (struct shader_reg const*) ;
 int VAR_1 ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct asm_parser *VAR_2,
                                  struct instruction *VAR_3, int VAR_4,
                                  const struct shader_reg *VAR_5) {
    if(!FUNC_3(VAR_5, VAR_1)) {
        FUNC_0(VAR_2, "Line %u: Source register %s not supported in PS 3.0\n",
                          VAR_2->line_no,
                          FUNC_4(VAR_5));
        FUNC_5(&VAR_2->status, VAR_0);
    }
    FUNC_2(VAR_2, VAR_5);
    FUNC_1(VAR_2, VAR_5->srcmod);
    VAR_3->src[VAR_4] = *VAR_5;
}
