
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int process_t ;
typedef enum process_result { ____Placeholder_process_result } process_result ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char const**,int *) ;
 char* FUNC_1 () ;
 int FUNC_2 (char const**,char const* const*,size_t) ;
 int FUNC_3 (int,char const**) ;

process_t
FUNC_4(const char *VAR_2, const char *const VAR_3[], size_t VAR_4) {
    const char *VAR_5[VAR_4 + 4];
    int VAR_6;
    process_t VAR_7;
    VAR_5[0] = FUNC_1();
    if (VAR_2) {
        VAR_5[1] = "-s";
        VAR_5[2] = VAR_2;
        VAR_6 = 3;
    } else {
        VAR_6 = 1;
    }

    FUNC_2(&VAR_5[VAR_6], VAR_3, VAR_4 * sizeof(const char *));
    VAR_5[VAR_4 + VAR_6] = ((void*)0);
    enum process_result VAR_8 = FUNC_0(VAR_5[0], VAR_5, &VAR_7);
    if (VAR_8 != VAR_1) {
        FUNC_3(VAR_8, VAR_5);
        return VAR_0;
    }
    return VAR_7;
}
