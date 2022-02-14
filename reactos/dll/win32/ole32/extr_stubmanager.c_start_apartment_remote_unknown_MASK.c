
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cs; scalar_t__ remunk_exported; } ;
typedef int STDOBJREF ;
typedef int IUnknown ;
typedef int IRemUnknown ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ APARTMENT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int **) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *,int *,int *,int ,int *,int) ;

HRESULT FUNC_5(APARTMENT *VAR_6)
{
    IRemUnknown *VAR_7;
    HRESULT VAR_8 = VAR_4;

    FUNC_0(&VAR_6->cs);
    if (!VAR_6->remunk_exported)
    {

        VAR_8 = FUNC_3(&VAR_7);
        if (VAR_8 == VAR_4)
        {
            STDOBJREF VAR_9;

            VAR_8 = FUNC_4(VAR_6, &VAR_9, &VAR_0, (IUnknown *)VAR_7, VAR_1, ((void*)0), VAR_3|VAR_2);

            FUNC_1(VAR_7);
            if (VAR_8 == VAR_4)
                VAR_6->remunk_exported = VAR_5;
        }
    }
    FUNC_2(&VAR_6->cs);
    return VAR_8;
}
