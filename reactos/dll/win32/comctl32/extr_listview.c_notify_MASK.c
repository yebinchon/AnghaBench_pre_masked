
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hwndSelf; } ;
typedef int NMHDR ;
typedef TYPE_1__ LISTVIEW_INFO ;
typedef int INT ;
typedef int HWND ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__ const*,int ,int *) ;

__attribute__((used)) static inline BOOL FUNC_2(const LISTVIEW_INFO *VAR_0, INT VAR_1)
{
    NMHDR VAR_2;
    HWND VAR_3 = VAR_0->hwndSelf;
    FUNC_1(VAR_0, VAR_1, &VAR_2);
    return FUNC_0(VAR_3);
}
