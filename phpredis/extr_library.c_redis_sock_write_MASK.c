
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stream; } ;
typedef TYPE_1__ RedisSock ;


 size_t FUNC_0 (int ,char*,size_t) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;

int
FUNC_2(RedisSock *VAR_0, char *VAR_1, size_t VAR_2)
{
    if (FUNC_1(VAR_0, 0) == 0 &&
        FUNC_0(VAR_0->stream, VAR_1, VAR_2) == VAR_2
    ) {
        return VAR_2;
    }
    return -1;
}
