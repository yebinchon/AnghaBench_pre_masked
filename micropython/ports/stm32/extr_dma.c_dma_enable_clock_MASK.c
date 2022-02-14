
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int mp_uint_t ;
typedef int dma_id_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static void FUNC_6(dma_id_t VAR_7) {


    mp_uint_t VAR_8 = FUNC_2();
    uint32_t VAR_9 = VAR_5;
    VAR_5 |= (1 << VAR_7);
    FUNC_3(VAR_8);

    if (VAR_7 < VAR_4) {
        if (((VAR_9 & VAR_0) == 0) && !FUNC_0()) {
            FUNC_4();




            for (int VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
                VAR_6[VAR_10] = VAR_2;
            }
        }
    }
}
