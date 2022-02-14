
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int stream_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int64_t FUNC_2(stream_t *VAR_2)
{
    uint64_t VAR_3 = 0;
    uint64_t VAR_4;
    int VAR_5;

    VAR_4 = FUNC_0(VAR_2);
    if (VAR_4 == VAR_1 || VAR_4 > 8)
        return VAR_0;
    if (!VAR_4)
        return 0;

    VAR_4--;
    VAR_5 = FUNC_1(VAR_2);
    if (VAR_5 & 0x80)
        VAR_3 = -1;
    VAR_3 = (VAR_3 << 8) | VAR_5;
    while (VAR_4--)
        VAR_3 = (VAR_3 << 8) | FUNC_1(VAR_2);

    return (int64_t)VAR_3;
}
