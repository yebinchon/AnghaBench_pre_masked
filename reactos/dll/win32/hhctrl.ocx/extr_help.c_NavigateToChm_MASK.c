
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {int web_browser; } ;
typedef int LPCWSTR ;
typedef TYPE_1__ HHInfo ;
typedef int BOOL ;


 int FUNC_0 (int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,TYPE_1__*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int *) ;

BOOL FUNC_5(HHInfo *VAR_2, LPCWSTR VAR_3, LPCWSTR VAR_4)
{
    WCHAR VAR_5[VAR_1];

    FUNC_2("%p %s %s\n", VAR_2, FUNC_3(VAR_3), FUNC_3(VAR_4));

    if ((!VAR_2->web_browser) || !FUNC_0(VAR_3, VAR_5, VAR_4))
        return VAR_0;

    return FUNC_1(FUNC_4(VAR_2, VAR_5));
}
