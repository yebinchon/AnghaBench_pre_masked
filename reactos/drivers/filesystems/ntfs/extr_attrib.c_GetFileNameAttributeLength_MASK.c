
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ ULONG ;
struct TYPE_3__ {int NameLength; } ;
typedef TYPE_1__* PFILENAME_ATTRIBUTE ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

ULONG FUNC_1(PFILENAME_ATTRIBUTE VAR_2)
{
    ULONG VAR_3 = FUNC_0(VAR_0, VAR_1) + (VAR_2->NameLength * sizeof(WCHAR));
    return VAR_3;
}
