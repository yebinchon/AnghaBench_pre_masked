
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG ;
struct TYPE_5__ {scalar_t__ Count; scalar_t__ Revision; scalar_t__ Version; } ;
typedef int PCONFIGURATION_COMPONENT_DATA ;
typedef TYPE_1__* PCM_PARTIAL_RESOURCE_LIST ;
typedef int CM_PARTIAL_RESOURCE_LIST ;
typedef int CM_PARTIAL_RESOURCE_DESCRIPTOR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,int,int,int,char*,TYPE_1__*,int,int *) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

VOID
FUNC_4(PCONFIGURATION_COMPONENT_DATA VAR_3, ULONG *VAR_4)
{
    PCONFIGURATION_COMPONENT_DATA VAR_5;
    PCM_PARTIAL_RESOURCE_LIST VAR_6;
    ULONG VAR_7;

    VAR_7 = sizeof(CM_PARTIAL_RESOURCE_LIST) -
           sizeof(CM_PARTIAL_RESOURCE_DESCRIPTOR);

    if (FUNC_0())
    {

        VAR_6 = FUNC_2(VAR_7, VAR_2);
        FUNC_3(VAR_6, 0, VAR_7);
        VAR_6->Version = 0;
        VAR_6->Revision = 0;
        VAR_6->Count = 0;


        FUNC_1(VAR_3,
                               VAR_0,
                               VAR_1,
                               0x0,
                               0x0,
                               0xFFFFFFFF,
                               "APM",
                               VAR_6,
                               VAR_7,
                               &VAR_5);


        (*VAR_4)++;
    }


}
