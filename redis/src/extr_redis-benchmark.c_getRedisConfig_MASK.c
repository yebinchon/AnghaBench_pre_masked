
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_15__ {scalar_t__ type; char const* str; int elements; struct TYPE_15__** element; } ;
typedef TYPE_1__ redisReply ;
struct TYPE_16__ {char* errstr; scalar_t__ err; } ;
typedef TYPE_2__ redisContext ;
struct TYPE_17__ {void* appendonly; void* save; } ;
typedef TYPE_3__ redisConfig ;
struct TYPE_14__ {char* auth; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_13__ VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,char*,char*) ;
 TYPE_2__* FUNC_3 (char const*,int) ;
 TYPE_2__* FUNC_4 (char const*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,void**) ;
 void* FUNC_7 (char*) ;
 int VAR_4 ;
 TYPE_3__* FUNC_8 (int) ;
 int FUNC_9 (TYPE_3__*) ;

__attribute__((used)) static redisConfig *FUNC_10(const char *VAR_5, int VAR_6,
                                   const char *VAR_7)
{
    redisConfig *VAR_8 = FUNC_8(sizeof(*VAR_8));
    if (!VAR_8) return ((void*)0);
    redisContext *VAR_9 = ((void*)0);
    redisReply *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    if (VAR_7 == ((void*)0))
        VAR_9 = FUNC_3(VAR_5, VAR_6);
    else
        VAR_9 = FUNC_4(VAR_7);
    if (VAR_9 == ((void*)0) || VAR_9->err) {
        FUNC_0(VAR_4,"Could not connect to Redis at ");
        char *VAR_12 = (VAR_9 != ((void*)0) ? VAR_9->errstr : "");
        if (VAR_7 == ((void*)0)) FUNC_0(VAR_4,"%s:%d: %s\n",VAR_5,VAR_6,VAR_12);
        else FUNC_0(VAR_4,"%s: %s\n",VAR_7,VAR_12);
        goto fail;
    }

    if(VAR_3.auth) {
        void *VAR_13 = ((void*)0);
        FUNC_2(VAR_9, "AUTH %s", VAR_3.auth);
        if (VAR_0 != FUNC_6(VAR_9, &VAR_13)) goto fail;
        if (VAR_10) FUNC_1(VAR_10);
        VAR_10 = ((redisReply *) VAR_13);
        if (VAR_10->type == VAR_2) {
            FUNC_0(VAR_4, "ERROR: %s\n", VAR_10->str);
            goto fail;
        }
    }

    FUNC_2(VAR_9, "CONFIG GET %s", "save");
    FUNC_2(VAR_9, "CONFIG GET %s", "appendonly");
    int VAR_14 = 0;
    void *VAR_15 = ((void*)0);
    for (; VAR_14 < 2; VAR_14++) {
        int VAR_16 = FUNC_6(VAR_9, &VAR_15);
        if (VAR_10) FUNC_1(VAR_10);
        VAR_10 = ((redisReply *) VAR_15);
        if (VAR_16 != VAR_0 || !VAR_15) goto fail;
        if (VAR_10->type == VAR_2) {
            FUNC_0(VAR_4, "ERROR: %s\n", VAR_10->str);
            goto fail;
        }
        if (VAR_10->type != VAR_1 || VAR_10->elements < 2) goto fail;
        VAR_11 = VAR_10->element[1];
        char *VAR_17 = VAR_11->str;
        if (!VAR_17) VAR_17 = "";
        switch (VAR_14) {
        case 0: VAR_8->save = FUNC_7(VAR_17); break;
        case 1: VAR_8->appendonly = FUNC_7(VAR_17); break;
        }
    }
    FUNC_1(VAR_10);
    FUNC_5(VAR_9);
    return VAR_8;
fail:
    FUNC_0(VAR_4, "ERROR: failed to fetch CONFIG from ");
    if (VAR_7 == ((void*)0)) FUNC_0(VAR_4, "%s:%d\n", VAR_5, VAR_6);
    else FUNC_0(VAR_4, "%s\n", VAR_7);
    FUNC_1(VAR_10);
    FUNC_5(VAR_9);
    FUNC_9(VAR_8);
    return ((void*)0);
}
