
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int stream_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

uint64_t FUNC_1(stream_t *VAR_1)
{
    int VAR_2, VAR_3, VAR_4 = 0, VAR_5 = 0x80;
    uint64_t VAR_6;

    for (VAR_2 = 0, VAR_6 = FUNC_0(VAR_1); VAR_2 < 8 && !(VAR_6 & VAR_5); VAR_2++)
        VAR_5 >>= 1;
    if (VAR_2 >= 8)
        return VAR_0;
    VAR_3 = VAR_2 + 1;
    if ((int) (VAR_6 &= (VAR_5 - 1)) == VAR_5 - 1)
        VAR_4++;
    while (VAR_2--) {
        VAR_6 = (VAR_6 << 8) | FUNC_0(VAR_1);
        if ((VAR_6 & 0xFF) == 0xFF)
            VAR_4++;
    }
    if (VAR_3 == VAR_4)
        return VAR_0;
    if (VAR_6 >= 1ULL<<63)
        return VAR_0;
    return VAR_6;
}
