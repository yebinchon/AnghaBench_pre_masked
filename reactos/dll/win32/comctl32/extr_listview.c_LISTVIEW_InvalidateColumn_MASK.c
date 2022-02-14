
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int bottom; int top; } ;
struct TYPE_12__ {TYPE_1__ rcList; } ;
struct TYPE_11__ {int bottom; int top; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ LISTVIEW_INFO ;
typedef int INT ;


 int FUNC_0 (TYPE_3__ const*,int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__ const*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__ const*) ;

__attribute__((used)) static inline void FUNC_3(const LISTVIEW_INFO *VAR_0, INT VAR_1)
{
    RECT VAR_2;

    if(!FUNC_2(VAR_0)) return;
    FUNC_0(VAR_0, VAR_1, &VAR_2);
    VAR_2.top = VAR_0->rcList.top;
    VAR_2.bottom = VAR_0->rcList.bottom;
    FUNC_1(VAR_0, &VAR_2);
}
