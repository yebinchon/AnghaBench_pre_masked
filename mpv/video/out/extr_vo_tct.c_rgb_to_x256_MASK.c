
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 () ;
 int FUNC_1 (int,int,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(uint8_t VAR_0, uint8_t VAR_1, uint8_t VAR_2)
{


    int VAR_3 = (VAR_0 < 48 ? 0 : VAR_0 < 115 ? 1 : (VAR_0 - 35) / 40), VAR_4 = (VAR_1 < 48 ? 0 : VAR_1 < 115 ? 1 : (VAR_1 - 35) / 40), VAR_5 = (VAR_2 < 48 ? 0 : VAR_2 < 115 ? 1 : (VAR_2 - 35) / 40);



    int VAR_6 = (VAR_0 + VAR_1 + VAR_2) / 3;
    int VAR_7 = VAR_6 > 238 ? 23 : (VAR_6 - 3) / 10;


    static const int VAR_8[6] = {0, 0x5f, 0x87, 0xaf, 0xd7, 0xff};
    int VAR_9 = VAR_8[VAR_3], VAR_10 = VAR_8[VAR_4], VAR_11 = VAR_8[VAR_5];
    int VAR_12 = 8 + 10 * VAR_7;



    int VAR_13 = ((VAR_9-VAR_0)*(VAR_9-VAR_0) + (VAR_10-VAR_1)*(VAR_10-VAR_1) + (VAR_11-VAR_2)*(VAR_11-VAR_2));
    int VAR_14 = ((VAR_12-VAR_0)*(VAR_12-VAR_0) + (VAR_12-VAR_1)*(VAR_12-VAR_1) + (VAR_12-VAR_2)*(VAR_12-VAR_2));
    return VAR_13 <= VAR_14 ? 16 + (36 * VAR_3 + 6 * VAR_4 + VAR_5) : 232 + VAR_7;
}
