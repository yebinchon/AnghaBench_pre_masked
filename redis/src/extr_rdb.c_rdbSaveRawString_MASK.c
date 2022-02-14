
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ssize_t ;
typedef int rio ;
struct TYPE_2__ {scalar_t__ rdb_compression; } ;


 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *,unsigned char*,size_t) ;
 int FUNC_2 (char*,size_t,unsigned char*) ;
 int FUNC_3 (int *,unsigned char*,size_t) ;
 TYPE_1__ VAR_0 ;

ssize_t FUNC_4(rio *VAR_1, unsigned char *VAR_2, size_t VAR_3) {
    int VAR_4;
    ssize_t VAR_5, VAR_6 = 0;


    if (VAR_3 <= 11) {
        unsigned char VAR_7[5];
        if ((VAR_4 = FUNC_2((char*)VAR_2,VAR_3,VAR_7)) > 0) {
            if (FUNC_3(VAR_1,VAR_7,VAR_4) == -1) return -1;
            return VAR_4;
        }
    }



    if (VAR_0.rdb_compression && VAR_3 > 20) {
        VAR_5 = FUNC_1(VAR_1,VAR_2,VAR_3);
        if (VAR_5 == -1) return -1;
        if (VAR_5 > 0) return VAR_5;

    }


    if ((VAR_5 = FUNC_0(VAR_1,VAR_3)) == -1) return -1;
    VAR_6 += VAR_5;
    if (VAR_3 > 0) {
        if (FUNC_3(VAR_1,VAR_2,VAR_3) == -1) return -1;
        VAR_6 += VAR_3;
    }
    return VAR_6;
}
