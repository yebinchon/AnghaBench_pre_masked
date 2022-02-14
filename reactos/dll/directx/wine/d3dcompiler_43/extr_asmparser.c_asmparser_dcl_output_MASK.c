
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int writemask; } ;
struct shader_reg {TYPE_1__ u; int regnum; } ;
struct asm_parser {int status; TYPE_2__* shader; int line_no; } ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct asm_parser*,char*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct asm_parser *VAR_4, DWORD VAR_5, DWORD VAR_6,
                                 const struct shader_reg *VAR_7) {
    if(!VAR_4->shader) return;
    if(VAR_4->shader->type == VAR_2) {
        FUNC_1(VAR_4, "Line %u: Output register declared in a pixel shader\n", VAR_4->line_no);
        FUNC_3(&VAR_4->status, VAR_1);
    }
    if(!FUNC_2(VAR_4->shader, VAR_5, VAR_6, 0, VAR_3, VAR_7->regnum, VAR_7->u.writemask, VAR_0)) {
        FUNC_0("Out of memory\n");
        FUNC_3(&VAR_4->status, VAR_1);
    }
}
