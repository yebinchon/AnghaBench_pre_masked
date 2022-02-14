
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int req ;
struct TYPE_11__ {scalar_t__ Status; scalar_t__ Information; } ;
struct TYPE_8__ {scalar_t__ tei_instance; scalar_t__ tei_entity; } ;
struct TYPE_9__ {TYPE_1__ toi_entity; scalar_t__ toi_id; scalar_t__ toi_type; scalar_t__ toi_class; } ;
struct TYPE_10__ {TYPE_2__ ID; } ;
typedef TYPE_3__ TCP_REQUEST_QUERY_INFORMATION_EX ;
typedef int * PVOID ;
typedef scalar_t__* PDWORD ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_4__ IO_STATUS_BLOCK ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int *,int *,int *,TYPE_4__*,int ,TYPE_3__*,int,int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_3__ VAR_6 ;
 scalar_t__ VAR_7 ;

NTSTATUS FUNC_6( HANDLE VAR_8,
                            DWORD VAR_9,
                            DWORD VAR_10,
                            DWORD VAR_11,
                            DWORD VAR_12,
                            DWORD VAR_13,
                            DWORD VAR_14,
                            DWORD VAR_15,
                            PVOID *VAR_16,
                            PDWORD VAR_17 ) {
    TCP_REQUEST_QUERY_INFORMATION_EX VAR_18 = VAR_6;
    PVOID VAR_19 = 0;
    NTSTATUS VAR_20 = VAR_5;
    DWORD VAR_21 = VAR_15 * VAR_2;
    IO_STATUS_BLOCK VAR_22;

    VAR_18.ID.toi_class = VAR_9;
    VAR_18.ID.toi_type = VAR_10;
    VAR_18.ID.toi_id = VAR_11;
    VAR_18.ID.toi_entity.tei_entity = VAR_12;
    VAR_18.ID.toi_entity.tei_instance = VAR_13;
    do {
        VAR_20 = FUNC_4( VAR_8,
                                        ((void*)0),
                                        ((void*)0),
                                        ((void*)0),
                                        &VAR_22,
                                        VAR_1,
                                        &VAR_18,
                                        sizeof(VAR_18),
                                        ((void*)0),
                                        0);
        if (VAR_20 == VAR_4)
        {
            VAR_20 = FUNC_5(VAR_8, VAR_0, ((void*)0));
            if (FUNC_3(VAR_20)) VAR_20 = VAR_22.Status;
        }

        if(!FUNC_3(VAR_20))
        {
            return VAR_20;
        }

        VAR_21 = VAR_22.Information;
        VAR_19 = FUNC_1( FUNC_0(), 0, VAR_21 );

        if( !VAR_19 ) {
            VAR_20 = VAR_3;
            return VAR_20;
        }

        VAR_20 = FUNC_4( VAR_8,
                                        ((void*)0),
                                        ((void*)0),
                                        ((void*)0),
                                        &VAR_22,
                                        VAR_1,
                                        &VAR_18,
                                        sizeof(VAR_18),
                                        VAR_19,
                                        VAR_21);
        if (VAR_20 == VAR_4)
        {
            VAR_20 = FUNC_5(VAR_8, VAR_0, ((void*)0));
            if (FUNC_3(VAR_20)) VAR_20 = VAR_22.Status;
        }


        if( VAR_22.Information == VAR_21 )
            break;

        FUNC_2( FUNC_0(), 0, VAR_19 );
        VAR_19 = 0;

        if(!FUNC_3(VAR_20))
            return VAR_20;
    } while( VAR_7 );


    *VAR_17 = (VAR_21 - VAR_14) / VAR_15;
    *VAR_16 = VAR_19;

    return VAR_5;
}
