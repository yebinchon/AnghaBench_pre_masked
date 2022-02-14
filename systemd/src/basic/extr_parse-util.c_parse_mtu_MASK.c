
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (char const*,int,size_t*) ;

int FUNC_1(int VAR_5, const char *VAR_6, uint32_t *VAR_7) {
        uint64_t VAR_8;
        size_t VAR_9;
        int VAR_10;

        VAR_10 = FUNC_0(VAR_6, 1024, &VAR_8);
        if (VAR_10 < 0)
                return VAR_10;

        if (VAR_8 > VAR_4)
                return -VAR_1;

        if (VAR_5 == VAR_0)
                VAR_9 = VAR_3;
        else
                VAR_9 = VAR_2;

        if (VAR_8 < VAR_9)
                return -VAR_1;

        *VAR_7 = (uint32_t) VAR_8;
        return 0;
}
