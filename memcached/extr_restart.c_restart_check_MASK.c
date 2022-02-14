
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ (* ccb ) (int ,TYPE_2__*,int ) ;int data; int tag; } ;
typedef TYPE_1__ restart_data_cb ;
struct TYPE_6__ {char* line; int done; TYPE_1__* cb; int * f; } ;
typedef TYPE_2__ restart_cb_ctx ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 char* FUNC_1 (int,size_t) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char const*,size_t) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int *,int *) ;
 int VAR_1 ;
 size_t FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (int ,TYPE_2__*,int ) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(const char *VAR_2) {

    size_t VAR_3 = FUNC_8(VAR_2);
    const char *VAR_4 = ".meta";
    char *VAR_5 = FUNC_1(1, VAR_3 + FUNC_8(VAR_4) + 1);
    FUNC_6(VAR_5, VAR_2, VAR_3);
    FUNC_6(VAR_5+VAR_3, VAR_4, FUNC_8(VAR_4));

    FILE *VAR_6 = FUNC_3(VAR_5, "r");
    if (VAR_6 == ((void*)0)) {
        FUNC_4(VAR_1, "[restart] no metadata save file, starting with a clean cache\n");
        return -1;
    }

    restart_cb_ctx VAR_7;

    VAR_7.f = VAR_6;
    VAR_7.cb = ((void*)0);
    VAR_7.line = ((void*)0);
    VAR_7.done = 0;
    if (FUNC_7(&VAR_7, ((void*)0), ((void*)0)) != VAR_0) {


        FUNC_4(VAR_1, "[restart] corrupt metadata file\n");

        FUNC_0();
    }
    if (VAR_7.cb == ((void*)0)) {
        FUNC_4(VAR_1, "[restart] Failed to read a tag from metadata file\n");
        FUNC_0();
    }


    bool VAR_8 = 0;
    while (!VAR_7.done) {
        restart_data_cb *VAR_9 = VAR_7.cb;
        if (VAR_9->ccb(VAR_9->tag, &VAR_7, VAR_9->data) != 0) {
            VAR_8 = 1;
            break;
        }
    }

    if (VAR_7.line)
        FUNC_5(VAR_7.line);

    FUNC_2(VAR_6);

    FUNC_10(VAR_5);
    FUNC_5(VAR_5);

    if (VAR_8) {
        FUNC_4(VAR_1, "[restart] failed to valiate metadata, starting with a clean cache\n");
        return -1;
    } else {
        return 0;
    }
}
