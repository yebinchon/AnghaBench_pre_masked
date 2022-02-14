
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ host; scalar_t__ persistent_id; scalar_t__ auth; scalar_t__ err; scalar_t__ pipeline_cmd; scalar_t__ prefix; } ;
typedef TYPE_1__ RedisSock ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(RedisSock *VAR_0)
{
    if (VAR_0->prefix) {
        FUNC_1(VAR_0->prefix);
    }
    if (VAR_0->pipeline_cmd) {
        FUNC_1(VAR_0->pipeline_cmd);
    }
    if (VAR_0->err) {
        FUNC_1(VAR_0->err);
    }
    if (VAR_0->auth) {
        FUNC_1(VAR_0->auth);
    }
    if (VAR_0->persistent_id) {
        FUNC_1(VAR_0->persistent_id);
    }
    if (VAR_0->host) {
        FUNC_1(VAR_0->host);
    }
    FUNC_0(VAR_0);
}
