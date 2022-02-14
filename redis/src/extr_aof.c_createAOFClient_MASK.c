
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client {int resp; void* reply; int * user; int * peerid; void* watched_keys; scalar_t__ obuf_soft_limit_reached_time; scalar_t__ reply_bytes; int replstate; int btype; scalar_t__ flags; scalar_t__ bufpos; int * argv; scalar_t__ argc; scalar_t__ querybuf_peak; int querybuf; int * name; int * conn; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct client*) ;
 void* FUNC_1 () ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct client*,int ) ;
 struct client* FUNC_6 (int) ;

struct client *FUNC_7(void) {
    struct client *VAR_5 = FUNC_6(sizeof(*VAR_5));

    FUNC_5(VAR_5,0);
    VAR_5->id = VAR_1;
    VAR_5->conn = ((void*)0);
    VAR_5->name = ((void*)0);
    VAR_5->querybuf = FUNC_4();
    VAR_5->querybuf_peak = 0;
    VAR_5->argc = 0;
    VAR_5->argv = ((void*)0);
    VAR_5->bufpos = 0;
    VAR_5->flags = 0;
    VAR_5->btype = VAR_0;


    VAR_5->replstate = VAR_2;
    VAR_5->reply = FUNC_1();
    VAR_5->reply_bytes = 0;
    VAR_5->obuf_soft_limit_reached_time = 0;
    VAR_5->watched_keys = FUNC_1();
    VAR_5->peerid = ((void*)0);
    VAR_5->resp = 2;
    VAR_5->user = ((void*)0);
    FUNC_3(VAR_5->reply,VAR_4);
    FUNC_2(VAR_5->reply,VAR_3);
    FUNC_0(VAR_5);
    return VAR_5;
}
