
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* lpszClassName; int lpfnWndProc; } ;
typedef TYPE_1__ WNDCLASSW ;
typedef char WCHAR ;


 int * FUNC_0 (int ,char const*,int *,int ,int ,int ,int,int,int *,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int * VAR_1 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    WNDCLASSW VAR_2;
    static const WCHAR VAR_3[] = {'e','b','t','e','s','t',0};

    FUNC_2(&VAR_2, sizeof(WNDCLASSW));
    VAR_2.lpfnWndProc = VAR_0;
    VAR_2.lpszClassName = VAR_3;
    FUNC_1(&VAR_2);
    VAR_1 = FUNC_0(0, VAR_3, ((void*)0), 0,
                           0, 0, 500, 500,
                           ((void*)0), 0, 0, ((void*)0));
    FUNC_3(VAR_1 != ((void*)0), "Failed to create window for tests.\n");
}
