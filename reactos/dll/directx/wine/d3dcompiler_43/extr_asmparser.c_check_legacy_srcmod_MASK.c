
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asm_parser {int status; int line_no; } ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct asm_parser*,char*,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct asm_parser *VAR_10, DWORD VAR_11) {
    if(VAR_11 == VAR_0 || VAR_11 == VAR_1 ||
       VAR_11 == VAR_5 || VAR_11 == VAR_6 ||
       VAR_11 == VAR_2 || VAR_11 == VAR_7 ||
       VAR_11 == VAR_8 || VAR_11 == VAR_4 ||
       VAR_11 == VAR_3) {
        FUNC_0(VAR_10, "Line %u: Source modifier %s not supported in this shader version\n",
                          VAR_10->line_no,
                          FUNC_1(VAR_11));
        FUNC_2(&VAR_10->status, VAR_9);
    }
}
