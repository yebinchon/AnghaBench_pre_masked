
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int stream_t ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

int64_t FUNC_2(stream_t *VAR_2)
{
    uint64_t VAR_3;
    int VAR_4;


    uint64_t VAR_5 = FUNC_1(VAR_2);
    VAR_3 = FUNC_0(VAR_2);
    if (VAR_3 == VAR_1)
        return VAR_0;
    VAR_4 = FUNC_1(VAR_2) - VAR_5;

    return VAR_3 - ((1LL << ((7 * VAR_4) - 1)) - 1);
}
