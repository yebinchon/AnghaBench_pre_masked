
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 size_t VAR_0 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;

__attribute__((used)) static
bool FUNC_3(uint8_t VAR_1[], uint8_t VAR_2) {

    uint8_t VAR_3 = VAR_1[VAR_2];


    VAR_1[VAR_2] = 0;

    FUNC_2(VAR_2);


    for(uint8_t VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {

        FUNC_1(VAR_4) ;



        VAR_1[VAR_2] |= FUNC_0(VAR_4) ;
    }

    bool VAR_5 = VAR_3 != VAR_1[VAR_2] ;
    return VAR_5 ;
}
