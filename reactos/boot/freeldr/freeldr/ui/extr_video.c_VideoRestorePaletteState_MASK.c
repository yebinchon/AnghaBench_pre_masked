
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef size_t ULONG ;
typedef int UCHAR ;
struct TYPE_3__ {int Blue; int Green; int Red; } ;
typedef TYPE_1__* PPALETTE_ENTRY ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 () ;

VOID FUNC_2(PPALETTE_ENTRY VAR_0, ULONG VAR_1)
{
    ULONG VAR_2;

    FUNC_1();

    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
    {
        FUNC_0((UCHAR)VAR_2, VAR_0[VAR_2].Red, VAR_0[VAR_2].Green, VAR_0[VAR_2].Blue);
    }
}
