
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ invalid_log_entries; int * conf; int * log_store; } ;
typedef TYPE_1__ CTLOG_STORE_LOAD_CTX ;
typedef int CTLOG_STORE ;


 int FUNC_0 (char*,char,int,int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int *,char*) ;
 scalar_t__ FUNC_4 (int *,char const*,int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 () ;
 int VAR_2 ;

int FUNC_8(CTLOG_STORE *VAR_3, const char *VAR_4)
{
    int VAR_5 = 0;
    char *VAR_6;
    CTLOG_STORE_LOAD_CTX* VAR_7 = FUNC_7();

    if (VAR_7 == ((void*)0))
        return 0;
    VAR_7->log_store = VAR_3;
    VAR_7->conf = FUNC_5(((void*)0));
    if (VAR_7->conf == ((void*)0))
        goto end;

    if (FUNC_4(VAR_7->conf, VAR_4, ((void*)0)) <= 0) {
        FUNC_1(VAR_0, VAR_1);
        goto end;
    }

    VAR_6 = FUNC_3(VAR_7->conf, ((void*)0), "enabled_logs");
    if (VAR_6 == ((void*)0)) {
        FUNC_1(VAR_0, VAR_1);
        goto end;
    }

    if (!FUNC_0(VAR_6, ',', 1, VAR_2, VAR_7) ||
        VAR_7->invalid_log_entries > 0) {
        FUNC_1(VAR_0, VAR_1);
        goto end;
    }

    VAR_5 = 1;
end:
    FUNC_2(VAR_7->conf);
    FUNC_6(VAR_7);
    return VAR_5;
}
