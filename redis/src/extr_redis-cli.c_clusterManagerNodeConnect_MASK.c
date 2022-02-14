
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int redisReply ;
struct TYPE_9__ {char* ip; int port; TYPE_2__* context; } ;
typedef TYPE_1__ clusterManagerNode ;
struct TYPE_11__ {scalar_t__ auth; int * user; scalar_t__ tls; } ;
struct TYPE_10__ {char* errstr; int fd; scalar_t__ err; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char const**) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 TYPE_5__ VAR_2 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_2__*,char*,int *,...) ;
 TYPE_2__* FUNC_6 (char*,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(clusterManagerNode *VAR_4) {
    if (VAR_4->context) FUNC_7(VAR_4->context);
    VAR_4->context = FUNC_6(VAR_4->ip, VAR_4->port);
    if (!VAR_4->context->err && VAR_2.tls) {
        const char *VAR_5 = ((void*)0);
        if (FUNC_1(VAR_4->context, &VAR_5) == VAR_1 && VAR_5) {
            FUNC_3(VAR_3,"TLS Error: %s\n", VAR_5);
            FUNC_7(VAR_4->context);
            VAR_4->context = ((void*)0);
            return 0;
        }
    }
    if (VAR_4->context->err) {
        FUNC_3(VAR_3,"Could not connect to Redis at ");
        FUNC_3(VAR_3,"%s:%d: %s\n", VAR_4->ip, VAR_4->port,
                VAR_4->context->errstr);
        FUNC_7(VAR_4->context);
        VAR_4->context = ((void*)0);
        return 0;
    }




    FUNC_0(((void*)0), VAR_4->context->fd, VAR_0);
    if (VAR_2.auth) {
        redisReply *VAR_6;
        if (VAR_2.user == ((void*)0))
            VAR_6 = FUNC_5(VAR_4->context,"AUTH %s", VAR_2.auth);
        else
            VAR_6 = FUNC_5(VAR_4->context,"AUTH %s %s",
                                 VAR_2.user,VAR_2.auth);
        int VAR_7 = FUNC_2(VAR_4, VAR_6, ((void*)0));
        if (VAR_6 != ((void*)0)) FUNC_4(VAR_6);
        if (!VAR_7) return 0;
    }
    return 1;
}
