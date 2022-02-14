
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {char const* name; void* handle; scalar_t__ blocked_clients; } ;
struct TYPE_10__ {TYPE_2__* module; } ;
typedef TYPE_1__ RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char const*,TYPE_2__*) ;
 int FUNC_1 (void*) ;
 char const* FUNC_2 () ;
 void* FUNC_3 (char const*,int) ;
 scalar_t__ FUNC_4 (void*,char*) ;
 int FUNC_5 (int ,int ,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int VAR_10 ;
 int FUNC_11 (int ,char*,char const*,...) ;

int FUNC_12(const char *VAR_11, void **VAR_12, int VAR_13) {
    int (*VAR_14)(void *, void **, int);
    void *VAR_15;
    RedisModuleCtx VAR_16 = VAR_4;

    VAR_15 = FUNC_3(VAR_11,VAR_9|VAR_8);
    if (VAR_15 == ((void*)0)) {
        FUNC_11(VAR_3, "Module %s failed to load: %s", VAR_11, FUNC_2());
        return VAR_0;
    }
    VAR_14 = (int (*)(void *, void **, int))(unsigned long) FUNC_4(VAR_15,"RedisModule_OnLoad");
    if (VAR_14 == ((void*)0)) {
        FUNC_1(VAR_15);
        FUNC_11(VAR_3,
            "Module %s does not export RedisModule_OnLoad() "
            "symbol. Module not loaded.",VAR_11);
        return VAR_0;
    }
    if (VAR_14((void*)&VAR_16,VAR_12,VAR_13) == VAR_5) {
        if (VAR_16.module) {
            FUNC_8(VAR_16.module);
            FUNC_9(VAR_16.module);
            FUNC_10(VAR_16.module);
            FUNC_7(VAR_16.module);
        }
        FUNC_1(VAR_15);
        FUNC_11(VAR_3,
            "Module %s initialization failed. Module not loaded",VAR_11);
        return VAR_0;
    }


    FUNC_0(VAR_10,VAR_16.module->name,VAR_16.module);
    VAR_16.module->blocked_clients = 0;
    VAR_16.module->handle = VAR_15;
    FUNC_11(VAR_2,"Module '%s' loaded from %s",VAR_16.module->name,VAR_11);

    FUNC_5(VAR_6,
                          VAR_7,
                          VAR_16.module);

    FUNC_6(&VAR_16);
    return VAR_1;
}
