
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int USHORT ;
typedef int ULONG ;
typedef size_t UCHAR ;
struct TYPE_2__ {int Offset; int ExtendedOffset; int Access; int Selector; } ;
typedef scalar_t__ PVOID ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static
void
FUNC_0(
    UCHAR VAR_2,
    PVOID VAR_3,
    USHORT VAR_4)
{
    VAR_1[VAR_2].Offset = (ULONG)VAR_3 & 0xffff;
    VAR_1[VAR_2].ExtendedOffset = (ULONG)VAR_3 >> 16;
    VAR_1[VAR_2].Selector = VAR_0;
    VAR_1[VAR_2].Access = VAR_4;
}
