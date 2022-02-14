
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,int ) ;
 size_t FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*,char*) ;

int FUNC_5(const char *VAR_0, const char *VAR_1) {
        int VAR_2;

        FUNC_1(VAR_0);
        FUNC_1(VAR_1);




        VAR_2 = (VAR_0[0] == '/') - (VAR_1[0] == '/');
        if (VAR_2 != 0)
                return VAR_2;

        for (;;) {
                size_t VAR_3, VAR_4;

                VAR_0 += FUNC_4(VAR_0, "/");
                VAR_1 += FUNC_4(VAR_1, "/");

                if (*VAR_0 == 0 && *VAR_1 == 0)
                        return 0;


                if (*VAR_0 == 0)
                        return -1;
                if (*VAR_1 == 0)
                        return 1;

                VAR_3 = FUNC_3(VAR_0, "/");
                VAR_4 = FUNC_3(VAR_1, "/");


                VAR_2 = FUNC_2(VAR_0, VAR_1, FUNC_0(VAR_3, VAR_4));
                if (VAR_2 != 0)
                        return (VAR_2 > 0) - (VAR_2 < 0);


                VAR_2 = (VAR_3 > VAR_4) - (VAR_3 < VAR_4);
                if (VAR_2 != 0)
                        return VAR_2;

                VAR_0 += VAR_3;
                VAR_1 += VAR_4;
        }
}
