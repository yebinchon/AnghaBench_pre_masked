
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_4__ {size_t Y; size_t X; } ;
struct TYPE_5__ {size_t VirtualY; TYPE_1__ ScreenBufferSize; int * Buffer; } ;
typedef TYPE_2__* PTEXTMODE_SCREEN_BUFFER ;
typedef int * PCHAR_INFO ;



PCHAR_INFO
FUNC_0(PTEXTMODE_SCREEN_BUFFER VAR_0, ULONG VAR_1, ULONG VAR_2)
{
    return &VAR_0->Buffer[((VAR_2 + VAR_0->VirtualY) % VAR_0->ScreenBufferSize.Y) * VAR_0->ScreenBufferSize.X + VAR_1];
}
