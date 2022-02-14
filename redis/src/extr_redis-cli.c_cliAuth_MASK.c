
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; } ;
typedef TYPE_1__ redisReply ;
struct TYPE_6__ {int * auth; int * user; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ,char*,int *,...) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(void) {
    redisReply *VAR_6;
    if (VAR_3.auth == ((void*)0)) return VAR_1;

    if (VAR_3.user == ((void*)0))
        VAR_6 = FUNC_2(VAR_4,"AUTH %s",VAR_3.auth);
    else
        VAR_6 = FUNC_2(VAR_4,"AUTH %s %s",VAR_3.user,VAR_3.auth);
    if (VAR_6 != ((void*)0)) {
        if (VAR_6->type == VAR_2)
            FUNC_0(VAR_5,"Warning: AUTH failed\n");
        FUNC_1(VAR_6);
        return VAR_1;
    }
    return VAR_0;
}
