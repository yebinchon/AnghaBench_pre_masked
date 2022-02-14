
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; TYPE_1__* lastcmd; } ;
typedef TYPE_2__ client ;
struct TYPE_5__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,char const*,int) ;
 int FUNC_1 (int ,char*,char*,char*,char const*,char*) ;

void FUNC_2(client *VAR_4, const char *VAR_5, size_t VAR_6) {


    if (!VAR_6 || VAR_5[0] != '-') FUNC_0(VAR_4,"-ERR ",5);
    FUNC_0(VAR_4,VAR_5,VAR_6);
    FUNC_0(VAR_4,"\r\n",2);
    if (VAR_4->flags & (VAR_0|VAR_2) && !(VAR_4->flags & VAR_1)) {
        char* VAR_7 = VAR_4->flags & VAR_0? "master": "replica";
        char* VAR_8 = VAR_4->flags & VAR_0? "replica": "master";
        char *VAR_9 = VAR_4->lastcmd ? VAR_4->lastcmd->name : "<unknown>";
        FUNC_1(VAR_3,"== CRITICAL == This %s is sending an error "
                             "to its %s: '%s' after processing the command "
                             "'%s'", VAR_8, VAR_7, VAR_5, VAR_9);
    }
}
