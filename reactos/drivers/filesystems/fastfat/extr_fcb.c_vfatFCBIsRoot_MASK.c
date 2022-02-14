
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int Length; int* Buffer; } ;
struct TYPE_5__ {TYPE_1__ PathNameU; } ;
typedef TYPE_2__* PVFATFCB ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;

BOOLEAN
FUNC_0(
    PVFATFCB VAR_2)
{
    return VAR_2->PathNameU.Length == sizeof(WCHAR) && VAR_2->PathNameU.Buffer[0] == L'\\' ? VAR_1 : VAR_0;
}
