
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sds ;
struct TYPE_10__ {int ptr; } ;
typedef TYPE_1__ robj ;
typedef int buf ;
struct TYPE_11__ {int notify_keyspace_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (int,char*,TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int) ;
 TYPE_2__ VAR_3 ;
 int FUNC_9 (char*) ;

void FUNC_10(int VAR_4, char *VAR_5, robj *VAR_6, int VAR_7) {
    sds VAR_8;
    robj *VAR_9, *VAR_10;
    int VAR_11 = -1;
    char VAR_12[24];





     FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7);


    if (!(VAR_3.notify_keyspace_events & VAR_4)) return;

    VAR_10 = FUNC_1(VAR_5,FUNC_9(VAR_5));


    if (VAR_3.notify_keyspace_events & VAR_1) {
        VAR_8 = FUNC_8("__keyspace@",11);
        VAR_11 = FUNC_3(VAR_12,sizeof(VAR_12),VAR_7);
        VAR_8 = FUNC_6(VAR_8, VAR_12, VAR_11);
        VAR_8 = FUNC_6(VAR_8, "__:", 3);
        VAR_8 = FUNC_7(VAR_8, VAR_6->ptr);
        VAR_9 = FUNC_0(VAR_2, VAR_8);
        FUNC_5(VAR_9, VAR_10);
        FUNC_2(VAR_9);
    }


    if (VAR_3.notify_keyspace_events & VAR_0) {
        VAR_8 = FUNC_8("__keyevent@",11);
        if (VAR_11 == -1) VAR_11 = FUNC_3(VAR_12,sizeof(VAR_12),VAR_7);
        VAR_8 = FUNC_6(VAR_8, VAR_12, VAR_11);
        VAR_8 = FUNC_6(VAR_8, "__:", 3);
        VAR_8 = FUNC_7(VAR_8, VAR_10->ptr);
        VAR_9 = FUNC_0(VAR_2, VAR_8);
        FUNC_5(VAR_9, VAR_6);
        FUNC_2(VAR_9);
    }
    FUNC_2(VAR_10);
}
