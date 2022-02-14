
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ptr; int tmp; } ;
typedef TYPE_1__ json_parse_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(json_parse_t *VAR_0)
{
    char VAR_1[4];
    int VAR_2;
    int VAR_3;
    int VAR_4;
    int VAR_5 = 6;


    VAR_2 = FUNC_1(VAR_0->ptr + 2);
    if (VAR_2 < 0)
        return -1;







    if ((VAR_2 & 0xF800) == 0xD800) {

        if (VAR_2 & 0x400)
            return -1;


        if (*(VAR_0->ptr + VAR_5) != '\\' ||
            *(VAR_0->ptr + VAR_5 + 1) != 'u') {
            return -1;
        }


        VAR_3 = FUNC_1(VAR_0->ptr + 2 + VAR_5);
        if (VAR_3 < 0)
            return -1;


        if ((VAR_3 & 0xFC00) != 0xDC00)
            return -1;


        VAR_2 = (VAR_2 & 0x3FF) << 10;
        VAR_3 &= 0x3FF;
        VAR_2 = (VAR_2 | VAR_3) + 0x10000;
        VAR_5 = 12;
    }


    VAR_4 = FUNC_0(VAR_1, VAR_2);
    if (!VAR_4)
        return -1;


    FUNC_2(VAR_0->tmp, VAR_1, VAR_4);
    VAR_0->ptr += VAR_5;

    return 0;
}
