
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* tag; scalar_t__ (* scb ) (char*,TYPE_2__*,int ) ;struct TYPE_5__* next; int data; } ;
typedef TYPE_1__ restart_data_cb ;
struct TYPE_6__ {int * f; } ;
typedef TYPE_2__ restart_cb_ctx ;
typedef int mode_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int,size_t) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*,size_t) ;
 int FUNC_6 (char*) ;
 size_t FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char*,TYPE_2__*,int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(const char *VAR_3) {


    size_t VAR_4 = FUNC_7(VAR_3);
    const char *VAR_5 = ".meta";
    char *VAR_6 = FUNC_0(1, VAR_4 + FUNC_7(VAR_5) + 1);
    FUNC_5(VAR_6, VAR_3, VAR_4);
    FUNC_5(VAR_6+VAR_4, VAR_5, FUNC_7(VAR_5));



    mode_t VAR_7 = FUNC_9(~(VAR_0 | VAR_1));
    FILE *VAR_8 = FUNC_2(VAR_6, "w");
    FUNC_9(VAR_7);
    if (VAR_8 == ((void*)0)) {

        FUNC_6("failed to write metadata file");
        return -1;
    }

    restart_data_cb *VAR_9 = VAR_2;
    restart_cb_ctx VAR_10;
    VAR_10.f = VAR_8;
    while (VAR_9 != ((void*)0)) {

        FUNC_3(VAR_8, "T%s\n", VAR_9->tag);
        if (VAR_9->scb(VAR_9->tag, &VAR_10, VAR_9->data) != 0) {
            return -1;
        }

        VAR_9 = VAR_9->next;
    }

    FUNC_1(VAR_8);
    FUNC_4(VAR_6);

    return 0;
}
