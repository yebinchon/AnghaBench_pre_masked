
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int request; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
typedef int * LPWSTR ;
typedef TYPE_2__ HttpProtocol ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int *,int *,int *) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static LPWSTR FUNC_5(HttpProtocol *VAR_1, DWORD VAR_2)
{
    LPWSTR VAR_3 = ((void*)0);
    DWORD VAR_4 = 0;
    BOOL VAR_5;

    VAR_5 = FUNC_1(VAR_1->base.request, VAR_2, ((void*)0), &VAR_4, ((void*)0));
    if (!VAR_5 && FUNC_0() == VAR_0) {
        VAR_3 = FUNC_3(VAR_4);
        VAR_5 = FUNC_1(VAR_1->base.request, VAR_2, VAR_3, &VAR_4, ((void*)0));
    }
    if(!VAR_5) {
        FUNC_2("HttpQueryInfoW(%d) failed: %08x\n", VAR_2, FUNC_0());
        FUNC_4(VAR_3);
        return ((void*)0);
    }

    return VAR_3;
}
