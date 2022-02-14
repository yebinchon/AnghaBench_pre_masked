
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int writemask; } ;
struct shader_reg {TYPE_2__ u; int regnum; } ;
struct instruction {scalar_t__ shift; scalar_t__ dstmod; } ;
struct asm_parser {int status; TYPE_3__* shader; TYPE_1__* funcs; int line_no; } ;
struct TYPE_6__ {scalar_t__ version; } ;
struct TYPE_4__ {int (* dstreg ) (struct asm_parser*,struct instruction*,struct shader_reg const*) ;} ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct asm_parser*,char*,int ) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct asm_parser*,struct instruction*,struct shader_reg const*) ;

__attribute__((used)) static void FUNC_6(struct asm_parser *VAR_4, DWORD VAR_5, DWORD VAR_6,
                                DWORD VAR_7, const struct shader_reg *VAR_8) {
    struct instruction VAR_9;

    if(!VAR_4->shader) return;
    if(VAR_7 != 0 &&
       (VAR_4->shader->version != FUNC_0(3, 0) ||
        (VAR_7 != VAR_0 &&
         VAR_7 != VAR_1))) {
        FUNC_2(VAR_4, "Line %u: Unsupported modifier in dcl instruction\n", VAR_4->line_no);
        FUNC_4(&VAR_4->status, VAR_3);
        return;
    }


    VAR_9.dstmod = VAR_7;
    VAR_9.shift = 0;
    VAR_4->funcs->dstreg(VAR_4, &VAR_9, VAR_8);

    if(!FUNC_3(VAR_4->shader, VAR_5, VAR_6, VAR_7, VAR_2, VAR_8->regnum, VAR_8->u.writemask, VAR_2)) {
        FUNC_1("Out of memory\n");
        FUNC_4(&VAR_4->status, VAR_3);
    }
}
