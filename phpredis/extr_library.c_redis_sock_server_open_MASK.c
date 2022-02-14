
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; } ;
typedef TYPE_1__ RedisSock ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

int
FUNC_1(RedisSock *VAR_2)
{
    if (VAR_2) {
        switch (VAR_2->status) {
        case 128:
            return VAR_0;
        case 129:
            return FUNC_0(VAR_2);
        default:
            return VAR_1;
        }
    }
    return VAR_0;
}
