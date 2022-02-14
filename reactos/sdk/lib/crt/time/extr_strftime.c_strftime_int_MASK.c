
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 () ;
 size_t FUNC_1 (char*,size_t,char*,int,int) ;

__attribute__((used)) static inline BOOL FUNC_2(char *VAR_4, size_t *VAR_5, size_t VAR_6,
        int VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
    size_t VAR_11;

    if(VAR_7<VAR_9 || VAR_7>VAR_10) {
        *VAR_4 = 0;
        *FUNC_0() = VAR_0;
        return VAR_2;
    }

    VAR_11 = FUNC_1(VAR_4+*VAR_5, VAR_6-*VAR_5, "%0*d", VAR_8, VAR_7);
    if(VAR_11 == -1) {
        *VAR_4 = 0;
        *FUNC_0() = VAR_1;
        return VAR_2;
    }

    *VAR_5 += VAR_11;
    return VAR_3;
}
