
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; unsigned char* start; } ;
typedef TYPE_1__ bstr ;



__attribute__((used)) static bool FUNC_0(bstr VAR_0)
{
    for (int VAR_1 = 0; VAR_1 < VAR_0.len; VAR_1++) {
        unsigned char VAR_2 = VAR_0.start[VAR_1];
        if (VAR_2 < 32 && VAR_2 != '\n' && VAR_2 != '\r' && VAR_2 != '\t')
            return 0;
    }
    return 1;
}
