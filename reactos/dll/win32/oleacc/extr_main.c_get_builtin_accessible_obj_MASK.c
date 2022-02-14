
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int * accessible_create ;
struct TYPE_7__ {int idx; int * create_window; int * create_client; int name; } ;
typedef TYPE_1__ WCHAR ;
typedef scalar_t__ LONG ;
typedef int HWND ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,TYPE_1__*,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static accessible_create FUNC_8(HWND VAR_4, LONG VAR_5)
{
    WCHAR VAR_6[64];
    int VAR_7, VAR_8;

    if(!FUNC_2(VAR_4, VAR_6, FUNC_0(VAR_6)))
        return ((void*)0);
    FUNC_4("got window class: %s\n", FUNC_6(VAR_6));

    for(VAR_7=0; VAR_7<FUNC_0(VAR_3); VAR_7++) {
        if(!FUNC_7(VAR_6, VAR_3[VAR_7].name)) {
            accessible_create VAR_9;

            VAR_9 = (VAR_5==VAR_0 ?
                    VAR_3[VAR_7].create_client :
                    VAR_3[VAR_7].create_window);
            if(!VAR_9)
                FUNC_1("unhandled window class: %s\n", FUNC_6(VAR_6));
            return VAR_9;
        }
    }

    VAR_8 = FUNC_3(VAR_4, VAR_2, 0, VAR_1);
    if(VAR_8) {
        for(VAR_7=0; VAR_7<FUNC_0(VAR_3); VAR_7++) {
            if(VAR_8 == VAR_3[VAR_7].idx) {
                accessible_create VAR_10;

                VAR_10 = (VAR_5==VAR_0 ?
                        VAR_3[VAR_7].create_client :
                        VAR_3[VAR_7].create_window);
                if(!VAR_10)
                    FUNC_1("unhandled class name idx: %x\n", VAR_8);
                return VAR_10;
            }
        }

        FUNC_5("unhandled class name idx: %x\n", VAR_8);
    }

    return ((void*)0);
}
