
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {scalar_t__ Context; } ;
typedef int * PULONG ;
typedef int PLAN_ADAPTER ;
typedef TYPE_1__* PIP_INTERFACE ;
typedef int NTSTATUS ;
typedef int NDIS_OID ;


 int FUNC_0 (int ,int ,int,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;

NTSTATUS FUNC_1
( PIP_INTERFACE VAR_5,
  NDIS_OID VAR_6,
  PULONG VAR_7 ) {

    if( VAR_5->Context ) {
        return FUNC_0((PLAN_ADAPTER)VAR_5->Context,
                        VAR_2,
                        VAR_6,
                        VAR_7,
                        sizeof(ULONG));
    } else switch( VAR_6 ) {
    case 129:
        *VAR_7 = VAR_0;
        return VAR_4;
    case 128:
        *VAR_7 = VAR_1;
        return VAR_4;
    default:
        return VAR_3;
    }
}
