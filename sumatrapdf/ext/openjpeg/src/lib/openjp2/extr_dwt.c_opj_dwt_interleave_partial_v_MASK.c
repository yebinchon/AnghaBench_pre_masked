
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int opj_sparse_array_int32_t ;
typedef int OPJ_UINT32 ;
typedef int OPJ_INT32 ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int,int,int,int,int*,int,int,int ) ;

__attribute__((used)) static void FUNC_3(OPJ_INT32 *VAR_1,
        OPJ_INT32 VAR_2,
        opj_sparse_array_int32_t* VAR_3,
        OPJ_UINT32 VAR_4,
        OPJ_UINT32 VAR_5,
        OPJ_UINT32 VAR_6,
        OPJ_UINT32 VAR_7,
        OPJ_UINT32 VAR_8,
        OPJ_UINT32 VAR_9,
        OPJ_UINT32 VAR_10)
{
    OPJ_BOOL VAR_11;
    VAR_11 = FUNC_2(VAR_3,
                                       VAR_4, VAR_7,
                                       VAR_4 + VAR_5, VAR_8,
                                       VAR_1 + VAR_2 * 4 + 2 * 4 * VAR_7,
                                       1, 2 * 4, VAR_0);
    FUNC_1(VAR_11);
    VAR_11 = FUNC_2(VAR_3,
                                      VAR_4, VAR_6 + VAR_9,
                                      VAR_4 + VAR_5, VAR_6 + VAR_10,
                                      VAR_1 + (1 - VAR_2) * 4 + 2 * 4 * VAR_9,
                                      1, 2 * 4, VAR_0);
    FUNC_1(VAR_11);
    FUNC_0(VAR_11);
}
