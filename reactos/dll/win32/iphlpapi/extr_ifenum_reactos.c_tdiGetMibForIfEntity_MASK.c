
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int req ;
struct TYPE_12__ {int* if_physaddr; int if_descr; int if_descrlen; int if_physaddrlen; int if_speed; int if_mtu; int if_type; int if_index; } ;
struct TYPE_15__ {TYPE_2__ ent; } ;
struct TYPE_13__ {int tei_instance; } ;
struct TYPE_11__ {TYPE_3__ toi_entity; int toi_id; int toi_type; int toi_class; } ;
struct TYPE_14__ {TYPE_1__ ID; } ;
typedef TYPE_3__ TDIEntityID ;
typedef TYPE_4__ TCP_REQUEST_QUERY_INFORMATION_EX ;
typedef int NTSTATUS ;
typedef TYPE_5__ IFEntrySafelySized ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int ,int ,TYPE_4__*,int,TYPE_5__*,int,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (char*,...) ;

NTSTATUS FUNC_3
( HANDLE VAR_7, TDIEntityID *VAR_8, IFEntrySafelySized *VAR_9 ) {
    TCP_REQUEST_QUERY_INFORMATION_EX VAR_10 = VAR_6;
    NTSTATUS VAR_11 = VAR_4;
    DWORD VAR_12;

    FUNC_2("TdiGetMibForIfEntity(tcpFile %p,entityId %p)\n",
           VAR_7, VAR_8->tei_instance);

    VAR_10.ID.toi_class = VAR_1;
    VAR_10.ID.toi_type = VAR_2;
    VAR_10.ID.toi_id = VAR_0;
    VAR_10.ID.toi_entity = *VAR_8;

    VAR_11 = FUNC_0( VAR_7,
                              VAR_3,
                              &VAR_10,
                              sizeof(VAR_10),
                              VAR_9,
                              sizeof(*VAR_9),
                              &VAR_12,
                              ((void*)0) );

    if(!VAR_11)
    {
            FUNC_2("IOCTL Failed\n");
            return VAR_5;
    }

    FUNC_1("TdiGetMibForIfEntity() => {\n"
           "  if_index ....................... %x\n"
           "  if_type ........................ %x\n"
           "  if_mtu ......................... %d\n"
           "  if_speed ....................... %x\n"
           "  if_physaddrlen ................. %d\n",
           VAR_9->ent.if_index,
           VAR_9->ent.if_type,
           VAR_9->ent.if_mtu,
           VAR_9->ent.if_speed,
           VAR_9->ent.if_physaddrlen);
    FUNC_1("  if_physaddr .................... %02x:%02x:%02x:%02x:%02x:%02x\n"
           "  if_descr ....................... %*s\n",
           VAR_9->ent.if_physaddr[0] & 0xff,
           VAR_9->ent.if_physaddr[1] & 0xff,
           VAR_9->ent.if_physaddr[2] & 0xff,
           VAR_9->ent.if_physaddr[3] & 0xff,
           VAR_9->ent.if_physaddr[4] & 0xff,
           VAR_9->ent.if_physaddr[5] & 0xff,
           VAR_9->ent.if_descrlen,
           VAR_9->ent.if_descr);
    FUNC_1("} status %08x\n",VAR_11);

    return VAR_4;
}
