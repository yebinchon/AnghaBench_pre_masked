
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1 (const uint8_t *VAR_2, size_t VAR_3)
{

    if (!VAR_2 || !VAR_3)
        return VAR_0;


    if (VAR_2 [0] <= 0x7F)
        return 1;



    if (VAR_2 [0] < 0xC2)
        return VAR_1;


    if (VAR_2 [0] <= 0xDF) {
        if (VAR_3 < 2)
            return VAR_0;

        else if ((VAR_2 [1] & 0xC0) != 0x80)
            return VAR_1;
        else
            return 2;
    }


    if (VAR_2 [0] <= 0xEF) {

        if (VAR_3 < 2)
            return VAR_0;

        else if (VAR_2 [0] == 0xE0 && (VAR_2 [1] < 0xA0 || VAR_2 [1] == 0x80))
            return VAR_1;

        else if (VAR_2 [0] == 0xED && VAR_2 [1] >= 0xA0)
            return VAR_1;

        else if (VAR_3 < 3)
            return VAR_0;

        else if ((VAR_2 [1] & 0xC0) != 0x80 || (VAR_2 [2] & 0xC0) != 0x80)
            return VAR_1;
        else
            return 3;
    }




    if (VAR_2 [0] <= 0xF4) {

        if (VAR_3 < 2)
            return VAR_0;

        else if (VAR_2 [0] == 0xF0 && VAR_2 [1] < 0x90)
            return VAR_1;

        else if (VAR_2 [0] == 0xF4 && VAR_2 [1] >= 0x90)
            return VAR_1;

        else if (VAR_3 < 4)
            return VAR_0;

        else if ((VAR_2 [1] & 0xC0) != 0x80 ||
            (VAR_2 [2] & 0xC0) != 0x80 ||
            (VAR_2 [3] & 0xC0) != 0x80)
            return VAR_1;
        else
            return 4;
    }



    if (VAR_2 [0] >= 0xF5)
        return VAR_1;


    FUNC_0 (0);
}
