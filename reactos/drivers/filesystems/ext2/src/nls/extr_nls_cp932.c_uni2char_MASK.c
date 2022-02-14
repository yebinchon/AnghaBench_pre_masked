
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char** VAR_2 ;
 unsigned char** VAR_3 ;

__attribute__((used)) static int FUNC_0(const wchar_t VAR_4,
                    unsigned char *VAR_5, int VAR_6)
{
    unsigned char *VAR_7;
    unsigned char VAR_8 = VAR_4&0xFF;
    unsigned char VAR_9 = (VAR_4>>8)&0xFF;

    if (VAR_6 <= 0)
        return -VAR_1;

    if (VAR_9 == 0xFF && 0x61 <= VAR_8 && VAR_8 <= 0x9F) {
        VAR_5[0] = VAR_8 + 0x40;
        return 1;
    }
    VAR_7 = VAR_2[VAR_9];
    if (VAR_7) {
        if (VAR_6 < 2)
            return -VAR_1;

        VAR_5[0] = VAR_7[VAR_8*2];
        VAR_5[1] = VAR_7[VAR_8*2+1];
        if (VAR_5[0] == 0x00 && VAR_5[1] == 0x00)
            return -VAR_0;
        return 2;
    } else if (VAR_9 == 0) {
        if (VAR_8 <= 0x7F) {
            VAR_5[0] = VAR_8;
            return 1;
        } else if (0xA0 <= VAR_8) {
            VAR_5[0] = VAR_3[VAR_8 - 0xA0][0];
            VAR_5[1] = VAR_3[VAR_8 - 0xA0][1];
            if (VAR_5[0] && VAR_5[1])
                return 2;
        }
        return -VAR_0;
    }
    else
        return -VAR_0;
}
