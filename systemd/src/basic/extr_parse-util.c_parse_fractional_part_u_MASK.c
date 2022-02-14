
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ) ;

int FUNC_1(const char **VAR_2, size_t VAR_3, unsigned *VAR_4) {
        size_t VAR_5;
        unsigned VAR_6 = 0;
        const char *VAR_7;

        VAR_7 = *VAR_2;


        for (VAR_5=0; VAR_5 < VAR_3; VAR_5++,VAR_7++) {
                if (*VAR_7 < '0' || *VAR_7 > '9') {
                        if (VAR_5 == 0)
                                return -VAR_1;


                        for (; VAR_5 < VAR_3; VAR_5++)
                                VAR_6 *= 10;

                        break;
                }

                VAR_6 *= 10;
                VAR_6 += *VAR_7 - '0';
        }


        if (*VAR_7 >= '5' && *VAR_7 <= '9')
                VAR_6++;

        VAR_7 += FUNC_0(VAR_7, VAR_0);

        *VAR_2 = VAR_7;
        *VAR_4 = VAR_6;

        return 0;
}
