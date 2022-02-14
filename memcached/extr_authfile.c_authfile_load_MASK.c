
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_size; } ;
typedef enum authfile_ret { ____Placeholder_authfile_ret } authfile_ret ;
struct TYPE_3__ {char* user; int ulen; char* pass; int plen; } ;
typedef TYPE_1__ auth_t ;
typedef int auth_entries ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (int,int ) ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*) ;
 char* VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,TYPE_1__*,int) ;
 int FUNC_6 (char const*,struct stat*) ;

enum authfile_ret FUNC_7(const char *VAR_10) {
    struct stat VAR_11;
    char *VAR_12 = ((void*)0);
    auth_t VAR_13[VAR_5];

    if (FUNC_6(VAR_10, &VAR_11) == -1) {
        return VAR_1;
    }

    VAR_12 = FUNC_0(1, VAR_11.st_size);

    if (VAR_12 == ((void*)0)) {
        return VAR_3;
    }

    FILE *VAR_14 = FUNC_3(VAR_10, "r");
    if (VAR_14 == ((void*)0)) {

        FUNC_4(VAR_12);
        return VAR_4;
    }

    char *VAR_15 = VAR_12;
    auth_t *VAR_16 = VAR_13;
    int VAR_17 = 0;

    while ((FUNC_2(VAR_15, VAR_6, VAR_14)) != ((void*)0)) {
        int VAR_18;
        int VAR_19 = 0;

        for (VAR_18 = 0; VAR_18 < VAR_6; VAR_18++) {
            if (!VAR_19 && VAR_15[VAR_18] == ':') {
                VAR_16->user = VAR_15;
                VAR_16->ulen = VAR_18;
                VAR_16->pass = &VAR_15[VAR_18+1];
                VAR_19 = 1;
            } else if (VAR_19) {

                if (VAR_15[VAR_18] == '\n' ||
                    VAR_15[VAR_18] == '\r' ||
                    VAR_15[VAR_18] == '\0') {
                    VAR_16->plen = VAR_18 - (VAR_16->ulen + 1);
                    break;
                }
            }
        }


        if (!VAR_19) {
            (void)FUNC_1(VAR_14);
            FUNC_4(VAR_12);
            return VAR_0;
        }


        if (++VAR_17 == VAR_5) {
            break;
        }

        if (VAR_15[VAR_18] == '\0')
            break;

        VAR_15 += VAR_18;
        VAR_16++;
    }



    if (VAR_8 != ((void*)0)) {
        FUNC_4(VAR_8);
    }

    VAR_7 = VAR_17;
    VAR_8 = VAR_12;
    FUNC_5(VAR_9, VAR_13, sizeof(VAR_13));

    (void)FUNC_1(VAR_14);

    return VAR_2;
}
