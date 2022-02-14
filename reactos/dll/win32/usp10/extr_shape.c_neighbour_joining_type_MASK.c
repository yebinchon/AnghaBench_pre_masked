
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fLinkAfter; scalar_t__ fLinkBefore; } ;
typedef TYPE_1__ SCRIPT_ANALYSIS ;
typedef int INT ;
typedef scalar_t__ CHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static CHAR FUNC_0(int VAR_4, int VAR_5, const CHAR* VAR_6, INT VAR_7, SCRIPT_ANALYSIS *VAR_8)
{
    if (VAR_4 + VAR_5 < 0)
    {
        if (VAR_8->fLinkBefore)
            return VAR_1;
        else
            return VAR_3;
    }
    if ( VAR_4+ VAR_5 >= VAR_7)
    {
        if (VAR_8->fLinkAfter)
            return VAR_0;
        else
            return VAR_3;
    }

    VAR_4 += VAR_5;

    if (VAR_6[VAR_4] == VAR_2)
        return FUNC_0(VAR_4,VAR_5,VAR_6,VAR_7,VAR_8);
    else
        return VAR_6[VAR_4];
}
