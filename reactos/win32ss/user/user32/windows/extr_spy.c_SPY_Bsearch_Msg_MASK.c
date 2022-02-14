
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
typedef TYPE_1__ USER_MSG ;
typedef int UINT ;



__attribute__((used)) static const USER_MSG *FUNC_0( const USER_MSG *VAR_0, UINT VAR_1, UINT VAR_2)
{
    int VAR_3 = 0, VAR_4 = VAR_1 - 1;

    while (VAR_3 <= VAR_4)
    {
        int VAR_5 = (VAR_3 + VAR_4) / 2;
        if (VAR_0[VAR_5].value == VAR_2) return VAR_0 + VAR_5;
        if (VAR_0[VAR_5].value > VAR_2)
            VAR_4 = VAR_5 - 1;
        else
            VAR_3 = VAR_5 + 1;
    }
    return ((void*)0);
}
