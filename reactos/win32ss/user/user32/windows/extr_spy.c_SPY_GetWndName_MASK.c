
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {scalar_t__* wnd_class; scalar_t__* wnd_name; int msg_hwnd; } ;
typedef TYPE_1__ SPY_INSTANCE ;
typedef scalar_t__* LPWSTR ;
typedef int INT ;


 int FUNC_0 (int ,scalar_t__*,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2( SPY_INSTANCE *VAR_0 )
{
    INT VAR_1;

    FUNC_1( VAR_0 );

    VAR_1 = FUNC_0(VAR_0->msg_hwnd, VAR_0->wnd_name, sizeof(VAR_0->wnd_name)/sizeof(WCHAR));
    if(!VAR_1)
    {
        LPWSTR VAR_2 = VAR_0->wnd_name;
        LPWSTR VAR_3 = VAR_0->wnd_class;
        int VAR_4 = sizeof(VAR_0->wnd_name)/sizeof(WCHAR) - 3;
        *VAR_2++ = '{';
        while ((VAR_4-- > 0) && *VAR_3) *VAR_2++ = *VAR_3++;
        *VAR_2++ = '}';
        *VAR_2 = 0;
    }
}
