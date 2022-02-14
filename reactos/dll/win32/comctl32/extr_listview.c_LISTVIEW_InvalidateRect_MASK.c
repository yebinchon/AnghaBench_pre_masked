
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hwndSelf; } ;
typedef int RECT ;
typedef TYPE_1__ LISTVIEW_INFO ;


 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (int const*) ;

__attribute__((used)) static inline void FUNC_4(const LISTVIEW_INFO *VAR_1, const RECT* VAR_2)
{
    if(!FUNC_2(VAR_1)) return;
    FUNC_1(" invalidating rect=%s\n", FUNC_3(VAR_2));
    FUNC_0(VAR_1->hwndSelf, VAR_2, VAR_0);
}
