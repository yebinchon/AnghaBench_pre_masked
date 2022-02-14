
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,int) ;
 int* FUNC_1 (int*,size_t) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static inline int FUNC_3(int VAR_2) {
    static int8_t *VAR_3 = ((void*)0);
    static size_t VAR_4 = 0;

    if(VAR_2 < 0) return 1;

    size_t VAR_5 = (size_t)VAR_2 + 1;

    if(VAR_4 < VAR_5) {
        VAR_3 = FUNC_1(VAR_3, VAR_5 * sizeof(int8_t));

        size_t VAR_6;
        for(VAR_6 = VAR_4; VAR_6 < VAR_5 ; VAR_6++)
            VAR_3[VAR_6] = -1;

        VAR_4 = VAR_5;
    }

    if(VAR_3[VAR_2] == -1) {
        char VAR_7[VAR_0 + 1];
        FUNC_2(VAR_7, VAR_0, "performance metrics for disks with major %d", VAR_2);
        VAR_3[VAR_2] = (char)FUNC_0(VAR_1, VAR_7, 1);
    }

    return (int)VAR_3[VAR_2];
}
