
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ swizzle; } ;
struct shader_reg {scalar_t__ type; TYPE_2__* rel_reg; TYPE_1__ u; } ;
struct asm_parser {int status; int line_no; } ;
struct TYPE_6__ {scalar_t__ swizzle; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_3__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct asm_parser*,char*,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct asm_parser *VAR_3,
                               const struct shader_reg *VAR_4) {
    if((VAR_4->type == VAR_0 && VAR_4->u.swizzle != VAR_1) ||
       (VAR_4->rel_reg && VAR_4->rel_reg->type == VAR_0 &&
        VAR_4->rel_reg->u.swizzle != VAR_1)) {
        FUNC_0(VAR_3, "Line %u: Swizzle not allowed on aL register\n", VAR_3->line_no);
        FUNC_1(&VAR_3->status, VAR_2);
    }
}
