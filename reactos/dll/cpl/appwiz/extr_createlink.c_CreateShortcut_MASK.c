
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_16__ {TYPE_1__* lpVtbl; } ;
struct TYPE_15__ {int szLinkName; int szWorkingDirectory; int szDescription; scalar_t__ szTarget; } ;
struct TYPE_14__ {scalar_t__ (* Load ) (TYPE_3__*,int ,int ) ;scalar_t__ (* Save ) (TYPE_3__*,int ,int ) ;int (* SetWorkingDirectory ) (TYPE_3__*,int ) ;int (* SetDescription ) (TYPE_3__*,int ) ;int (* SetPath ) (TYPE_3__*,int *) ;} ;
typedef TYPE_2__* PCREATE_LINK_CONTEXT ;
typedef int LPWSTR ;
typedef int LPCOLESTR ;
typedef TYPE_3__ IShellLinkW ;
typedef TYPE_3__ IPersistFile ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *,int ,int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int *,void**) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (scalar_t__) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int *,int ,scalar_t__) ;
 int VAR_8 ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int ,int ) ;
 int FUNC_10 (TYPE_3__*,int *) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_13 (TYPE_3__*,int ,int ) ;

BOOL
FUNC_14(PCREATE_LINK_CONTEXT VAR_9)
{
    IShellLinkW *VAR_10, *VAR_11;
    IPersistFile *VAR_12;
    HRESULT VAR_13;
    WCHAR VAR_14[VAR_5];
    LPWSTR VAR_15;


    VAR_15 = FUNC_6(VAR_9->szTarget);

    if (FUNC_5(VAR_15))
    {
        VAR_13 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_4, (void**)&VAR_11);

        if (FUNC_1(VAR_13))
            return VAR_2;

        VAR_13 = FUNC_3(VAR_11, &VAR_3, (void**)&VAR_12);
        if (FUNC_1(VAR_13))
        {
            FUNC_4(VAR_11);
            return VAR_2;
        }

        VAR_13 = VAR_12->lpVtbl->Load(VAR_12, (LPCOLESTR)VAR_9->szTarget, VAR_6);
        FUNC_4(VAR_12);

        if (FUNC_1(VAR_13))
        {
            FUNC_4(VAR_11);
            return VAR_2;
        }

        VAR_13 = FUNC_2(VAR_11, VAR_14, FUNC_8(VAR_14), ((void*)0), 0);
        FUNC_4(VAR_11);

        if (FUNC_1(VAR_13))
        {
            return VAR_2;
        }
    }
    else
    {
        FUNC_7(VAR_14, FUNC_8(VAR_14), VAR_9->szTarget);
    }

    VAR_13 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
                          &VAR_4, (void**)&VAR_10);

    if (VAR_13 != VAR_7)
        return VAR_2;

    VAR_10->lpVtbl->SetPath(VAR_10, VAR_14);
    VAR_10->lpVtbl->SetDescription(VAR_10, VAR_9->szDescription);
    VAR_10->lpVtbl->SetWorkingDirectory(VAR_10, VAR_9->szWorkingDirectory);

    VAR_13 = FUNC_3(VAR_10, &VAR_3, (void**)&VAR_12);
    if (VAR_13 != VAR_7)
    {
        FUNC_4(VAR_10);
        return VAR_2;
    }

    VAR_13 = VAR_12->lpVtbl->Save(VAR_12, VAR_9->szLinkName, VAR_8);
    FUNC_4(VAR_12);
    FUNC_4(VAR_10);
    return (VAR_13 == VAR_7);
}
