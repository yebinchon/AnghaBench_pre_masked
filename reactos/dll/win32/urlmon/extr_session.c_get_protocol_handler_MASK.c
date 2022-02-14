
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int clsid; int * cf; } ;
typedef TYPE_1__ name_space ;
typedef int IUri ;
typedef int IClassFactory ;
typedef int HRESULT ;
typedef int CLSID ;
typedef int BSTR ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int *,int **) ;
 int VAR_1 ;

HRESULT FUNC_9(IUri *VAR_2, CLSID *VAR_3, IClassFactory **VAR_4)
{
    name_space *VAR_5;
    BSTR VAR_6;
    HRESULT VAR_7;

    *VAR_4 = ((void*)0);


    VAR_7 = FUNC_3(VAR_2, &VAR_6);
    if(FUNC_1(VAR_7))
        return VAR_7;

    FUNC_0(&VAR_1);

    VAR_5 = FUNC_7(VAR_6);
    if(VAR_5) {
        *VAR_4 = VAR_5->cf;
        FUNC_2(*VAR_4);
        if(VAR_3)
            *VAR_3 = VAR_5->clsid;
    }

    FUNC_4(&VAR_1);

    VAR_7 = *VAR_4 ? VAR_0 : FUNC_8(VAR_6, FUNC_6(VAR_6), VAR_3, VAR_4);
    FUNC_5(VAR_6);
    return VAR_7;
}
