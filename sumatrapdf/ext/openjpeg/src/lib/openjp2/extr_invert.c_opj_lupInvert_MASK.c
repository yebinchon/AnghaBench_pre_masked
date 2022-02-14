
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t OPJ_UINT32 ;
typedef double OPJ_FLOAT32 ;


 int FUNC_0 (double*,int ,size_t) ;
 int FUNC_1 (double*,double*,double*,size_t*,size_t,double*) ;

__attribute__((used)) static void FUNC_2(OPJ_FLOAT32 * VAR_0,
                          OPJ_FLOAT32 * VAR_1,
                          OPJ_UINT32 VAR_2,
                          OPJ_UINT32 * VAR_3,
                          OPJ_FLOAT32 * VAR_4,
                          OPJ_FLOAT32 * VAR_5,
                          OPJ_FLOAT32 * VAR_6)
{
    OPJ_UINT32 VAR_7, VAR_8;
    OPJ_FLOAT32 * VAR_9;
    OPJ_FLOAT32 * VAR_10 = VAR_1;
    OPJ_UINT32 VAR_11 = VAR_2 * (OPJ_UINT32)sizeof(OPJ_FLOAT32);

    for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
        VAR_9 = VAR_10++;
        FUNC_0(VAR_4, 0, VAR_11);
        VAR_4[VAR_7] = 1.0;
        FUNC_1(VAR_5, VAR_0, VAR_4, VAR_3, VAR_2,
                     VAR_6);

        for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
            *(VAR_9) = VAR_5[VAR_8];
            VAR_9 += VAR_2;
        }
    }
}
