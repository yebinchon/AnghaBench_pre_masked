
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int robj ;
typedef int rio ;
struct TYPE_2__ {int maxmemory_policy; scalar_t__ rdb_key_save_delay; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,long long) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *,int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_9 (scalar_t__) ;

int FUNC_10(rio *VAR_6, robj *VAR_7, robj *VAR_8, long long VAR_9) {
    int VAR_10 = VAR_5.maxmemory_policy & VAR_1;
    int VAR_11 = VAR_5.maxmemory_policy & VAR_0;


    if (VAR_9 != -1) {
        if (FUNC_7(VAR_6,VAR_2) == -1) return -1;
        if (FUNC_3(VAR_6,VAR_9) == -1) return -1;
    }


    if (VAR_10) {
        uint64_t VAR_12 = FUNC_1(VAR_8);
        VAR_12 /= 1000;
        if (FUNC_7(VAR_6,VAR_4) == -1) return -1;
        if (FUNC_2(VAR_6,VAR_12) == -1) return -1;
    }


    if (VAR_11) {
        uint8_t VAR_13[1];
        VAR_13[0] = FUNC_0(VAR_8);




        if (FUNC_7(VAR_6,VAR_3) == -1) return -1;
        if (FUNC_8(VAR_6,VAR_13,1) == -1) return -1;
    }


    if (FUNC_5(VAR_6,VAR_8) == -1) return -1;
    if (FUNC_6(VAR_6,VAR_7) == -1) return -1;
    if (FUNC_4(VAR_6,VAR_8,VAR_7) == -1) return -1;


    if (VAR_5.rdb_key_save_delay)
        FUNC_9(VAR_5.rdb_key_save_delay);

    return 1;
}
