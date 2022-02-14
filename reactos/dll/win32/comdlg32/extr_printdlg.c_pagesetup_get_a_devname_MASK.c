
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* dlgw; } ;
struct TYPE_7__ {TYPE_2__ u; scalar_t__ unicode; } ;
typedef TYPE_3__ pagesetup_data ;
typedef int devnames_name ;
typedef int WCHAR ;
struct TYPE_5__ {int hDevNames; } ;
typedef int DEVNAMES ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,char*,int,int *,int) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static WCHAR *FUNC_7(const pagesetup_data *VAR_1, devnames_name VAR_2)
{
    DEVNAMES *VAR_3;
    WCHAR *VAR_4;

    VAR_3 = FUNC_1(VAR_1->u.dlgw->hDevNames);
    if(VAR_1->unicode)
        VAR_4 = FUNC_6((WCHAR *)VAR_3 + FUNC_5(VAR_3, VAR_2));
    else
    {
        int VAR_5 = FUNC_4(VAR_0, 0, (char*)VAR_3 + FUNC_5(VAR_3, VAR_2), -1, ((void*)0), 0);
        VAR_4 = FUNC_3(FUNC_0(), 0, VAR_5 * sizeof(WCHAR));
        FUNC_4(VAR_0, 0, (char*)VAR_3 + FUNC_5(VAR_3, VAR_2), -1, VAR_4, VAR_5);
    }
    FUNC_2(VAR_1->u.dlgw->hDevNames);
    return VAR_4;
}
