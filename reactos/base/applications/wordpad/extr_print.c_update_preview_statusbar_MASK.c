
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_2__ {int pages_shown; scalar_t__ page; } ;
typedef int HWND ;
typedef int HINSTANCE ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 TYPE_1__ VAR_4 ;
 int FUNC_5 (char*,char const*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_6(HWND VAR_5)
{
    HWND VAR_6 = FUNC_0(VAR_5, VAR_0);
    HINSTANCE VAR_7 = FUNC_1(0);
    WCHAR *VAR_8;
    WCHAR VAR_9[VAR_1];

    VAR_8 = VAR_9;
    if (VAR_4.pages_shown < 2 || FUNC_4(VAR_4.page))
    {
        static const WCHAR VAR_10[] = {' ','%','d','\0'};
        VAR_8 += FUNC_2(VAR_7, VAR_2, VAR_9, VAR_1);
        FUNC_5(VAR_8, VAR_10, VAR_4.page);
    } else {
        static const WCHAR VAR_11[] = {' ','%','d','-','%','d','\0'};
        VAR_8 += FUNC_2(VAR_7, VAR_3, VAR_9, VAR_1);
        FUNC_5(VAR_8, VAR_11, VAR_4.page, VAR_4.page + 1);
    }
    FUNC_3(VAR_6, VAR_9);
}
