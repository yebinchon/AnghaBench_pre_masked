
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nMaxTipWidth; } ;
typedef TYPE_1__ TOOLTIPS_INFO ;
typedef int LRESULT ;
typedef int INT ;



__attribute__((used)) static inline LRESULT
FUNC_0 (TOOLTIPS_INFO *VAR_0, INT VAR_1)
{
    INT VAR_2 = VAR_0->nMaxTipWidth;

    VAR_0->nMaxTipWidth = VAR_1;

    return VAR_2;
}
