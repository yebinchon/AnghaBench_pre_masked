
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int calculated_number ;
struct TYPE_6__ {size_t len; char* buffer; } ;
typedef TYPE_1__ BUFFER ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,int ) ;

void FUNC_6(BUFFER *VAR_0, calculated_number VAR_1)
{
    FUNC_0(VAR_0, 50);

    if(FUNC_4(VAR_1) || FUNC_3(VAR_1)) {
        FUNC_2(VAR_0, "null");
        return;
    }
    else
        VAR_0->len += FUNC_5(&VAR_0->buffer[VAR_0->len], VAR_1);


    FUNC_0(VAR_0, 1);
    VAR_0->buffer[VAR_0->len] = '\0';

    FUNC_1(VAR_0);
}
