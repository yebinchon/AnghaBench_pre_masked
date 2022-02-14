
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPJ_UINT8 ;
typedef int OPJ_UINT32 ;
typedef int OPJ_BOOL ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int,int,int *) ;
 int VAR_2 ;

__attribute__((used)) static OPJ_BOOL FUNC_3(FILE* VAR_3, OPJ_UINT8* VAR_4, OPJ_UINT32 VAR_5,
                                  OPJ_UINT32 VAR_6, OPJ_UINT32 VAR_7)
{
    FUNC_0(VAR_6);

    if (FUNC_2(VAR_4, sizeof(OPJ_UINT8), VAR_5 * VAR_7, VAR_3) != (VAR_5 * VAR_7)) {
        FUNC_1(VAR_2,
                "\nError: fread return a number of element different from the expected.\n");
        return VAR_0;
    }
    return VAR_1;
}
