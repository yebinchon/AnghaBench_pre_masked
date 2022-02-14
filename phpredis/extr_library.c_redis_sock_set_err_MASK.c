
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * err; } ;
typedef TYPE_1__ RedisSock ;


 int * FUNC_0 (char const*,int,int ) ;
 int FUNC_1 (int *) ;

void
FUNC_2(RedisSock *VAR_0, const char *VAR_1, int VAR_2)
{

    if (VAR_0->err != ((void*)0)) {
        FUNC_1(VAR_0->err);
        VAR_0->err = ((void*)0);
    }

    if (VAR_1 != ((void*)0) && VAR_2 > 0) {

        VAR_0->err = FUNC_0(VAR_1, VAR_2, 0);
    }
}
