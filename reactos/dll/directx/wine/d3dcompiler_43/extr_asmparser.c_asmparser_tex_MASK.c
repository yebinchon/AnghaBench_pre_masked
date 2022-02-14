
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_reg {int dummy; } ;
struct asm_parser {int dummy; } ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (struct asm_parser*,int ,int ,struct shader_reg const*,struct shader_reg*) ;
 struct shader_reg FUNC_1 (struct shader_reg const*,int ) ;

__attribute__((used)) static void FUNC_2(struct asm_parser *VAR_1, DWORD VAR_2, DWORD VAR_3,
                          const struct shader_reg *VAR_4) {
    struct shader_reg VAR_5;


    VAR_5 = FUNC_1(VAR_4, VAR_0);
    FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_5);
}
