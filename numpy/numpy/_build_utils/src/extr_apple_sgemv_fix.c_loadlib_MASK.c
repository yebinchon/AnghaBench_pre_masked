
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fortran_sgemv_t ;
typedef int errormsg ;
typedef int cblas_sgemv_t ;
typedef int cblas_sgemm_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_1 () ;
 int * FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (void*,int ,int) ;
 int FUNC_5 (char*,int,char*,char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int * VAR_7 ;

__attribute__((used)) __attribute__((constructor))
static void FUNC_8()

{
    char VAR_8[1024];
    int VAR_9, VAR_10;
    FUNC_4((void*)VAR_8, 0, sizeof(VAR_8));

    VAR_9 = FUNC_1();

    VAR_10 = FUNC_7();


    VAR_0 = VAR_9 && VAR_10;

    VAR_7 = FUNC_2(VAR_3, VAR_2 | VAR_1);
    if (!VAR_7) {
        VAR_7 = ((void*)0);
        FUNC_5(VAR_8, sizeof(VAR_8),
                 "Failed to open vecLib from location '%s'.", VAR_3);
        FUNC_0(VAR_8);
    }

    VAR_6 = (fortran_sgemv_t*) FUNC_3(VAR_7, "sgemv_");
    if (!VAR_6) {
        FUNC_6();
        FUNC_0("Failed to resolve symbol 'sgemv_'.");
    }

    VAR_5 = (cblas_sgemv_t*) FUNC_3(VAR_7, "cblas_sgemv");
    if (!VAR_5) {
        FUNC_6();
        FUNC_0("Failed to resolve symbol 'cblas_sgemv'.");
    }

    VAR_4 = (cblas_sgemm_t*) FUNC_3(VAR_7, "cblas_sgemm");
    if (!VAR_4) {
        FUNC_6();
        FUNC_0("Failed to resolve symbol 'cblas_sgemm'.");
    }
}
