
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ idCommand; } ;
struct TYPE_5__ {TYPE_1__ btn; int text; } ;
typedef TYPE_2__* PCUSTOMBUTTON ;
typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(HWND VAR_6, PCUSTOMBUTTON VAR_7)
{
    int VAR_8;
    int VAR_9;
    PCUSTOMBUTTON VAR_10;
    HWND VAR_11 = FUNC_0(VAR_6, VAR_0);

    FUNC_2("button %s, idCommand %d\n", FUNC_3(VAR_7->text), VAR_7->btn.idCommand);

    VAR_9 = FUNC_1(VAR_11, VAR_2, 0, 0);


    for (VAR_8 = 1; VAR_8 < VAR_9; VAR_8++)
    {
        VAR_10 = (PCUSTOMBUTTON)FUNC_1(VAR_11, VAR_3, VAR_8, 0);
        if (VAR_7->btn.idCommand < VAR_10->btn.idCommand)
        {
            VAR_8 = FUNC_1(VAR_11, VAR_4, VAR_8, 0);
            FUNC_1(VAR_11, VAR_5, VAR_8, (LPARAM)VAR_7);
            return;
        }
    }

    VAR_8 = FUNC_1(VAR_11, VAR_1, 0, 0);
    FUNC_1(VAR_11, VAR_5, VAR_8, (LPARAM)VAR_7);
}
