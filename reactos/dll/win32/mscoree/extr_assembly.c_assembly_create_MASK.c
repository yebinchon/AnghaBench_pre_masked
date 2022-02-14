
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int is_mapped_file; scalar_t__ hfile; int data; int hmap; int path; } ;
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
 int FUNC_4 () ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ,int ,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int ,int ,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ) ;

HRESULT FUNC_11(ASSEMBLY **VAR_10, LPCWSTR VAR_11)
{
    ASSEMBLY *VAR_12;
    HRESULT VAR_13;

    *VAR_10 = ((void*)0);

    VAR_12 = FUNC_6(FUNC_4(), VAR_5, sizeof(ASSEMBLY));
    if (!VAR_12)
        return VAR_0;

    VAR_12->is_mapped_file = 1;

    VAR_12->path = FUNC_10(VAR_11);
    if (!VAR_12->path)
    {
        VAR_13 = VAR_0;
        goto failed;
    }

    VAR_12->hfile = FUNC_1(VAR_11, VAR_4, VAR_3,
                                  ((void*)0), VAR_7, VAR_1, ((void*)0));
    if (VAR_12->hfile == VAR_6)
    {
        VAR_13 = FUNC_5(FUNC_3());
        goto failed;
    }

    VAR_12->hmap = FUNC_0(VAR_12->hfile, ((void*)0), VAR_8,
                                        0, 0, ((void*)0));
    if (!VAR_12->hmap)
    {
        VAR_13 = FUNC_5(FUNC_3());
        goto failed;
    }

    VAR_12->data = FUNC_7(VAR_12->hmap, VAR_2, 0, 0, 0);
    if (!VAR_12->data)
    {
        VAR_13 = FUNC_5(FUNC_3());
        goto failed;
    }

    VAR_13 = FUNC_9(VAR_12);
    if (FUNC_2(VAR_13)) goto failed;

    *VAR_10 = VAR_12;
    return VAR_9;

failed:
    FUNC_8(VAR_12);
    return VAR_13;
}
