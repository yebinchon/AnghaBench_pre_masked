
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rangepoint_t ;
typedef int WCHAR ;
typedef scalar_t__ LONG ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static LONG FUNC_3(rangepoint_t *VAR_1, LONG VAR_2)
{
    LONG VAR_3 = 0;

    if(VAR_2 >= 0) {
        WCHAR VAR_4;

        while(VAR_3 < VAR_2 && (VAR_4 = FUNC_2(VAR_1))) {
            if(FUNC_1(VAR_4))
                VAR_3++;
        }
    }else {
        while(VAR_3 > VAR_2 && FUNC_0(VAR_1, VAR_0))
            VAR_3--;
    }

    return VAR_3;
}
