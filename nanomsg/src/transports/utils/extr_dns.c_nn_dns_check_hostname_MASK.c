
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int FUNC_0 (const char *VAR_1, size_t VAR_2)
{
    int VAR_3;



    if (VAR_2 < 1 || VAR_2 > 255)
        return -VAR_0;


    if (*VAR_1 == '-')
        return -VAR_0;

    VAR_3 = 0;
    while (1) {


        if (VAR_2 == 0) {

            return 0;
        }


        if (*VAR_1 == '.') {


            if (VAR_3 == 0)
                return -VAR_0;


            VAR_3 = 0;
            ++VAR_1;
            --VAR_2;
            continue;
        }


        if ((*VAR_1 >= 'a' && *VAR_1 <= 'z') ||
              (*VAR_1 >= 'A' && *VAR_1 <= 'Z') ||
              (*VAR_1 >= '0' && *VAR_1 <= '9') ||
              *VAR_1 == '-') {
            ++VAR_1;
            --VAR_2;
            ++VAR_3;


            if (VAR_3 > 63)
                return -VAR_0;

            continue;
        }


        return -VAR_0;
    }
}
