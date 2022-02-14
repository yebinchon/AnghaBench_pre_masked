
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int ,int) ;
 int FUNC_2 (int,char*,size_t) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline int FUNC_4(const char *VAR_1, char *VAR_2, size_t VAR_3) {
    if(FUNC_3(!VAR_3)) return 3;

    int VAR_4 = FUNC_1(VAR_1, VAR_0, 0666);
    if(FUNC_3(VAR_4 == -1)) {
        VAR_2[0] = '\0';
        return 1;
    }

    ssize_t VAR_5 = FUNC_2(VAR_4, VAR_2, VAR_3);
    if(FUNC_3(VAR_5 == -1)) {
        VAR_2[0] = '\0';
        FUNC_0(VAR_4);
        return 2;
    }
    VAR_2[VAR_5] = '\0';

    FUNC_0(VAR_4);
    return 0;
}
