
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct asm_parser {int status; TYPE_1__* shader; int line_no; } ;
struct TYPE_2__ {scalar_t__ version; } ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (struct asm_parser*,char*,int ) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct asm_parser *VAR_3, DWORD VAR_4,
                                  DWORD VAR_5, DWORD VAR_6,
                                  unsigned int VAR_7) {
    if(!VAR_3->shader) return;
    if(VAR_5 != 0 &&
       (VAR_3->shader->version != FUNC_0(3, 0) ||
        (VAR_5 != VAR_0 &&
         VAR_5 != VAR_1))) {
        FUNC_2(VAR_3, "Line %u: Unsupported modifier in dcl instruction\n", VAR_3->line_no);
        FUNC_4(&VAR_3->status, VAR_2);
        return;
    }
    if(!FUNC_3(VAR_3->shader, VAR_4, VAR_5, VAR_6)) {
        FUNC_1("Out of memory\n");
        FUNC_4(&VAR_3->status, VAR_2);
    }
}
