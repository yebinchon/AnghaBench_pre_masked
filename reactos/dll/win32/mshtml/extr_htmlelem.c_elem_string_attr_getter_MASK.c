
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsAString ;
typedef scalar_t__ WCHAR ;
struct TYPE_3__ {int nselem; } ;
typedef scalar_t__ PRUnichar ;
typedef TYPE_1__ HTMLElement ;
typedef int HRESULT ;
typedef int * BSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int * FUNC_1 (scalar_t__ const*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (scalar_t__ const*) ;
 int FUNC_4 (int ,scalar_t__ const*,int *,scalar_t__ const**) ;
 int FUNC_5 (int *) ;

HRESULT FUNC_6(HTMLElement *VAR_3, const WCHAR *VAR_4, BOOL VAR_5, BSTR *VAR_6)
{
    const PRUnichar *VAR_7;
    nsAString VAR_8;
    nsresult VAR_9;
    HRESULT VAR_10 = VAR_2;

    VAR_9 = FUNC_4(VAR_3->nselem, VAR_4, &VAR_8, &VAR_7);
    if(FUNC_0(VAR_9))
        return VAR_0;

    FUNC_2("%s: returning %s\n", FUNC_3(VAR_4), FUNC_3(VAR_7));

    if(*VAR_7 || !VAR_5) {
        *VAR_6 = FUNC_1(VAR_7);
        if(!*VAR_6)
            VAR_10 = VAR_1;
    }else {
        *VAR_6 = ((void*)0);
    }
    FUNC_5(&VAR_8);
    return VAR_10;
}
