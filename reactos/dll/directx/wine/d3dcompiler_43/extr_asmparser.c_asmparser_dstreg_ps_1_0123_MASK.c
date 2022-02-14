
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_reg {int dummy; } ;
struct instruction {int has_dst; struct shader_reg dst; } ;
struct asm_parser {int status; int line_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct asm_parser*,char*,int ,int ) ;
 int FUNC_1 (struct shader_reg const*,int ) ;
 int FUNC_2 (struct shader_reg const*) ;
 struct shader_reg FUNC_3 (struct shader_reg const*,int ) ;
 int VAR_3 ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct asm_parser *VAR_4,
                                       struct instruction *VAR_5,
                                       const struct shader_reg *VAR_6) {
    struct shader_reg VAR_7;

    if(!FUNC_1(VAR_6, VAR_3)) {
        FUNC_0(VAR_4, "Line %u: Destination register %s not supported in PS 1\n",
                          VAR_4->line_no,
                          FUNC_2(VAR_6));
        FUNC_4(&VAR_4->status, VAR_1);
    }
    VAR_7 = FUNC_3(VAR_6, VAR_0);
    VAR_5->dst = VAR_7;
    VAR_5->has_dst = VAR_2;
}
