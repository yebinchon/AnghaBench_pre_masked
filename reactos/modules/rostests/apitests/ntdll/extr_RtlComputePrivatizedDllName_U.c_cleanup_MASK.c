
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
typedef int USHORT ;
struct TYPE_5__ {int * Buffer; } ;
typedef TYPE_1__* PUNICODE_STRING ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static void FUNC_2(PUNICODE_STRING VAR_0, WCHAR* VAR_1, USHORT VAR_2)
{
    if (VAR_0->Buffer != VAR_1)
    {
        FUNC_0(VAR_0);
        FUNC_1(VAR_0, VAR_1, VAR_2);
    }
}
