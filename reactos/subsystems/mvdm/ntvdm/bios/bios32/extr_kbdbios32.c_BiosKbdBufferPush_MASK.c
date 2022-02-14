
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ WORD ;
typedef scalar_t__ ULONG_PTR ;
struct TYPE_2__ {scalar_t__ KeybdBufferTail; scalar_t__ KeybdBufferEnd; scalar_t__ KeybdBufferStart; scalar_t__ KeybdBufferHead; } ;
typedef scalar_t__* LPWORD ;
typedef int BOOLEAN ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static BOOLEAN FUNC_1(WORD VAR_3)
{

    WORD VAR_4 = VAR_0->KeybdBufferTail + sizeof(WORD);


    if (VAR_4 >= VAR_0->KeybdBufferEnd) VAR_4 = VAR_0->KeybdBufferStart;


    if (VAR_4 == VAR_0->KeybdBufferHead)
    {
        FUNC_0("BIOS keyboard buffer full.\n");
        return VAR_1;
    }


    *((LPWORD)((ULONG_PTR)VAR_0 + VAR_0->KeybdBufferTail)) = VAR_3;
    VAR_0->KeybdBufferTail = VAR_4;


    return VAR_2;
}
