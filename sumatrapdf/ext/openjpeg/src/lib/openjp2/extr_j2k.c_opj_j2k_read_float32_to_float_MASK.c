
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ OPJ_UINT32 ;
typedef int OPJ_FLOAT32 ;
typedef int OPJ_BYTE ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(const void * VAR_0,
        void * VAR_1, OPJ_UINT32 VAR_2)
{
    OPJ_BYTE * VAR_3 = (OPJ_BYTE *) VAR_0;
    OPJ_FLOAT32 * VAR_4 = (OPJ_FLOAT32 *) VAR_1;
    OPJ_UINT32 VAR_5;
    OPJ_FLOAT32 VAR_6;

    for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
        FUNC_0(VAR_3, &VAR_6);

        VAR_3 += sizeof(OPJ_FLOAT32);

        *(VAR_4++) = VAR_6;
    }
}
