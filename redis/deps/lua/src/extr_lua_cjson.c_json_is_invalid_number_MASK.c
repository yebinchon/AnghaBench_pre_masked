
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ptr; } ;
typedef TYPE_1__ json_parse_t ;


 int FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_1(json_parse_t *VAR_0)
{
    const char *VAR_1 = VAR_0->ptr;


    if (*VAR_1 == '+')
        return 1;


    if (*VAR_1 == '-')
        VAR_1++;


    if (*VAR_1 == '0') {
        int VAR_2 = *(VAR_1 + 1);

        if ((VAR_2 | 0x20) == 'x' ||
            ('0' <= VAR_2 && VAR_2 <= '9'))
            return 1;

        return 0;
    } else if (*VAR_1 <= '9') {
        return 0;
    }


    if (!FUNC_0(VAR_1, "inf", 3))
        return 1;
    if (!FUNC_0(VAR_1, "nan", 3))
        return 1;



    return 0;
}
