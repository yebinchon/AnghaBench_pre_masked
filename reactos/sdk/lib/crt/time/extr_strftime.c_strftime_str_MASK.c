
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 () ;
 int FUNC_1 (char*,char*,size_t) ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static inline BOOL FUNC_3(char *VAR_3, size_t *VAR_4, size_t VAR_5, char *VAR_6)
{
    size_t VAR_7 = FUNC_2(VAR_6);
    if(VAR_7 > VAR_5-*VAR_4) {
        *VAR_3 = 0;
        *FUNC_0() = VAR_0;
        return VAR_1;
    }

    FUNC_1(VAR_3+*VAR_4, VAR_6, VAR_7);
    *VAR_4 += VAR_7;
    return VAR_2;
}
