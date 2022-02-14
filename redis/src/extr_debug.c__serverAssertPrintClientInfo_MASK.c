
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int conninfo ;
struct TYPE_4__ {int argc; TYPE_2__** argv; int conn; scalar_t__ flags; } ;
typedef TYPE_1__ client ;
typedef int buf ;
struct TYPE_5__ {int type; int encoding; int refcount; scalar_t__ ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*,int,char*,int,int) ;

void FUNC_5(const client *VAR_3) {
    int VAR_4;
    char VAR_5[VAR_0];

    FUNC_0();
    FUNC_3(VAR_1,"=== ASSERTION FAILED CLIENT CONTEXT ===");
    FUNC_3(VAR_1,"client->flags = %llu", (unsigned long long) VAR_3->flags);
    FUNC_3(VAR_1,"client->conn = %s", FUNC_1(VAR_3->conn, VAR_5, sizeof(VAR_5)));
    FUNC_3(VAR_1,"client->argc = %d", VAR_3->argc);
    for (VAR_4=0; VAR_4 < VAR_3->argc; VAR_4++) {
        char VAR_6[128];
        char *VAR_7;

        if (VAR_3->argv[VAR_4]->type == VAR_2 && FUNC_2(VAR_3->argv[VAR_4])) {
            VAR_7 = (char*) VAR_3->argv[VAR_4]->ptr;
        } else {
            FUNC_4(VAR_6,sizeof(VAR_6),"Object type: %u, encoding: %u",
                VAR_3->argv[VAR_4]->type, VAR_3->argv[VAR_4]->encoding);
            VAR_7 = VAR_6;
        }
        FUNC_3(VAR_1,"client->argv[%d] = \"%s\" (refcount: %d)",
            VAR_4, VAR_7, VAR_3->argv[VAR_4]->refcount);
    }
}
