
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct shader_reg {int dummy; } ;
struct TYPE_4__ {int writemask; } ;
struct TYPE_5__ {TYPE_1__ u; int regnum; } ;
struct instruction {TYPE_2__ dst; scalar_t__ shift; int dstmod; } ;
struct asm_parser {int status; int shader; TYPE_3__* funcs; } ;
struct TYPE_6__ {int (* dstreg ) (struct asm_parser*,struct instruction*,struct shader_reg const*) ;} ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct asm_parser*,struct instruction*,struct shader_reg const*) ;

__attribute__((used)) static void FUNC_4(struct asm_parser *VAR_2, DWORD VAR_3, DWORD VAR_4,
                                     DWORD VAR_5, const struct shader_reg *VAR_6) {
    struct instruction VAR_7;

    if(!VAR_2->shader) return;
    VAR_7.dstmod = VAR_5;
    VAR_7.shift = 0;
    VAR_2->funcs->dstreg(VAR_2, &VAR_7, VAR_6);
    if(!FUNC_1(VAR_2->shader, VAR_3, VAR_4, VAR_5, VAR_0, VAR_7.dst.regnum, VAR_7.dst.u.writemask, VAR_0)) {
        FUNC_0("Out of memory\n");
        FUNC_2(&VAR_2->status, VAR_1);
    }
}
