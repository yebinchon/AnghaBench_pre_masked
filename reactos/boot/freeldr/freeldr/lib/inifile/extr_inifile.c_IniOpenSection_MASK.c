
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_5__ {int Flink; } ;
struct TYPE_4__ {TYPE_2__ ListEntry; int SectionName; } ;
typedef TYPE_1__* PINI_SECTION ;
typedef int PCSTR ;
typedef int BOOLEAN ;


 TYPE_1__* FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ) ;

BOOLEAN FUNC_3(PCSTR VAR_5, ULONG_PTR* VAR_6)
{
    PINI_SECTION VAR_7;

    FUNC_1("IniOpenSection() SectionName = %s\n", VAR_5);


    VAR_7 = FUNC_0(VAR_2.Flink, VAR_1, VAR_3);
    while (&VAR_7->ListEntry != &VAR_2)
    {

        if (FUNC_2(VAR_5, VAR_7->SectionName) == 0)
        {

            if (VAR_6)
                *VAR_6 = (ULONG_PTR)VAR_7;
            FUNC_1("IniOpenSection() Found it! SectionId = 0x%x\n", VAR_6);
            return VAR_4;
        }


        VAR_7 = FUNC_0(VAR_7->ListEntry.Flink, VAR_1, VAR_3);
    }

    FUNC_1("IniOpenSection() Section not found.\n");

    return VAR_0;
}
