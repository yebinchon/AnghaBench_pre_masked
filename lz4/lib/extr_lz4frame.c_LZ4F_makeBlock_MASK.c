
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* compressFunc_t ) (void*,char const*,char*,int,int,int,int const*) ;
typedef int U32 ;
typedef scalar_t__ LZ4F_blockChecksum_t ;
typedef int LZ4F_CDict ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int * const,int const) ;
 int FUNC_1 (int * const,int,int ) ;
 int FUNC_2 (int * const,void const*,size_t) ;

__attribute__((used)) static size_t FUNC_3(void* VAR_3,
                       const void* VAR_4, size_t VAR_5,
                             compressFunc_t VAR_6, void* VAR_7, int VAR_8,
                       const LZ4F_CDict* VAR_9,
                             LZ4F_blockChecksum_t VAR_10)
{
    BYTE* const VAR_11 = (BYTE*)VAR_3;
    U32 VAR_12 = (U32)VAR_6(VAR_7, (const char*)VAR_4, (char*)(VAR_11+VAR_1),
                                      (int)(VAR_5), (int)(VAR_5-1),
                                      VAR_8, VAR_9);
    if (VAR_12 == 0) {
        VAR_12 = (U32)VAR_5;
        FUNC_0(VAR_11, VAR_12 | VAR_2);
        FUNC_2(VAR_11+VAR_1, VAR_4, VAR_5);
    } else {
        FUNC_0(VAR_11, VAR_12);
    }
    if (VAR_10) {
        U32 const VAR_13 = FUNC_1(VAR_11+VAR_1, VAR_12, 0);
        FUNC_0(VAR_11+VAR_1+VAR_12, VAR_13);
    }
    return VAR_1 + VAR_12 + ((U32)VAR_10)*VAR_0;
}
