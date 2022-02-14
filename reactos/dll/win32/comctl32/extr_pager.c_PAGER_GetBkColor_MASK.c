
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int clrBk; int hwndSelf; } ;
typedef TYPE_1__ PAGER_INFO ;
typedef int COLORREF ;


 int FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static inline COLORREF
FUNC_1(const PAGER_INFO *VAR_0)
{
    FUNC_0("[%p] returns %06x\n", VAR_0->hwndSelf, VAR_0->clrBk);
    return VAR_0->clrBk;
}
