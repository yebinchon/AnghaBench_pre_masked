
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_2__ {scalar_t__ KeybdBufferHead; scalar_t__ KeybdBufferTail; } ;
typedef int * LPWORD ;
typedef int BOOLEAN ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static BOOLEAN FUNC_0(LPWORD VAR_3)
{

    if (VAR_0->KeybdBufferHead == VAR_0->KeybdBufferTail) return VAR_1;


    *VAR_3 = *((LPWORD)((ULONG_PTR)VAR_0 + VAR_0->KeybdBufferHead));

    return VAR_2;
}
