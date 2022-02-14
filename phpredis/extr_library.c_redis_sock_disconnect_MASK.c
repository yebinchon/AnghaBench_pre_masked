
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int list; int nb_active; } ;
struct TYPE_6__ {scalar_t__ watching; int status; int mode; int * stream; scalar_t__ persistent; } ;
typedef TYPE_1__ RedisSock ;
typedef TYPE_2__ ConnectionPool ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int **) ;

int
FUNC_5(RedisSock *VAR_4, int VAR_5)
{
    if (VAR_4 == ((void*)0)) {
        return VAR_1;
    } else if (VAR_4->stream) {
        if (VAR_4->persistent) {
            ConnectionPool *VAR_6 = ((void*)0);
            if (FUNC_0("redis.pconnect.pooling_enabled")) {
                VAR_6 = FUNC_3(VAR_4);
            }
            if (VAR_5) {
                FUNC_2(VAR_4->stream);
                if (VAR_6) VAR_6->nb_active--;
            } else if (VAR_6) {
                FUNC_4(&VAR_6->list, &VAR_4->stream);
            }
        } else {
            FUNC_1(VAR_4->stream);
        }
        VAR_4->stream = ((void*)0);
    }
    VAR_4->mode = VAR_0;
    VAR_4->status = VAR_2;
    VAR_4->watching = 0;

    return VAR_3;
}
