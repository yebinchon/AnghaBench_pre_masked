
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_bool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;

__attribute__((used)) static npy_bool
FUNC_1(void *VAR_2, void *VAR_3)
{
    int VAR_4 = FUNC_0(VAR_3);
    char *VAR_5 = VAR_2;
    while (VAR_4--) {
        if (*VAR_5++ != 0) {
            return VAR_1;
        }
    }
    return VAR_0;
}
