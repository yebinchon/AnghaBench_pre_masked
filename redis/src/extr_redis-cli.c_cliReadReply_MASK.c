
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char* sds ;
struct TYPE_10__ {scalar_t__ type; char* str; } ;
typedef TYPE_1__ redisReply ;
struct TYPE_12__ {scalar_t__ last_cmd_type; char* hostip; int hostport; int cluster_reissue_command; scalar_t__ output; scalar_t__ interactive; scalar_t__ cluster_mode; scalar_t__ shutdown; } ;
struct TYPE_11__ {scalar_t__ err; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* FUNC_0 (char*) ;
 char* FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_6__ VAR_10 ;
 TYPE_2__* VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*,int ,int,int ) ;
 int FUNC_9 (char*,int,char*,int) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,void**) ;
 char* FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (char*) ;
 int VAR_13 ;
 char* FUNC_16 (char*,char) ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 (char*,char*,int) ;
 char* FUNC_19 (char*,char) ;

__attribute__((used)) static int FUNC_20(int VAR_14) {
    void *VAR_15;
    redisReply *VAR_16;
    sds VAR_17 = ((void*)0);
    int VAR_18 = 1;

    if (FUNC_11(VAR_11,&VAR_15) != VAR_8) {
        if (VAR_10.shutdown) {
            FUNC_10(VAR_11);
            VAR_11 = ((void*)0);
            return VAR_8;
        }
        if (VAR_10.interactive) {

            if (VAR_11->err == VAR_7 &&
                (VAR_12 == VAR_0 || VAR_12 == VAR_1))
                return VAR_5;
            if (VAR_11->err == VAR_6)
                return VAR_5;
        }
        FUNC_4();
        FUNC_6(1);
        return VAR_5;
    }

    VAR_16 = (redisReply*)VAR_15;

    VAR_10.last_cmd_type = VAR_16->type;



    if (VAR_10.cluster_mode && VAR_16->type == VAR_9 &&
        (!FUNC_18(VAR_16->str,"MOVED",5) || !FUNC_17(VAR_16->str,"ASK")))
    {
        char *VAR_19 = VAR_16->str, *VAR_20;
        int VAR_21;

        VAR_18 = 0;





        VAR_20 = FUNC_16(VAR_19,' ');
        VAR_19 = FUNC_16(VAR_20+1,' ');
        *VAR_19 = '\0';
        VAR_21 = FUNC_0(VAR_20+1);
        VAR_20 = FUNC_19(VAR_19+1,':');
        *VAR_20 = '\0';
        FUNC_13(VAR_10.hostip);
        VAR_10.hostip = FUNC_15(VAR_19+1);
        VAR_10.hostport = FUNC_0(VAR_20+1);
        if (VAR_10.interactive)
            FUNC_9("-> Redirected to slot [%d] located at %s:%d\n",
                VAR_21, VAR_10.hostip, VAR_10.hostport);
        VAR_10.cluster_reissue_command = 1;
        FUNC_5();
    }

    if (VAR_18) {
        if (VAR_14) {
            VAR_17 = FUNC_2(VAR_16);
        } else {
            if (VAR_10.output == VAR_3) {
                VAR_17 = FUNC_2(VAR_16);
                VAR_17 = FUNC_12(VAR_17,"\n");
            } else if (VAR_10.output == VAR_4) {
                VAR_17 = FUNC_3(VAR_16,"");
            } else if (VAR_10.output == VAR_2) {
                VAR_17 = FUNC_1(VAR_16);
                VAR_17 = FUNC_12(VAR_17,"\n");
            }
        }
        FUNC_8(VAR_17,FUNC_14(VAR_17),1,VAR_13);
        FUNC_13(VAR_17);
    }
    FUNC_7(VAR_16);
    return VAR_8;
}
