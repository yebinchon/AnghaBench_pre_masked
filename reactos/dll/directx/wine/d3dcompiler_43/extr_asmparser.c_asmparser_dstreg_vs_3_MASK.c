
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_reg {int dummy; } ;
struct instruction {int has_dst; struct shader_reg dst; int shift; int dstmod; } ;
struct asm_parser {int status; int line_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct asm_parser*,char*,int ,int ) ;
 int FUNC_1 (struct asm_parser*,int ) ;
 int FUNC_2 (struct shader_reg const*,int ) ;
 int FUNC_3 (struct asm_parser*,int ) ;
 int FUNC_4 (struct shader_reg const*) ;
 int FUNC_5 (int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(struct asm_parser *VAR_3,
                                  struct instruction *VAR_4,
                                  const struct shader_reg *VAR_5) {
    if(!FUNC_2(VAR_5, VAR_2)) {
        FUNC_0(VAR_3, "Line %u: Destination register %s not supported in VS 3.0\n",
                          VAR_3->line_no,
                          FUNC_4(VAR_5));
        FUNC_5(&VAR_3->status, VAR_0);
    }
    FUNC_1(VAR_3, VAR_4->dstmod);
    FUNC_3(VAR_3, VAR_4->shift);
    VAR_4->dst = *VAR_5;
    VAR_4->has_dst = VAR_1;
}
