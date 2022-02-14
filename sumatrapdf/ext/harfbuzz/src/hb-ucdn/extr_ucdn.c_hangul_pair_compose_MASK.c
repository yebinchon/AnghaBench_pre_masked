
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int FUNC_0(uint32_t *VAR_9, uint32_t VAR_10, uint32_t VAR_11)
{
    if (VAR_10 >= VAR_3 && VAR_10 < (VAR_3 + VAR_4) && VAR_11 >= VAR_5 && VAR_11 < (VAR_5 + VAR_6)) {

        *VAR_9 = VAR_10 + (VAR_11 - VAR_5);
        return 3;
    } else if (VAR_10 >= VAR_0 && VAR_10 < (VAR_0 + VAR_1) && VAR_11 >= VAR_7 && VAR_11 < (VAR_7 + VAR_8)) {

        int VAR_12 = VAR_10 - VAR_0;
        int VAR_13 = VAR_11 - VAR_7;
        *VAR_9 = VAR_3 + VAR_12 * VAR_2 + VAR_13 * VAR_6;
        return 2;
    } else {
        return 0;
    }
}
