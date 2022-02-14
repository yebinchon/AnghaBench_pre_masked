
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UNICODE_STRING ;
struct TYPE_4__ {int member_0; } ;
struct TYPE_5__ {scalar_t__ ImageHandle; int ImageName; TYPE_1__ member_0; } ;
typedef int NTSTATUS ;
typedef scalar_t__ HANDLE ;
typedef TYPE_2__ APPHELP_CACHE_SERVICE_LOOKUP ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,TYPE_2__*) ;

void FUNC_2(UNICODE_STRING* VAR_6)
{
    APPHELP_CACHE_SERVICE_LOOKUP VAR_7 = { 0 };
    NTSTATUS VAR_8;


    VAR_8 = FUNC_1(VAR_2, ((void*)0));
    FUNC_0(VAR_8, VAR_3);
    VAR_8 = FUNC_1(VAR_1, ((void*)0));
    FUNC_0(VAR_8, VAR_3);


    VAR_8 = FUNC_1(VAR_2, &VAR_7);
    FUNC_0(VAR_8, VAR_3);
    VAR_8 = FUNC_1(VAR_1, &VAR_7);
    FUNC_0(VAR_8, VAR_3);


    VAR_8 = FUNC_1(VAR_0, ((void*)0));
    FUNC_0(VAR_8, VAR_5);


    VAR_7.ImageName = *VAR_6;
    VAR_7.ImageHandle = (HANDLE)2;
    VAR_8 = FUNC_1(VAR_1, &VAR_7);
    FUNC_0(VAR_8, VAR_4);


    VAR_8 = FUNC_1(999, ((void*)0));
    FUNC_0(VAR_8, VAR_3);
    VAR_8 = FUNC_1(999, &VAR_7);
    FUNC_0(VAR_8, VAR_3);
}
