
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asm_parser {int status; int line_no; } ;


 int VAR_0 ;
 int FUNC_0 (struct asm_parser*,char*,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct asm_parser *VAR_1) {
    FUNC_0(VAR_1, "Line %u: Coissue is only supported in pixel shaders versions <= 1.4\n", VAR_1->line_no);
    FUNC_1(&VAR_1->status, VAR_0);
}
