
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; char* str; } ;
typedef TYPE_1__ redisReply ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,char const*,char const*) ;
 TYPE_1__* FUNC_4 (int ,char*,char const*,char const*) ;
 int VAR_2 ;

void FUNC_5(const char* VAR_3, const char* VAR_4) {
    FUNC_3("sending REPLCONF %s %s\n", VAR_3, VAR_4);
    redisReply *VAR_5 = FUNC_4(VAR_1, "REPLCONF %s %s", VAR_3, VAR_4);


    if(VAR_5 == ((void*)0)) {
        FUNC_1(VAR_2, "\nI/O error\n");
        FUNC_0(1);
    } else if(VAR_5->type == VAR_0) {
        FUNC_1(VAR_2, "REPLCONF %s error: %s\n", VAR_3, VAR_5->str);

    }
    FUNC_2(VAR_5);
}
