
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bottom; int top; } ;
struct TYPE_5__ {int nItemHeight; TYPE_1__ rcList; } ;
typedef TYPE_2__ LISTVIEW_INFO ;
typedef int INT ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static inline INT FUNC_1(const LISTVIEW_INFO *VAR_0)
{
    INT VAR_1 = VAR_0->rcList.bottom - VAR_0->rcList.top;

    return VAR_0->nItemHeight ? FUNC_0(VAR_1 / VAR_0->nItemHeight, 1) : 0;
}
