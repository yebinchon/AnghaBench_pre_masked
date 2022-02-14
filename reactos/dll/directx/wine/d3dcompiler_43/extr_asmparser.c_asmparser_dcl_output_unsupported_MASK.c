
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_reg {int dummy; } ;
struct asm_parser {int status; int line_no; } ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (struct asm_parser*,char*,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct asm_parser *VAR_1, DWORD VAR_2, DWORD VAR_3,
                                             const struct shader_reg *VAR_4) {
    FUNC_0(VAR_1, "Line %u: Output declaration unsupported in this shader version\n", VAR_1->line_no);
    FUNC_1(&VAR_1->status, VAR_0);
}
