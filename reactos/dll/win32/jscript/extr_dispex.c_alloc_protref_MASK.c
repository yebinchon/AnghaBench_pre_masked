
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int jsdisp_t ;
struct TYPE_5__ {int ref; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
typedef TYPE_2__ dispex_prop_t ;
typedef int WCHAR ;
typedef int DWORD ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int const*,int ,int ) ;

__attribute__((used)) static dispex_prop_t *FUNC_1(jsdisp_t *VAR_1, const WCHAR *VAR_2, DWORD VAR_3)
{
    dispex_prop_t *VAR_4;

    VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_0, 0);
    if(!VAR_4)
        return ((void*)0);

    VAR_4->u.ref = VAR_3;
    return VAR_4;
}
