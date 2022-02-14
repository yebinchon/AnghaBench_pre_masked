
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rewriteConfigState {int dummy; } ;
typedef int sds ;
struct TYPE_2__ {scalar_t__ notify_keyspace_events; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct rewriteConfigState*,char*,int ,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 TYPE_1__ VAR_0 ;

void FUNC_7(struct rewriteConfigState *VAR_1) {
    int VAR_2 = VAR_0.notify_keyspace_events != 0;
    char *VAR_3 = "notify-keyspace-events";
    sds VAR_4, VAR_5;

    VAR_5 = FUNC_0(VAR_0.notify_keyspace_events);
    VAR_4 = FUNC_6(VAR_3);
    VAR_4 = FUNC_2(VAR_4, " ", 1);
    VAR_4 = FUNC_3(VAR_4, VAR_5, FUNC_5(VAR_5));
    FUNC_4(VAR_5);
    FUNC_1(VAR_1,VAR_3,VAR_4,VAR_2);
}
