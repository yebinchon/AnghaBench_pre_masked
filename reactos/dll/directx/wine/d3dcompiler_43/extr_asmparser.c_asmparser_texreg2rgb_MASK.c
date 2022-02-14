
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int swizzle; } ;
struct shader_reg {TYPE_1__ u; } ;
struct asm_parser {int dummy; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct asm_parser*,int ,int ,struct shader_reg const*,struct shader_reg*) ;
 struct shader_reg FUNC_1 (struct shader_reg const*,int ) ;

__attribute__((used)) static void FUNC_2(struct asm_parser *VAR_5, DWORD VAR_6, DWORD VAR_7,
                                 const struct shader_reg *VAR_8,
                                 const struct shader_reg *VAR_9) {
    struct shader_reg VAR_10;

    VAR_10 = FUNC_1(VAR_9, VAR_4);

    VAR_10.u.swizzle = VAR_1 | VAR_2 | VAR_3 | VAR_0;
    FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8, &VAR_10);
}
