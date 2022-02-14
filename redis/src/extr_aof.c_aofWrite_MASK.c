
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,char const*,size_t) ;

ssize_t FUNC_1(int VAR_2, const char *VAR_3, size_t VAR_4) {
    ssize_t VAR_5 = 0, VAR_6 = 0;

    while(VAR_4) {
        VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);

        if (VAR_5 < 0) {
            if (VAR_1 == VAR_0) continue;
            return VAR_6 ? VAR_6 : -1;
        }

        VAR_4 -= VAR_5;
        VAR_3 += VAR_5;
        VAR_6 += VAR_5;
    }

    return VAR_6;
}
