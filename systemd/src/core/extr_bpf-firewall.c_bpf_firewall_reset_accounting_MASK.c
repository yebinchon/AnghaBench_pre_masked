
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *,int *) ;

int FUNC_1(int VAR_3) {
        uint64_t VAR_4, VAR_5 = 0;
        int VAR_6;

        if (VAR_3 < 0)
                return -VAR_0;

        VAR_4 = VAR_2;
        VAR_6 = FUNC_0(VAR_3, &VAR_4, &VAR_5);
        if (VAR_6 < 0)
                return VAR_6;

        VAR_4 = VAR_1;
        return FUNC_0(VAR_3, &VAR_4, &VAR_5);
}
