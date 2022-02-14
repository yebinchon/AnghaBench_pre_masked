
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * sd_bus_message ;
typedef int JsonVariant ;


 int FUNC_0 (int **,size_t,size_t) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int **,int **) ;
 int FUNC_5 (int **,int **,size_t) ;
 int FUNC_6 (int **,size_t) ;
 int FUNC_7 () ;
 int FUNC_8 (int **,int) ;

__attribute__((used)) static int FUNC_9(sd_bus_message *VAR_0, JsonVariant **VAR_1) {
        size_t VAR_2 = 0, VAR_3 = 0;
        JsonVariant **VAR_4 = ((void*)0);
        int VAR_5;

        FUNC_1(VAR_0);
        FUNC_1(VAR_1);

        for (;;) {
                VAR_5 = FUNC_8(VAR_0, 0);
                if (VAR_5 < 0) {
                        FUNC_2(VAR_5);
                        goto finish;
                }
                if (VAR_5 > 0)
                        break;

                if (!FUNC_0(VAR_4, VAR_3, VAR_2 + 1)) {
                        VAR_5 = FUNC_7();
                        goto finish;
                }

                VAR_5 = FUNC_4(VAR_0, VAR_4 + VAR_2);
                if (VAR_5 < 0)
                        goto finish;

                VAR_2++;
        }

        VAR_5 = FUNC_5(VAR_1, VAR_4, VAR_2);

finish:
        FUNC_6(VAR_4, VAR_2);
        FUNC_3(VAR_4);

        return VAR_5;
}
