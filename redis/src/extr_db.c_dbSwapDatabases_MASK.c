
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int avg_ttl; int expires; int dict; } ;
typedef TYPE_1__ redisDb ;
struct TYPE_5__ {long dbnum; TYPE_1__* db; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__ VAR_2 ;

int FUNC_1(long VAR_3, long VAR_4) {
    if (VAR_3 < 0 || VAR_3 >= VAR_2.dbnum ||
        VAR_4 < 0 || VAR_4 >= VAR_2.dbnum) return VAR_0;
    if (VAR_3 == VAR_4) return VAR_1;
    redisDb VAR_5 = VAR_2.db[VAR_3];
    redisDb *VAR_6 = &VAR_2.db[VAR_3], *VAR_7 = &VAR_2.db[VAR_4];




    VAR_6->dict = VAR_7->dict;
    VAR_6->expires = VAR_7->expires;
    VAR_6->avg_ttl = VAR_7->avg_ttl;

    VAR_7->dict = VAR_5.dict;
    VAR_7->expires = VAR_5.expires;
    VAR_7->avg_ttl = VAR_5.avg_ttl;
    FUNC_0(VAR_6);
    FUNC_0(VAR_7);
    return VAR_1;
}
