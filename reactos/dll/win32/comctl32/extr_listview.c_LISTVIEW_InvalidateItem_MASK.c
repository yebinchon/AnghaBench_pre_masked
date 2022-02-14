
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nItemCount; } ;
typedef int RECT ;
typedef TYPE_1__ LISTVIEW_INFO ;
typedef scalar_t__ INT ;


 int FUNC_0 (TYPE_1__ const*,scalar_t__,int *) ;
 int FUNC_1 (TYPE_1__ const*,int *) ;
 int FUNC_2 (TYPE_1__ const*) ;

__attribute__((used)) static inline void FUNC_3(const LISTVIEW_INFO *VAR_0, INT VAR_1)
{
    RECT VAR_2;

    if (!FUNC_2(VAR_0) || VAR_1 < 0 || VAR_1 >= VAR_0->nItemCount)
        return;

    FUNC_0(VAR_0, VAR_1, &VAR_2);
    FUNC_1(VAR_0, &VAR_2);
}
