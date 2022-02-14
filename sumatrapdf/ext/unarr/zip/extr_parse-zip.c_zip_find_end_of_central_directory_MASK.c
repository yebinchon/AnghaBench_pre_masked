
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
 int VAR_3 ;
 size_t FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

off64_t FUNC_4(ar_stream *VAR_4)
{
    uint8_t VAR_5[512];
    off64_t VAR_6;
    int VAR_7 = 0;
    int VAR_8, VAR_9;

    if (!FUNC_1(VAR_4, 0, VAR_0))
        return -1;
    VAR_6 = FUNC_2(VAR_4);

    while (VAR_7 < VAR_2 + VAR_3 && VAR_7 < VAR_6) {
        VAR_8 = (int)(VAR_6 - VAR_7 < sizeof(VAR_5) ? VAR_6 - VAR_7 : sizeof(VAR_5));
        VAR_7 += VAR_8;
        if (VAR_8 < VAR_3)
            return -1;
        if (!FUNC_1(VAR_4, -VAR_7, VAR_0))
            return -1;
        if (FUNC_0(VAR_4, VAR_5, VAR_8) != (size_t)VAR_8)
            return -1;
        for (VAR_9 = VAR_8 - VAR_3; VAR_9 >= 0; VAR_9--) {
            if (FUNC_3(VAR_5 + VAR_9) == VAR_1)
                return VAR_6 - VAR_7 + VAR_9;
        }
        VAR_7 -= VAR_3 - 1;
    }

    return -1;
}
