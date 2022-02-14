
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int stream_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

uint32_t FUNC_1(stream_t *VAR_1)
{
    int VAR_2, VAR_3 = 0x80;
    uint32_t VAR_4;

    for (VAR_2 = 0, VAR_4 = FUNC_0(VAR_1); VAR_2 < 4 && !(VAR_4 & VAR_3); VAR_2++)
        VAR_3 >>= 1;
    if (VAR_2 >= 4)
        return VAR_0;
    while (VAR_2--)
        VAR_4 = (VAR_4 << 8) | FUNC_0(VAR_1);
    return VAR_4;
}
