
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

int FUNC_4 (int VAR_3, int VAR_4) {
    int VAR_5 = FUNC_0(VAR_4);
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    int VAR_11, VAR_12, VAR_13;




    if( VAR_5 == VAR_1 )
        return VAR_4;

    VAR_6 = FUNC_0(VAR_3);
    if( VAR_5 == VAR_2 )
        return VAR_3;
    if( VAR_6 == VAR_2 )
        return VAR_4;






    VAR_11 = VAR_2 - VAR_5;
    VAR_12 = (VAR_2 - VAR_6) * VAR_5 / VAR_0;
    VAR_13 = VAR_11 + VAR_12;




    VAR_7 = VAR_5 * VAR_6 / VAR_0;

    VAR_8 = (FUNC_3(VAR_4) * VAR_11
           + FUNC_3(VAR_3) * VAR_12) / VAR_13;
    VAR_9 = (FUNC_2(VAR_4) * VAR_11
           + FUNC_2(VAR_3) * VAR_12) / VAR_13;
    VAR_10 = (FUNC_1(VAR_4) * VAR_11
           + FUNC_1(VAR_3) * VAR_12) / VAR_13;




    return ((VAR_7 << 24) + (VAR_8 << 16) + (VAR_9 << 8) + VAR_10);

}
