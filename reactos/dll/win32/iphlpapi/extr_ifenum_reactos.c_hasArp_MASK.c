
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int type ;
typedef int req ;
struct TYPE_8__ {int tei_instance; int tei_entity; } ;
struct TYPE_9__ {TYPE_1__ toi_entity; int toi_id; int toi_type; int toi_class; } ;
struct TYPE_11__ {TYPE_2__ ID; } ;
struct TYPE_10__ {int tei_instance; } ;
typedef TYPE_3__ TDIEntityID ;
typedef TYPE_4__ TCP_REQUEST_QUERY_INFORMATION_EX ;
typedef int NTSTATUS ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_4__*,int,int*,int,int*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 TYPE_4__ VAR_8 ;

BOOL FUNC_2( HANDLE VAR_9, TDIEntityID *VAR_10 ) {
    TCP_REQUEST_QUERY_INFORMATION_EX VAR_11 = VAR_8;
    NTSTATUS VAR_12 = VAR_7;
    DWORD VAR_13, VAR_14;

    VAR_11.ID.toi_class = VAR_4;
    VAR_11.ID.toi_type = VAR_5;
    VAR_11.ID.toi_id = VAR_2;
    VAR_11.ID.toi_entity.tei_entity = VAR_1;
    VAR_11.ID.toi_entity.tei_instance = VAR_10->tei_instance;

    VAR_12 = FUNC_0( VAR_9,
                              VAR_6,
                              &VAR_11,
                              sizeof(VAR_11),
                              &VAR_14,
                              sizeof(VAR_14),
                              &VAR_13,
                              ((void*)0) );
    if( !FUNC_1(VAR_12) ) return VAR_3;

    return (VAR_14 & VAR_0);
}
