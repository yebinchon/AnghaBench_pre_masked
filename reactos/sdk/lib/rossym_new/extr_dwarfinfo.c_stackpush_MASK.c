
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_3__ {int length; int max; int * data; int * storage; } ;
typedef TYPE_1__ DwarfStack ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (char*,int,int ) ;

void FUNC_4(DwarfStack *VAR_0, ulong VAR_1)
{
    if (VAR_0->length == VAR_0->max) {
        ulong *VAR_2 = FUNC_1(sizeof(ulong)*VAR_0->max*2);
        FUNC_2(VAR_2, VAR_0->data, sizeof(ulong)*VAR_0->length);
        if (VAR_0->data != VAR_0->storage)
            FUNC_0(VAR_0->data);
        VAR_0->data = VAR_2;
        VAR_0->max *= 2;
    }
    FUNC_3("stack[%d] = %x", VAR_0->length, VAR_1);
    VAR_0->data[VAR_0->length++] = VAR_1;
}
