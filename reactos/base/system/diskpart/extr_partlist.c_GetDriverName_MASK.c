
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VOID ;
struct TYPE_7__ {char* Port; int DriverName; } ;
struct TYPE_6__ {char* Name; int * EntryContext; int Flags; } ;
typedef TYPE_1__ RTL_QUERY_REGISTRY_TABLE ;
typedef int QueryTable ;
typedef TYPE_2__* PDISKENTRY ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *,TYPE_1__*,int *,int *) ;
 int FUNC_4 (TYPE_1__**,int) ;
 int FUNC_5 (int *,char*,char*) ;

__attribute__((used)) static
VOID
FUNC_6(
    PDISKENTRY VAR_2)
{
    RTL_QUERY_REGISTRY_TABLE VAR_3[2];
    WCHAR VAR_4[32];
    NTSTATUS VAR_5;

    FUNC_2(&VAR_2->DriverName,
                         ((void*)0));

    FUNC_5(VAR_4,
             L"\\Scsi\\Scsi Port %lu",
             VAR_2->Port);

    FUNC_4(&VAR_3,
                  sizeof(VAR_3));

    VAR_3[0].Name = L"Driver";
    VAR_3[0].Flags = VAR_0;
    VAR_3[0].EntryContext = &VAR_2->DriverName;

    VAR_5 = FUNC_3(VAR_1,
                                    VAR_4,
                                    VAR_3,
                                    ((void*)0),
                                    ((void*)0));
    if (!FUNC_1(VAR_5))
    {
        FUNC_0("RtlQueryRegistryValues() failed (Status %lx)\n", VAR_5);
    }
}
