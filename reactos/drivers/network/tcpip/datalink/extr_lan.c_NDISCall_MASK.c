
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* UINT ;
struct TYPE_9__ {void* InformationBufferLength; void* InformationBuffer; void* Oid; } ;
struct TYPE_8__ {void* InformationBufferLength; void* InformationBuffer; void* Oid; } ;
struct TYPE_10__ {TYPE_2__ QUERY_INFORMATION; TYPE_1__ SET_INFORMATION; } ;
struct TYPE_12__ {TYPE_3__ DATA; scalar_t__ RequestType; } ;
struct TYPE_11__ {scalar_t__ State; scalar_t__ NdisStatus; int Event; int NdisHandle; } ;
typedef void* PVOID ;
typedef TYPE_4__* PLAN_ADAPTER ;
typedef scalar_t__ NDIS_STATUS ;
typedef scalar_t__ NDIS_REQUEST_TYPE ;
typedef TYPE_5__ NDIS_REQUEST ;
typedef void* NDIS_OID ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__*,int ,TYPE_5__*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

NDIS_STATUS FUNC_2(
    PLAN_ADAPTER VAR_7,
    NDIS_REQUEST_TYPE VAR_8,
    NDIS_OID VAR_9,
    PVOID VAR_10,
    UINT VAR_11)
{
    NDIS_REQUEST VAR_12;
    NDIS_STATUS VAR_13;

    VAR_12.RequestType = VAR_8;
    if (VAR_8 == VAR_5) {
        VAR_12.DATA.SET_INFORMATION.Oid = VAR_9;
        VAR_12.DATA.SET_INFORMATION.InformationBuffer = VAR_10;
        VAR_12.DATA.SET_INFORMATION.InformationBufferLength = VAR_11;
    } else {
        VAR_12.DATA.QUERY_INFORMATION.Oid = VAR_9;
        VAR_12.DATA.QUERY_INFORMATION.InformationBuffer = VAR_10;
        VAR_12.DATA.QUERY_INFORMATION.InformationBufferLength = VAR_11;
    }

    if (VAR_7->State != VAR_2) {
        FUNC_1(&VAR_13, VAR_7->NdisHandle, &VAR_12);
    } else {
        VAR_13 = VAR_3;
    }


    if (VAR_13 == VAR_4) {
        FUNC_0(&VAR_7->Event,
                              VAR_6,
                              VAR_1,
                              VAR_0,
                              ((void*)0));
        VAR_13 = VAR_7->NdisStatus;
    }

    return VAR_13;
}
