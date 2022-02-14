
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int iRow; } ;
struct TYPE_6__ {int uNumBands; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef int INT ;


 TYPE_4__* FUNC_0 (TYPE_1__ const*,int) ;
 int FUNC_1 (TYPE_1__ const*,int) ;

__attribute__((used)) static int FUNC_2(const REBAR_INFO *VAR_0, INT VAR_1)
{
    int VAR_2 = FUNC_0(VAR_0, VAR_1)->iRow;
    while ((VAR_1 = FUNC_1(VAR_0, VAR_1)) < VAR_0->uNumBands)
        if (FUNC_0(VAR_0, VAR_1)->iRow != VAR_2)
            break;
    return VAR_1;
}
