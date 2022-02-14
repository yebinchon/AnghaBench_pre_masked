
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_3__ {size_t length; int * data; } ;
typedef TYPE_1__ DwarfStack ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,size_t,int ) ;

ulong FUNC_2(DwarfStack *VAR_0)
{
    FUNC_0(VAR_0->length > 0);
    ulong VAR_1 = VAR_0->data[--VAR_0->length];
    FUNC_1("pop stack[%d] -> %x", VAR_0->length, VAR_1);
    return VAR_1;
}
