
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__* Mapping; int (* WSHOpenSocket2 ) (int *,int *,int *,int ,int ,int ,int *,int ) ;int (* WSHOpenSocket ) (int *,int *,int *,int ,int *,int ) ;} ;
struct TYPE_9__ {struct TYPE_9__* Flink; } ;
typedef scalar_t__* PWSTR ;
typedef scalar_t__* PWINSOCK_MAPPING ;
typedef int PVOID ;
typedef int PUNICODE_STRING ;
typedef TYPE_1__* PLIST_ENTRY ;
typedef int * PINT ;
typedef TYPE_2__* PHELPER_DATA ;
typedef int PDWORD ;
typedef scalar_t__ INT ;
typedef int GROUP ;
typedef int DWORD ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int ,TYPE_1__*) ;
 int FUNC_1 (char*,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,scalar_t__*) ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__*,scalar_t__*,TYPE_2__**) ;
 scalar_t__ FUNC_5 (scalar_t__**) ;
 scalar_t__ FUNC_6 (scalar_t__*,scalar_t__**) ;
 int FUNC_7 (char*,scalar_t__*,...) ;
 int FUNC_8 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (int *,int *,int *,int ,int *,int ) ;
 int FUNC_10 (int *,int *,int *,int ,int ,int ,int *,int ) ;
 int FUNC_11 (int *,int *,int *,int ,int *,int ) ;
 int FUNC_12 (int *,int *,int *,int ,int ,int ,int *,int ) ;
 scalar_t__ FUNC_13 (scalar_t__*) ;

INT
FUNC_14(
    PINT VAR_5,
    PINT VAR_6,
    PINT VAR_7,
    GROUP VAR_8,
    DWORD VAR_9,
    PUNICODE_STRING VAR_10,
    PVOID *VAR_11,
    PHELPER_DATA *VAR_12,
    PDWORD VAR_13)
{
    PHELPER_DATA VAR_14;
    PWSTR VAR_15;
    PWSTR VAR_16;
    PWINSOCK_MAPPING VAR_17;
    PLIST_ENTRY VAR_18;
    INT VAR_19;

    FUNC_7("AddressFamily %p, SocketType %p, Protocol %p, Group %u, Flags %lx, TransportName %p, HelperDllContext %p, HelperDllData %p, Events %p\n",
        VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);


    for (VAR_18 = VAR_3.Flink;
         VAR_18 != &VAR_3;
         VAR_18 = VAR_18->Flink ) {

        VAR_14 = FUNC_0(VAR_18, VAR_1, VAR_18);


        if (FUNC_3 (VAR_14->Mapping,
                                   *VAR_5,
                                   *VAR_6,
                                   *VAR_7)) {


            if (VAR_14->WSHOpenSocket2 == ((void*)0) ) {


                VAR_14->WSHOpenSocket(VAR_5,
                                          VAR_6,
                                          VAR_7,
                                          VAR_10,
                                          VAR_11,
                                          VAR_13
                                          );
            } else {
                VAR_14->WSHOpenSocket2(VAR_5,
                                           VAR_6,
                                           VAR_7,
                                           VAR_8,
                                           VAR_9,
                                           VAR_10,
                                           VAR_11,
                                           VAR_13
                                           );
            }


            *VAR_12 = VAR_14;
            return VAR_2;
        }
    }


    VAR_19 = FUNC_5(&VAR_15);


    if (VAR_19) {
        FUNC_8("Can't get transport list\n");
        return VAR_19;
    }


    for (VAR_16 = VAR_15;
         *VAR_15 != 0;
         VAR_16 += FUNC_13(VAR_16) + 1) {
        FUNC_7("Transport: %S\n", VAR_15);


        VAR_19 = FUNC_6(VAR_16, &VAR_17);


        if (VAR_19) {
            FUNC_1("Can't get mapping for %S\n", VAR_15);
            FUNC_2(VAR_0, 0, VAR_15);
            return VAR_19;
        }


        if (FUNC_3(VAR_17, *VAR_5, *VAR_6, *VAR_7)) {


            VAR_19 = FUNC_4(VAR_16, VAR_17, &VAR_14);


            if (VAR_19) {
                FUNC_1("Can't load helper DLL for Transport %S.\n", VAR_16);
                FUNC_2(VAR_0, 0, VAR_15);
                FUNC_2(VAR_0, 0, VAR_17);
                return VAR_19;
            }


            if (VAR_14->WSHOpenSocket2 == ((void*)0)) {

                VAR_14->WSHOpenSocket(VAR_5,
                                          VAR_6,
                                          VAR_7,
                                          VAR_10,
                                          VAR_11,
                                          VAR_13
                                          );
            } else {
                VAR_14->WSHOpenSocket2(VAR_5,
                                           VAR_6,
                                           VAR_7,
                                           VAR_8,
                                           VAR_9,
                                           VAR_10,
                                           VAR_11,
                                           VAR_13
                                           );
            }


            *VAR_12 = VAR_14;



            return VAR_2;
        }

        FUNC_2(VAR_0, 0, VAR_17);
    }
    FUNC_2(VAR_0, 0, VAR_15);
    return VAR_4;
}
