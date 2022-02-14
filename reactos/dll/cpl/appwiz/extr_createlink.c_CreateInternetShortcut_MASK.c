
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_12__ {TYPE_1__* lpVtbl; } ;
struct TYPE_11__ {int szTarget; int szLinkName; } ;
struct TYPE_10__ {int (* Save ) (TYPE_3__*,int *,int ) ;int (* SetURL ) (TYPE_3__*,int ,int ) ;} ;
typedef TYPE_2__* PCREATE_LINK_CONTEXT ;
typedef TYPE_3__ IUniformResourceLocatorW ;
typedef TYPE_3__ IPersistFile ;
typedef int HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_3__*,int *,void**) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;
 int FUNC_8 (TYPE_3__*,int *,int ) ;

BOOL
FUNC_9(PCREATE_LINK_CONTEXT VAR_7)
{
    IUniformResourceLocatorW *VAR_8 = ((void*)0);
    IPersistFile *VAR_9 = ((void*)0);
    HRESULT VAR_10;
    WCHAR VAR_11[VAR_5];
    FUNC_2(VAR_7->szLinkName, FUNC_6(VAR_11), VAR_11, ((void*)0));

    VAR_10 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
                          &VAR_4, (void **)&VAR_8);
    if (FUNC_1(VAR_10))
        return VAR_2;

    VAR_10 = FUNC_3(VAR_8, &VAR_3, (void **)&VAR_9);
    if (FUNC_1(VAR_10))
    {
        FUNC_4(VAR_8);
        return VAR_2;
    }

    VAR_8->lpVtbl->SetURL(VAR_8, VAR_7->szTarget, 0);

    VAR_10 = VAR_9->lpVtbl->Save(VAR_9, VAR_11, VAR_6);

    FUNC_4(VAR_9);
    FUNC_4(VAR_8);

    return FUNC_5(VAR_10);
}
