
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_reg {int dummy; } ;
struct instruction {int has_dst; struct shader_reg dst; int shift; } ;
struct asm_parser {int status; int line_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct asm_parser*,char*,int ,int ) ;
 int FUNC_1 (struct shader_reg const*,int ) ;
 int FUNC_2 (struct asm_parser*,int ) ;
 int FUNC_3 (struct shader_reg const*) ;
 struct shader_reg FUNC_4 (struct shader_reg const*,int ) ;
 int VAR_2 ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct asm_parser *VAR_3,
                                  struct instruction *VAR_4,
                                  const struct shader_reg *VAR_5) {
    struct shader_reg VAR_6;

    if(!FUNC_1(VAR_5, VAR_2)) {
        FUNC_0(VAR_3, "Line %u: Destination register %s not supported in PS 2.0\n",
                          VAR_3->line_no,
                          FUNC_3(VAR_5));
        FUNC_5(&VAR_3->status, VAR_0);
    }
    FUNC_2(VAR_3, VAR_4->shift);
    VAR_6 = FUNC_4(VAR_5, VAR_1);
    VAR_4->dst = VAR_6;
    VAR_4->has_dst = VAR_1;
}
