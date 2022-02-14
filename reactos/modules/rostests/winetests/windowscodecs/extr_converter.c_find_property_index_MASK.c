
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int pstrName; } ;
typedef TYPE_1__ PROPBAG2 ;


 scalar_t__ FUNC_0 (int const*,int ) ;

__attribute__((used)) static int FUNC_1(const WCHAR* VAR_0, PROPBAG2* VAR_1, int VAR_2)
{
    int VAR_3;
    for (VAR_3=0; VAR_3 < VAR_2; VAR_3++)
    {
        if (FUNC_0(VAR_0, VAR_1[VAR_3].pstrName) == 0)
            return VAR_3;
    }
    return -1;
}
