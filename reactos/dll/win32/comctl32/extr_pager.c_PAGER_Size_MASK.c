
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwStyle; void* nWidth; void* nHeight; int hwndSelf; } ;
typedef TYPE_1__ PAGER_INFO ;
typedef int LRESULT ;
typedef void* INT ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,void*,void*) ;

__attribute__((used)) static LRESULT
FUNC_2 (PAGER_INFO* VAR_1, INT VAR_2, INT VAR_3, INT VAR_4)
{


    FUNC_1("[%p] %d,%d\n", VAR_1->hwndSelf, VAR_3, VAR_4);

    if (VAR_1->dwStyle & VAR_0)
        VAR_1->nHeight = VAR_4;
    else
        VAR_1->nWidth = VAR_3;

    return FUNC_0(VAR_1);
}
