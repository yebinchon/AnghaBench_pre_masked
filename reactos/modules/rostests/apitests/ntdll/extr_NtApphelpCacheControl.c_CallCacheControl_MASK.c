
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UNICODE_STRING ;
struct TYPE_4__ {int member_0; } ;
struct TYPE_5__ {scalar_t__ ImageHandle; int ImageName; TYPE_1__ member_0; } ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int IO_STATUS_BLOCK ;
typedef scalar_t__ BOOLEAN ;
typedef TYPE_2__ APPHELP_CACHE_SERVICE_LOOKUP ;
typedef int APPHELPCACHESERVICECLASS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,int *,int ,int *,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__*,int,int *,int *,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,TYPE_2__*) ;

NTSTATUS FUNC_5(UNICODE_STRING* VAR_11, BOOLEAN VAR_12, APPHELPCACHESERVICECLASS VAR_13)
{
    APPHELP_CACHE_SERVICE_LOOKUP VAR_14 = { 0 };
    NTSTATUS VAR_15;
    VAR_14.ImageName = *VAR_11;
    if (VAR_12)
    {
        OBJECT_ATTRIBUTES VAR_16;
        IO_STATUS_BLOCK VAR_17;
        FUNC_0(&VAR_16, VAR_11,
            VAR_8, ((void*)0), ((void*)0));
        VAR_15 = FUNC_2(&VAR_14.ImageHandle,
                    VAR_10 | VAR_2 | VAR_3 | VAR_0,
                    &VAR_16, &VAR_17,
                    VAR_5 | VAR_4,
                    VAR_6 | VAR_1);
        FUNC_3(VAR_15, VAR_9);
    }
    else
    {
        VAR_14.ImageHandle = VAR_7;
    }
    VAR_15 = FUNC_4(VAR_13, &VAR_14);
    if (VAR_14.ImageHandle != VAR_7)
        FUNC_1(VAR_14.ImageHandle);
    return VAR_15;
}
