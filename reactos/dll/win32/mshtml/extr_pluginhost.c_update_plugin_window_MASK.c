
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hwnd; int rect; scalar_t__ ip_object; } ;
typedef int RECT ;
typedef TYPE_1__ PluginHost ;
typedef scalar_t__ HWND ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,int *,int *) ;
 int FUNC_2 (char*,scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int const*,int *,int) ;
 int FUNC_5 (int const*) ;

void FUNC_6(PluginHost *VAR_2, HWND VAR_3, const RECT *VAR_4)
{
    BOOL VAR_5 = VAR_0;

    if(!VAR_3 || (VAR_2->hwnd && VAR_2->hwnd != VAR_3)) {
        FUNC_0("unhandled hwnd\n");
        return;
    }

    FUNC_2("%p %s\n", VAR_3, FUNC_5(VAR_4));

    if(FUNC_4(VAR_4, &VAR_2->rect, sizeof(RECT))) {
        VAR_2->rect = *VAR_4;
        VAR_5 = VAR_1;
    }

    if(!VAR_2->hwnd) {
        VAR_2->hwnd = VAR_3;
        FUNC_3(VAR_2);
    }

    if(VAR_5 && VAR_2->ip_object)
        FUNC_1(VAR_2->ip_object, &VAR_2->rect, &VAR_2->rect);
}
