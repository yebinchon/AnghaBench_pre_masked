
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LZ4F_decompressOptions_t ;
typedef int LZ4F_dctx ;


 int FUNC_0 (int *,void*,size_t*,void const*,size_t*,int const*) ;
 int FUNC_1 (int *,void*,size_t*,void const*,size_t*,void const*,size_t,int const*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(LZ4F_dctx* VAR_0, void* VAR_1, size_t VAR_2,
                       const void* VAR_3, size_t VAR_4,
                       const void* VAR_5, size_t VAR_6,
                       const LZ4F_decompressOptions_t* VAR_7)
{
    FUNC_2(VAR_0);
    if (VAR_6 == 0)
        FUNC_0(VAR_0, VAR_1, &VAR_2, VAR_3, &VAR_4, VAR_7);
    else
        FUNC_1(VAR_0, VAR_1, &VAR_2, VAR_3, &VAR_4,
                                  VAR_5, VAR_6, VAR_7);
}
