
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ counter; int timer; } ;
typedef TYPE_1__ install_ctx_t ;
typedef int WCHAR ;
typedef int HWND ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int *,int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_6 (int *,int *,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_7(install_ctx_t *VAR_5, HWND VAR_6)
{
    WCHAR VAR_7[100];

    if(--VAR_5->counter <= 0) {
        HWND VAR_8;

        FUNC_3(VAR_6, VAR_5->timer);
        FUNC_4(VAR_4, VAR_0, VAR_7, FUNC_0(VAR_7));

        VAR_8 = FUNC_2(VAR_6, VAR_2);
        FUNC_1(VAR_8, VAR_3);
    }else {
        WCHAR VAR_9[100];
        FUNC_4(VAR_4, VAR_1, VAR_9, FUNC_0(VAR_9));
        FUNC_6(VAR_7, VAR_9, VAR_5->counter);
    }

    FUNC_5(VAR_6, VAR_2, VAR_7);
}
