
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(uint32_t VAR_7, uint32_t *VAR_8, uint32_t *VAR_9)
{
    int VAR_10 = VAR_7 - VAR_2;

    if (VAR_10 < 0 || VAR_10 >= VAR_3)
        return 0;

    if (VAR_10 % VAR_5) {

        *VAR_8 = VAR_2 + (VAR_10 / VAR_5) * VAR_5;
        *VAR_9 = VAR_4 + (VAR_10 % VAR_5);
        return 3;
    } else {

        *VAR_8 = VAR_0 + (VAR_10 / VAR_1);
        *VAR_9 = VAR_6 + (VAR_10 % VAR_1) / VAR_5;
        return 2;
    }
}
