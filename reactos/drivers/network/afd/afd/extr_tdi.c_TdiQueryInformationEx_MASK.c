
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* ULONG ;
struct TYPE_7__ {void* tei_instance; void* tei_entity; } ;
struct TYPE_6__ {void* toi_id; void* toi_type; void* toi_class; TYPE_2__ toi_entity; } ;
struct TYPE_8__ {TYPE_1__ ID; } ;
typedef TYPE_3__ TCP_REQUEST_QUERY_INFORMATION_EX ;
typedef int PVOID ;
typedef int * PULONG ;
typedef int PFILE_OBJECT ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ,int ,TYPE_3__*,int,int ,int ,int *) ;

NTSTATUS FUNC_2(
    PFILE_OBJECT VAR_1,
    ULONG VAR_2,
    ULONG VAR_3,
    ULONG VAR_4,
    ULONG VAR_5,
    ULONG VAR_6,
    PVOID VAR_7,
    PULONG VAR_8)
{
    TCP_REQUEST_QUERY_INFORMATION_EX VAR_9;

    FUNC_0(&VAR_9, sizeof(TCP_REQUEST_QUERY_INFORMATION_EX));
    VAR_9.ID.toi_entity.tei_entity = VAR_2;
    VAR_9.ID.toi_entity.tei_instance = VAR_3;
    VAR_9.ID.toi_class = VAR_4;
    VAR_9.ID.toi_type = VAR_5;
    VAR_9.ID.toi_id = VAR_6;

    return FUNC_1(VAR_1,
                                 VAR_0,
                                 &VAR_9,
                                 sizeof(TCP_REQUEST_QUERY_INFORMATION_EX),
                                 VAR_7,
                                 *VAR_8,
                                 VAR_8);
}
