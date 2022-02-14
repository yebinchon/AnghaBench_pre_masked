
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UCHAR ;
struct TYPE_3__ {scalar_t__* MultiByteTable; scalar_t__ UniDefaultChar; } ;
typedef TYPE_1__* PCPTABLEINFO ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

BOOL
FUNC_0(PCPTABLEINFO VAR_2, UCHAR VAR_3)
{
    if (VAR_2->MultiByteTable[VAR_3] != VAR_2->UniDefaultChar)
        return VAR_0;

    return VAR_1;
}
