
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG_PTR ;
typedef scalar_t__ UINT ;
struct TYPE_4__ {scalar_t__ RamSize; scalar_t__ RamBase; } ;
typedef scalar_t__ PUCHAR ;
typedef TYPE_1__* PNIC_ADAPTER ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int VAR_4 ;

__attribute__((used)) static BOOLEAN FUNC_2(
    PNIC_ADAPTER VAR_5)
{
    ULONG_PTR VAR_6;

    FUNC_0(VAR_1, ("Called.\n"));


    for (VAR_6 = 0x0400; VAR_6 < 0x10000; VAR_6 += 0x0400) {
        if (FUNC_1(VAR_5, VAR_6))
            break;
    }

    if (VAR_6 == 0x10000) {

        FUNC_0(VAR_3, ("No RAM found on board.\n"));
        return VAR_0;
    }

    VAR_5->RamBase = (PUCHAR)VAR_6;


    for (; VAR_6 < 0x10000; VAR_6 += 0x0400) {
        if (!FUNC_1(VAR_5, VAR_6))
            break;
    }

    VAR_5->RamSize = (UINT)(VAR_6 - (ULONG_PTR)VAR_5->RamBase);

    FUNC_0(VAR_2, ("RAM is at (0x%X). Size is (0x%X).\n",
        VAR_5->RamBase, VAR_5->RamSize));

    return VAR_4;
}
