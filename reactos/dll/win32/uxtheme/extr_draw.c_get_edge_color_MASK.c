
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int themeProp; int sysColor; } ;
typedef int HTHEME ;
typedef int COLORREF ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int,int,int *) ;

__attribute__((used)) static COLORREF FUNC_3 (int VAR_1, HTHEME VAR_2, int VAR_3, int VAR_4)
{
    COLORREF VAR_5;
    if ((VAR_0[VAR_1].themeProp == -1)
        || FUNC_0 (FUNC_2 (VAR_2, VAR_3, VAR_4,
            VAR_0[VAR_1].themeProp, &VAR_5)))
        VAR_5 = FUNC_1 (VAR_0[VAR_1].sysColor);
    return VAR_5;
}
