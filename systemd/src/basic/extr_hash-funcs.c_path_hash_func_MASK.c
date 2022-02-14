
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const siphash ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int,char const*) ;
 size_t FUNC_2 (char const*,char*) ;
 size_t FUNC_3 (char const*,char*) ;

void FUNC_4(const char *VAR_0, struct siphash *VAR_1) {
        size_t VAR_2;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);






        VAR_2 = FUNC_3(VAR_0, "/");
        if (VAR_2 > 0) {
                FUNC_1(VAR_0, 1, VAR_1);
                VAR_0 += VAR_2;
        }

        for (;;) {

                VAR_2 = FUNC_2(VAR_0, "/");
                if (VAR_2 == 0)
                        break;


                FUNC_1(VAR_0, VAR_2, VAR_1);
                VAR_0 += VAR_2;


                VAR_2 = FUNC_3(VAR_0, "/");
                if (VAR_0[VAR_2] == 0)
                        break;


                FUNC_1(VAR_0, 1, VAR_1);
                VAR_0 += VAR_2;
        }
}
