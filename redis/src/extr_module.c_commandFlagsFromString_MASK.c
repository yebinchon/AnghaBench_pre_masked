
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* sds ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char**,int) ;
 char** FUNC_1 (char*,int ,char*,int,int*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

int FUNC_4(char *VAR_13) {
    int VAR_14, VAR_15;
    int VAR_16 = 0;
    sds *VAR_17 = FUNC_1(VAR_13,FUNC_3(VAR_13)," ",1,&VAR_14);
    for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
        char *VAR_18 = VAR_17[VAR_15];
        if (!FUNC_2(VAR_18,"write")) VAR_16 |= VAR_12;
        else if (!FUNC_2(VAR_18,"readonly")) VAR_16 |= VAR_9;
        else if (!FUNC_2(VAR_18,"admin")) VAR_16 |= VAR_0;
        else if (!FUNC_2(VAR_18,"deny-oom")) VAR_16 |= VAR_1;
        else if (!FUNC_2(VAR_18,"deny-script")) VAR_16 |= VAR_6;
        else if (!FUNC_2(VAR_18,"allow-loading")) VAR_16 |= VAR_3;
        else if (!FUNC_2(VAR_18,"pubsub")) VAR_16 |= VAR_7;
        else if (!FUNC_2(VAR_18,"random")) VAR_16 |= VAR_8;
        else if (!FUNC_2(VAR_18,"allow-stale")) VAR_16 |= VAR_11;
        else if (!FUNC_2(VAR_18,"no-monitor")) VAR_16 |= VAR_10;
        else if (!FUNC_2(VAR_18,"fast")) VAR_16 |= VAR_2;
        else if (!FUNC_2(VAR_18,"getkeys-api")) VAR_16 |= VAR_4;
        else if (!FUNC_2(VAR_18,"no-cluster")) VAR_16 |= VAR_5;
        else break;
    }
    FUNC_0(VAR_17,VAR_14);
    if (VAR_15 != VAR_14) return -1;
    return VAR_16;
}
