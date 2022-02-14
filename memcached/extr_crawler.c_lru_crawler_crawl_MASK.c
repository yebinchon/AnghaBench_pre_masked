
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef enum crawler_run_type { ____Placeholder_crawler_run_type } crawler_run_type ;
typedef enum crawler_result_type { ____Placeholder_crawler_result_type } crawler_result_type ;


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
 int FUNC_0 (int*,unsigned int,int const,int *,void*,int const) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,char*,char**) ;

enum crawler_result_type FUNC_6(char *VAR_13, const enum crawler_run_type VAR_14,
        void *VAR_15, const int VAR_16, unsigned int VAR_17) {
    char *VAR_18 = ((void*)0);
    uint32_t VAR_19 = 0;
    int VAR_20 = 0;
    uint8_t VAR_21[VAR_8];


    FUNC_1(VAR_21, 0, sizeof(uint8_t) * VAR_8);
    if (FUNC_4(VAR_13, "all") == 0) {
        for (VAR_19 = 0; VAR_19 < VAR_8; VAR_19++) {
            VAR_21[VAR_19] = 1;
        }
    } else {
        for (char *VAR_22 = FUNC_5(VAR_13, ",", &VAR_18);
             VAR_22 != ((void*)0);
             VAR_22 = FUNC_5(((void*)0), ",", &VAR_18)) {

            if (!FUNC_3(VAR_22, &VAR_19) || VAR_19 < VAR_9
                    || VAR_19 >= VAR_7) {
                FUNC_2(&VAR_12);
                return VAR_1;
            }
            VAR_21[VAR_19 | VAR_10] = 1;
            VAR_21[VAR_19 | VAR_6] = 1;
            VAR_21[VAR_19 | VAR_11] = 1;
            VAR_21[VAR_19 | VAR_0] = 1;
        }
    }

    VAR_20 = FUNC_0(VAR_21, VAR_17, VAR_14, ((void*)0), VAR_15, VAR_16);
    if (VAR_20 == -1) {
        return VAR_5;
    } else if (VAR_20 == -2) {
        return VAR_2;
    } else if (VAR_20) {
        return VAR_4;
    } else {
        return VAR_3;
    }
}
