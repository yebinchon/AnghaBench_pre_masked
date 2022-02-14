
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ Data; int Oid; } ;
typedef int QueryOid ;
typedef scalar_t__* PULONG ;
typedef TYPE_1__ NDISUIO_QUERY_OID ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,TYPE_1__*,int,TYPE_1__*,int,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

BOOL
FUNC_1(HANDLE VAR_5)
{
    BOOL VAR_6;
    DWORD VAR_7;
    NDISUIO_QUERY_OID VAR_8;


    VAR_8.Oid = VAR_3;

    VAR_6 = FUNC_0(VAR_5,
                               VAR_1,
                               &VAR_8,
                               sizeof(VAR_8),
                               &VAR_8,
                               sizeof(VAR_8),
                               &VAR_7,
                               ((void*)0));
    if (!VAR_6 || *(PULONG)VAR_8.Data != VAR_2)
        return VAR_0;

    return VAR_4;
}
