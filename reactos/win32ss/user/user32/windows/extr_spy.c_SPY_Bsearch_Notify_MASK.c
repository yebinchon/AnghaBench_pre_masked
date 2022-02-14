
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {scalar_t__ value; } ;
typedef TYPE_1__ SPY_NOTIFY ;


 int FUNC_0 (TYPE_1__ const*) ;
 TYPE_1__ const* VAR_0 ;

__attribute__((used)) static const SPY_NOTIFY *FUNC_1( UINT VAR_1)
{
    int VAR_2 = 0, VAR_3 = FUNC_0(VAR_0) - 1;

    while (VAR_2 <= VAR_3)
    {
        int VAR_4 = (VAR_2 + VAR_3) / 2;
        if (VAR_0[VAR_4].value == VAR_1) return VAR_0 + VAR_4;
        if (VAR_0[VAR_4].value < VAR_1)
            VAR_3 = VAR_4 - 1;
        else
            VAR_2 = VAR_4 + 1;
    }
    return ((void*)0);
}
