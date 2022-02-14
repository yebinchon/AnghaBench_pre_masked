
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rangepoint_t ;
typedef scalar_t__ LONG ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static LONG FUNC_2(rangepoint_t *VAR_0, LONG VAR_1)
{
    LONG VAR_2 = 0;

    if(VAR_1 >= 0) {
        while(VAR_2 < VAR_1 && FUNC_0(VAR_0))
            VAR_2++;
    }else {
        while(VAR_2 > VAR_1 && FUNC_1(VAR_0))
            VAR_2--;
    }

    return VAR_2;
}
