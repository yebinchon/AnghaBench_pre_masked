
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iRow; } ;
typedef int REBAR_INFO ;
typedef int INT ;


 TYPE_1__* FUNC_0 (int const*,int) ;
 int FUNC_1 (int const*,int) ;

__attribute__((used)) static int FUNC_2(const REBAR_INFO *VAR_0, INT VAR_1)
{
    int VAR_2 = VAR_1;
    int VAR_3 = FUNC_0(VAR_0, VAR_1)->iRow;
    while ((VAR_1 = FUNC_1(VAR_0, VAR_1)) >= 0) {
        if (FUNC_0(VAR_0, VAR_1)->iRow != VAR_3)
            break;
        else
            VAR_2 = VAR_1;
    }
    return VAR_2;
}
