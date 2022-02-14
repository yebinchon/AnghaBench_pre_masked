
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entry; int protocol; scalar_t__ urlmon; int clsid; int * cf; } ;
typedef TYPE_1__ name_space ;
typedef int * REFIID ;
typedef int LPCWSTR ;
typedef int IClassFactory ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;

HRESULT FUNC_6(IClassFactory *VAR_3, REFIID VAR_4, LPCWSTR VAR_5, BOOL VAR_6)
{
    name_space *VAR_7;

    VAR_7 = FUNC_3(sizeof(name_space));

    if(!VAR_6)
        FUNC_1(VAR_3);
    VAR_7->cf = VAR_3;
    VAR_7->clsid = *VAR_4;
    VAR_7->urlmon = VAR_6;
    VAR_7->protocol = FUNC_4(VAR_5);

    FUNC_0(&VAR_2);

    FUNC_5(&VAR_1, &VAR_7->entry);

    FUNC_2(&VAR_2);

    return VAR_0;
}
