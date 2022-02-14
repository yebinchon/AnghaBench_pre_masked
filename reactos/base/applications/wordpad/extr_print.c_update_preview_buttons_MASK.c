
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int page; int pages_shown; int zoomlevel; } ;
typedef int HWND ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static void FUNC_3(HWND VAR_7)
{
    HWND VAR_8 = FUNC_1(VAR_7, VAR_0);
    FUNC_0(FUNC_1(VAR_8, VAR_3), VAR_6.page > 1);
    FUNC_0(FUNC_1(VAR_8, VAR_1),
                 !FUNC_2(VAR_6.page) &&
                 !FUNC_2(VAR_6.page + VAR_6.pages_shown - 1));
    FUNC_0(FUNC_1(VAR_8, VAR_2),
                 VAR_6.pages_shown > 1 ||
                 (!FUNC_2(1) && VAR_6.zoomlevel == 0));
    FUNC_0(FUNC_1(VAR_8, VAR_4), VAR_6.zoomlevel < 2);
    FUNC_0(FUNC_1(VAR_8, VAR_5), VAR_6.zoomlevel > 0);
}
