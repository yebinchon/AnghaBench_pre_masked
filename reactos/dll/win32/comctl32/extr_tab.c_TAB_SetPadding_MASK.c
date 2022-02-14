
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int uVItemPadding_s; int uHItemPadding_s; } ;
typedef TYPE_1__ TAB_INFO ;
typedef int LRESULT ;
typedef int LPARAM ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,TYPE_1__*,int ,int ) ;

__attribute__((used)) static inline LRESULT
FUNC_3 (TAB_INFO *VAR_0, LPARAM VAR_1)
{
    FUNC_2("(%p %d %d)\n", VAR_0, FUNC_1(VAR_1), FUNC_0(VAR_1));
    VAR_0->uHItemPadding_s = FUNC_1(VAR_1);
    VAR_0->uVItemPadding_s = FUNC_0(VAR_1);

    return 0;
}
