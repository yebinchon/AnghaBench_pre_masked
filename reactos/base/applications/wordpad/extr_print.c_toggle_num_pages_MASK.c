
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_2__ {int pages_shown; scalar_t__ zoomlevel; int saved_pages_shown; } ;
typedef int HWND ;
typedef int HINSTANCE ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int *) ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(HWND VAR_8)
{
    HWND VAR_9 = FUNC_0(VAR_8, VAR_1);
    WCHAR VAR_10[VAR_3];
    HINSTANCE VAR_11 = FUNC_1(0);
    int VAR_12;

    VAR_7.pages_shown = VAR_7.pages_shown > 1 ? 1 : 2;

    VAR_12 = VAR_7.zoomlevel > 0 ? VAR_7.saved_pages_shown :
                                            VAR_7.pages_shown;

    FUNC_2(VAR_11, VAR_12 > 1 ? VAR_4 :
                                           VAR_5,
                VAR_10, VAR_3);

    FUNC_3(FUNC_0(VAR_9, VAR_2), VAR_10);
    FUNC_5(FUNC_0(VAR_8, VAR_0), VAR_6);
    FUNC_4(VAR_8);
}
