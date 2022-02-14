
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int off64_t ;
typedef int data ;
typedef int ar_stream ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (int *) ;

off64_t FUNC_4(ar_stream *VAR_3, off64_t VAR_4)
{
    uint8_t VAR_5[512];
    int VAR_6, VAR_7;

    if (!FUNC_1(VAR_3, VAR_4, VAR_0))
        return -1;
    VAR_6 = (int)FUNC_0(VAR_3, VAR_5, sizeof(VAR_5));

    while (VAR_6 >= VAR_2) {
        for (VAR_7 = 0; VAR_7 < VAR_6 - 4; VAR_7++) {
            if (FUNC_3(VAR_5 + VAR_7) == VAR_1)
                return VAR_4 + VAR_7;
        }
        FUNC_2(VAR_5, VAR_5 + VAR_6 - 4, VAR_6);
        VAR_4 += VAR_6 - 4;
        VAR_6 = (int)FUNC_0(VAR_3, VAR_5 + 4, sizeof(VAR_5) - 4) + 4;
    }

    return -1;
}
