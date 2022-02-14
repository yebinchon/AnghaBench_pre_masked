
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ hfile; int data; int hmap; int path; } ;
typedef int LPCWSTR ;
typedef int HRESULT ;
typedef TYPE_1__ ASSEMBLY ;


 int FUNC_0 (scalar_t__,int *,int ,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ) ;

HRESULT FUNC_11(ASSEMBLY **VAR_9, LPCWSTR VAR_10)
{
    ASSEMBLY *VAR_11;
    HRESULT VAR_12;

    *VAR_9 = ((void*)0);

    if (!(VAR_11 = FUNC_7(sizeof(*VAR_11)))) return VAR_0;

    VAR_11->path = FUNC_10(VAR_10);
    if (!VAR_11->path)
    {
        VAR_12 = VAR_0;
        goto failed;
    }

    VAR_11->hfile = FUNC_1(VAR_10, VAR_4, VAR_3,
                                  ((void*)0), VAR_6, VAR_1, ((void*)0));
    if (VAR_11->hfile == VAR_5)
    {
        VAR_12 = FUNC_4(FUNC_3());
        goto failed;
    }

    VAR_11->hmap = FUNC_0(VAR_11->hfile, ((void*)0), VAR_7,
                                        0, 0, ((void*)0));
    if (!VAR_11->hmap)
    {
        VAR_12 = FUNC_4(FUNC_3());
        goto failed;
    }

    VAR_11->data = FUNC_5(VAR_11->hmap, VAR_2, 0, 0, 0);
    if (!VAR_11->data)
    {
        VAR_12 = FUNC_4(FUNC_3());
        goto failed;
    }

    VAR_12 = FUNC_9(VAR_11);
    if (FUNC_2(VAR_12)) goto failed;

    VAR_12 = FUNC_8(VAR_11);
    if (FUNC_2(VAR_12)) goto failed;

    *VAR_9 = VAR_11;
    return VAR_8;

failed:
    FUNC_6(VAR_11);
    return VAR_12;
}
