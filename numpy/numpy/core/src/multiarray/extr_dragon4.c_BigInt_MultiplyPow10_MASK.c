
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_uint32 ;
typedef int BigInt ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int * VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_5(BigInt *VAR_2, npy_uint32 VAR_3, BigInt *VAR_4)
{

    BigInt *VAR_5, *VAR_6;
    npy_uint32 VAR_7;
    npy_uint32 VAR_8 = 0;


    FUNC_3(VAR_3 < 8192);





    VAR_7 = VAR_3 & FUNC_4(3);
    if (VAR_7 != 0) {
        FUNC_2(VAR_4, VAR_2, VAR_1[VAR_7]);
        VAR_5 = VAR_4;
        VAR_6 = VAR_2;
    }
    else {
        VAR_5 = VAR_2;
        VAR_6 = VAR_4;
    }


    VAR_3 >>= 3;


    while (VAR_3 != 0) {

        if (VAR_3 & 1) {
            BigInt *VAR_9;


            FUNC_1(VAR_6, VAR_5, &VAR_0[VAR_8]);


            VAR_9 = VAR_5;
            VAR_5 = VAR_6;
            VAR_6 = VAR_9;
        }


        ++VAR_8;
        VAR_3 >>= 1;
    }


    if (VAR_5 != VAR_2){
        FUNC_0(VAR_2, VAR_5);
    }
}
