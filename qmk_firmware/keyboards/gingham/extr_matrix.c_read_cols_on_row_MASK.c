
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t matrix_row_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int,int,size_t*,int,int) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5(matrix_row_t VAR_4[], uint8_t VAR_5)
{

    matrix_row_t VAR_6 = VAR_4[VAR_5];


    VAR_4[VAR_5] = 0;


    FUNC_2(VAR_5);
    FUNC_4(30);


    for(uint8_t VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
        uint8_t VAR_8;

        switch (VAR_7) {
            case 0 :
                FUNC_0((VAR_1 << 1), 0x09, &VAR_8, 1, 20);
                VAR_8 = VAR_8 & 0x01;
                break;
            case 12 :
                FUNC_0((VAR_1 << 1), 0x09, &VAR_8, 1, 20);
                VAR_8 = VAR_8 & (1 << 2);
                break;
            case 13 :
                FUNC_0((VAR_1 << 1), 0x09, &VAR_8, 1, 20);
                VAR_8 = VAR_8 & (1 << 1);
                break;
            default :
                VAR_8 = FUNC_1(VAR_3[VAR_7]);
        }


        VAR_4[VAR_5] |= VAR_8 ? 0 : (VAR_2 << VAR_7);
    }


    FUNC_3(VAR_5);

    return (VAR_6 != VAR_4[VAR_5]);
}
