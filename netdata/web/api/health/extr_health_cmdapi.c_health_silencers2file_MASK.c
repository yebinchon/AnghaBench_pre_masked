
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; char* buffer; } ;
typedef int FILE ;
typedef TYPE_1__ BUFFER ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (char*,int ) ;
 int VAR_1 ;
 char* FUNC_5 (int ) ;

void FUNC_6(BUFFER *VAR_2) {
    if (VAR_2->len == 0) return;

    FILE *VAR_3 = FUNC_2(VAR_1, "wb");
    if(VAR_3) {
        size_t VAR_4 = (size_t)FUNC_3(VAR_3, "%s", VAR_2->buffer) ;
        if (VAR_4 == VAR_2->len ) {
            FUNC_4("Silencer changes written to %s", VAR_1);
        }
        FUNC_1(VAR_3);
        return;
    }
    FUNC_0("Silencer changes could not be written to %s. Error %s", VAR_1, FUNC_5(VAR_0));
}
