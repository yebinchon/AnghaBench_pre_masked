
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
typedef int UCHAR ;
struct TYPE_3__ {int dwFlags; int wSel; int szDisasm; int * bpTarget; } ;
typedef TYPE_1__ TDisassembler ;
typedef scalar_t__* PULONG ;
typedef int PUCHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;

BOOLEAN FUNC_1(PULONG VAR_4,PUCHAR VAR_5)
{
    TDisassembler VAR_6;

    VAR_6.dwFlags = VAR_2 | VAR_1;
    VAR_6.bpTarget = (UCHAR*)*VAR_4;
    VAR_6.szDisasm = VAR_5;
    VAR_6.wSel = VAR_0;

    *VAR_4 += (ULONG)FUNC_0( &VAR_6);
    return VAR_3;
}
