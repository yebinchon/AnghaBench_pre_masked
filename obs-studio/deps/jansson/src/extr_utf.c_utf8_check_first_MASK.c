
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
size_t FUNC_0(char VAR_0)
{
    unsigned char VAR_1 = (unsigned char)VAR_0;

    if(VAR_1 < 0x80)
        return 1;

    if(0x80 <= VAR_1 && VAR_1 <= 0xBF) {


        return 0;
    }
    else if(VAR_1 == 0xC0 || VAR_1 == 0xC1) {

        return 0;
    }
    else if(0xC2 <= VAR_1 && VAR_1 <= 0xDF) {

        return 2;
    }

    else if(0xE0 <= VAR_1 && VAR_1 <= 0xEF) {

        return 3;
    }
    else if(0xF0 <= VAR_1 && VAR_1 <= 0xF4) {

        return 4;
    }
    else {


        return 0;
    }
}
