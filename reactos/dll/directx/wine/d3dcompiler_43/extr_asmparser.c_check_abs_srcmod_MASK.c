
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asm_parser {int status; int line_no; } ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct asm_parser*,char*,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct asm_parser *VAR_3, DWORD VAR_4) {
    if(VAR_4 == VAR_0 || VAR_4 == VAR_1) {
        FUNC_0(VAR_3, "Line %u: Source modifier %s not supported in this shader version\n",
                          VAR_3->line_no,
                          FUNC_1(VAR_4));
        FUNC_2(&VAR_3->status, VAR_2);
    }
}
