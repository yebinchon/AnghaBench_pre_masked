
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static void FUNC_1(uint8_t* VAR_3) {
    for (int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        for (int VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
            VAR_3[VAR_4 * VAR_1 + VAR_5] = FUNC_0(VAR_0, VAR_5, VAR_4);
        }
    }
}
