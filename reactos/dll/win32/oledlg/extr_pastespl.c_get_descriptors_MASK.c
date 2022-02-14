
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int * type_name; int * link_type_name; int * source_name; int * link_source_name; TYPE_1__* ps; int app_name; } ;
typedef TYPE_3__ ps_struct_t ;
typedef int WCHAR ;
struct TYPE_16__ {int lindex; int cfFormat; int * ptd; int dwAspect; int tymed; } ;
struct TYPE_15__ {int dwSrcOfCopy; int dwFullUserTypeName; int clsid; } ;
struct TYPE_12__ {int hGlobal; } ;
struct TYPE_14__ {TYPE_2__ u; } ;
struct TYPE_11__ {int lpSrcDataObj; } ;
typedef TYPE_4__ STGMEDIUM ;
typedef TYPE_5__ OBJECTDESCRIPTOR ;
typedef int HWND ;
typedef TYPE_6__ FORMATETC ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,TYPE_6__*,TYPE_4__*) ;
 int FUNC_5 (int ,int ,int *,int ) ;
 int VAR_3 ;
 int FUNC_6 (int *,int ,int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(HWND VAR_9, ps_struct_t *VAR_10)
{
    FORMATETC VAR_11;
    STGMEDIUM VAR_12;

    VAR_11.tymed = VAR_5;
    VAR_11.dwAspect = VAR_0;
    VAR_11.ptd = ((void*)0);
    VAR_11.lindex = -1;

    VAR_11.cfFormat = VAR_8;
    if(FUNC_4(VAR_10->ps->lpSrcDataObj, &VAR_11, &VAR_12) == VAR_4)
    {
        OBJECTDESCRIPTOR *VAR_13 = FUNC_2(VAR_12.u.hGlobal);
        if(VAR_13->dwSrcOfCopy)
            VAR_10->source_name = FUNC_7((WCHAR*)((char*)VAR_13 + VAR_13->dwSrcOfCopy));
        if(VAR_13->dwFullUserTypeName)
            VAR_10->type_name = FUNC_7((WCHAR*)((char*)VAR_13 + VAR_13->dwFullUserTypeName));
        FUNC_6(&VAR_13->clsid, VAR_6, &VAR_10->app_name);


        FUNC_3(VAR_12.u.hGlobal);
        FUNC_1(VAR_12.u.hGlobal);
    }
    else
    {

    }

    VAR_11.cfFormat = VAR_7;
    if(FUNC_4(VAR_10->ps->lpSrcDataObj, &VAR_11, &VAR_12) == VAR_4)
    {
        OBJECTDESCRIPTOR *VAR_14 = FUNC_2(VAR_12.u.hGlobal);
        if(VAR_14->dwSrcOfCopy)
            VAR_10->link_source_name = FUNC_7((WCHAR*)((char*)VAR_14 + VAR_14->dwSrcOfCopy));
        if(VAR_14->dwFullUserTypeName)
            VAR_10->link_type_name = FUNC_7((WCHAR*)((char*)VAR_14 + VAR_14->dwFullUserTypeName));
        FUNC_3(VAR_12.u.hGlobal);
        FUNC_1(VAR_12.u.hGlobal);
    }

    if(VAR_10->source_name == ((void*)0) && VAR_10->link_source_name == ((void*)0))
    {
        WCHAR VAR_15[200];
        FUNC_5(VAR_3, VAR_1, VAR_15, FUNC_0(VAR_15));
        VAR_10->source_name = FUNC_7(VAR_15);
    }

    if(VAR_10->type_name == ((void*)0) && VAR_10->link_type_name == ((void*)0))
    {
        WCHAR VAR_16[200];
        FUNC_5(VAR_3, VAR_2, VAR_16, FUNC_0(VAR_16));
        VAR_10->type_name = FUNC_7(VAR_16);
    }
}
