
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int S_addr; } ;
struct in_addr {TYPE_2__ S_un; } ;
typedef scalar_t__ ULONG ;
struct TYPE_14__ {scalar_t__ ai_numroutes; scalar_t__ ai_unknown; scalar_t__ ae_index; scalar_t__ ae_unknown; int ae_address; int ae_physaddrlen; int ae_physaddr; } ;
struct TYPE_11__ {int toi_id; int toi_type; int toi_class; int toi_entity; } ;
struct TYPE_13__ {TYPE_1__ ID; } ;
typedef int TDIEntityID ;
typedef TYPE_3__ TCP_REQUEST_QUERY_INFORMATION_EX ;
typedef int Request ;
typedef int CHAR ;
typedef int BOOL ;
typedef int ArpInfo ;
typedef int ArpEntries ;
typedef TYPE_4__ ARPInfo ;
typedef TYPE_4__ ARPEntry ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,TYPE_3__*,int,TYPE_4__*,int,scalar_t__*,int *) ;
 int FUNC_1 () ;
 int VAR_3 ;
 TYPE_4__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct in_addr*,int *) ;
 int VAR_8 ;
 int FUNC_5 (TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (scalar_t__,int) ;

__attribute__((used)) static
void
FUNC_10(
    TDIEntityID VAR_9,
    ULONG VAR_10)
{
    ARPInfo VAR_11;
    TCP_REQUEST_QUERY_INFORMATION_EX VAR_12;
    ULONG VAR_13 = 0;
    BOOL VAR_14;


    if (VAR_10 != VAR_0)
        return;

    FUNC_5(&VAR_12, sizeof(VAR_12));
    VAR_12.ID.toi_entity = VAR_9;
    VAR_12.ID.toi_class = VAR_4;
    VAR_12.ID.toi_type = VAR_5;
    VAR_12.ID.toi_id = VAR_2;

    VAR_14 = FUNC_0(
        VAR_8,
        VAR_6,
        &VAR_12,
        sizeof(VAR_12),
        &VAR_11,
        sizeof(VAR_11),
        &VAR_13,
        ((void*)0));
    FUNC_8(VAR_14, "DeviceIoControl failed.\n");
    FUNC_9(VAR_13, sizeof(VAR_11));

    FUNC_7("ARP Info:\n");
    VAR_7++;

    FUNC_7("ai_numroutes: %lu\n", VAR_11.ai_numroutes);
    FUNC_7("ai_unknown:   %lx\n", VAR_11.ai_unknown);

    if (VAR_11.ai_numroutes)
    {
        ARPEntry* VAR_15;
        ULONG VAR_16;

        VAR_12.ID.toi_id = VAR_1;

        VAR_15 = FUNC_2(FUNC_1(), VAR_3, VAR_11.ai_numroutes * sizeof(VAR_15[0]));
        FUNC_8(VAR_15 != ((void*)0), "\n");

        VAR_14 = FUNC_0(
            VAR_8,
            VAR_6,
            &VAR_12,
            sizeof(VAR_12),
            VAR_15,
            VAR_11.ai_numroutes * sizeof(VAR_15[0]),
            &VAR_13,
            ((void*)0));
        FUNC_8(VAR_14, "DeviceIoControl failed.\n");
        FUNC_9(VAR_13, VAR_11.ai_numroutes * sizeof(VAR_15[0]));

        for (VAR_16 = 0; VAR_16 < VAR_11.ai_numroutes; VAR_16++)
        {
            CHAR VAR_17[16];
            struct in_addr VAR_18;

            VAR_18.S_un.S_addr = VAR_15[VAR_16].ae_address;
            FUNC_4(&VAR_18, VAR_17);

            FUNC_7("ARP Entry %lu:\n", VAR_16);

            VAR_7++;

            FUNC_7("ae_index:    %lu\n", VAR_15[VAR_16].ae_index);
            FUNC_7("ae_physaddr: %s\n", FUNC_6(VAR_15[VAR_16].ae_physaddr, VAR_15[VAR_16].ae_physaddrlen));
            FUNC_7("ae_address:  %lx (%s)\n", VAR_15[VAR_16].ae_address, VAR_17);
            FUNC_7("ae_unknown:  %lu.\n", VAR_15[VAR_16].ae_unknown);

            VAR_7--;
        }

        FUNC_3(FUNC_1(), 0, VAR_15);
    }

    VAR_7--;
}
