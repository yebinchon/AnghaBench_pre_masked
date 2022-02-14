
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stream; } ;
typedef TYPE_1__ RedisSock ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 size_t FUNC_4 (int ,char*,int) ;
 int FUNC_5 (TYPE_1__*,int ) ;

char *
FUNC_6(RedisSock *VAR_0, int VAR_1)
{
    int VAR_2 = 0, VAR_3;
    char *VAR_4;
    size_t VAR_5;

    if (-1 == VAR_1 || -1 == FUNC_5(VAR_0, 0)) {
        return ((void*)0);
    }

    VAR_3 = VAR_1 + 2;

    VAR_4 = FUNC_2(VAR_3);


    while (VAR_2 < VAR_3) {
        VAR_5 = FUNC_4(VAR_0->stream, VAR_4 + VAR_2, VAR_3 - VAR_2);
        if (VAR_5 == 0 && FUNC_3(VAR_0->stream)) break;
        VAR_2 += VAR_5;
    }


    if (VAR_2 < VAR_3) {

        FUNC_0("socket error on read socket", 0);
        FUNC_1(VAR_4);
        return ((void*)0);
    }


    VAR_4[VAR_1] = '\0';

    return VAR_4;
}
