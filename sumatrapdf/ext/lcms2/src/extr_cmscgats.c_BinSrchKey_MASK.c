
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sy; int id; } ;
typedef int SYMBOL ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char const*,int ) ;

__attribute__((used)) static
SYMBOL FUNC_1(const char *VAR_3)
{
    int VAR_4 = 1;
    int VAR_5 = VAR_0;
    int VAR_6, VAR_7;

    while (VAR_5 >= VAR_4)
    {
        VAR_6 = (VAR_4+VAR_5)/2;
        VAR_7 = FUNC_0(VAR_3, VAR_2[VAR_6-1].id);
        if (VAR_7 == 0) return VAR_2[VAR_6-1].sy;
        if (VAR_7 < 0) VAR_5 = VAR_6 - 1;
        else VAR_4 = VAR_6 + 1;
    }

    return VAR_1;
}
