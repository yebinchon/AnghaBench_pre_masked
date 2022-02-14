
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_ucs4 ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_4(char *VAR_1, char *VAR_2, int VAR_3)
{
    if (VAR_3*sizeof(npy_ucs4) > VAR_0) {
        VAR_2 = FUNC_2(VAR_3*sizeof(npy_ucs4));
        if (!VAR_2) {
            FUNC_0();
            return ((void*)0);
        }
    }
    FUNC_3(VAR_2, VAR_1, VAR_3*sizeof(npy_ucs4));
    FUNC_1((npy_ucs4 *)VAR_2, VAR_3);
    return VAR_2;
}
