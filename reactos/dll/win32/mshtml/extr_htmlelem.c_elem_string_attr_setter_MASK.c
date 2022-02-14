
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsAString ;
typedef int WCHAR ;
struct TYPE_3__ {int nselem; } ;
typedef TYPE_1__ HTMLElement ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*) ;
 int FUNC_4 (int ,int *,int *) ;

HRESULT FUNC_5(HTMLElement *VAR_2, const WCHAR *VAR_3, const WCHAR *VAR_4)
{
    nsAString VAR_5, VAR_6;
    nsresult VAR_7;

    FUNC_3(&VAR_5, VAR_3);
    FUNC_3(&VAR_6, VAR_4);
    VAR_7 = FUNC_4(VAR_2->nselem, &VAR_5, &VAR_6);
    FUNC_2(&VAR_5);
    FUNC_2(&VAR_6);

    if(FUNC_0(VAR_7)) {
        FUNC_1("SetAttribute failed: %08x\n", VAR_7);
        return VAR_0;
    }

    return VAR_1;
}
