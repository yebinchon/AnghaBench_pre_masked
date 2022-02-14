
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_17__ {int text; } ;
typedef TYPE_1__ json_error_t ;
typedef int gint64 ;
struct TYPE_20__ {int release; int * curl; } ;
struct TYPE_19__ {char* data; } ;
struct TYPE_18__ {int repo_id; int host; int error; int token; } ;
typedef TYPE_2__ HttpTxTask ;
typedef TYPE_3__ GList ;
typedef TYPE_4__ Connection ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 TYPE_3__* FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 TYPE_3__* FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 scalar_t__ FUNC_7 (int *,char const*,int ,char*,int,int*,char**,int *,int ,int*) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,int ) ;
 int * FUNC_10 (int *,int) ;
 size_t FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 char* FUNC_13 (int *,int ) ;
 int * FUNC_14 (char*,int ,int ,TYPE_1__*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char*,size_t,int ,int ) ;
 int FUNC_18 (char*,...) ;
 int FUNC_19 (char*) ;

__attribute__((used)) static int
FUNC_20 (HttpTxTask *VAR_4, Connection *VAR_5, const char *VAR_6,
                              GList **VAR_7, GList **VAR_8)
{
    json_t *VAR_9;
    json_error_t VAR_10;
    char *VAR_11;
    int VAR_12 = 0;
    char *VAR_13 = ((void*)0);
    int VAR_14;
    CURL *VAR_15;
    int VAR_16;
    char *VAR_17 = ((void*)0);
    gint64 VAR_18;
    int VAR_19 = 0;



    VAR_9 = FUNC_8 ();

    while (*VAR_7 != ((void*)0)) {
        VAR_11 = (*VAR_7)->data;
        FUNC_9 (VAR_9, FUNC_15(VAR_11));

        *VAR_7 = FUNC_2 (*VAR_7, *VAR_7);
        FUNC_1 (VAR_11);

        if (++VAR_12 >= VAR_1)
            break;
    }

    FUNC_17 ("Check %d ids for %s:%s.\n",
                VAR_12, VAR_4->host, VAR_4->repo_id);

    VAR_13 = FUNC_13 (VAR_9, 0);
    VAR_14 = FUNC_19(VAR_13);
    FUNC_12 (VAR_9);



    VAR_15 = VAR_5->curl;

    int VAR_20;
    if (FUNC_7 (VAR_15, VAR_6, VAR_4->token,
                   VAR_13, VAR_14,
                   &VAR_16, &VAR_17, &VAR_18, VAR_3, &VAR_20) < 0) {
        VAR_5->release = VAR_3;
        FUNC_5 (VAR_4, VAR_20);
        VAR_19 = -1;
        goto out;
    }

    if (VAR_16 != VAR_0) {
        FUNC_18 ("Bad response code for POST %s: %d.\n", VAR_6, VAR_16);
        FUNC_6 (VAR_4, VAR_16);
        VAR_19 = -1;
        goto out;
    }



    VAR_9 = FUNC_14 (VAR_17, VAR_18, 0, &VAR_10);
    if (!VAR_9) {
        FUNC_18 ("Invalid JSON response from the server: %s.\n", VAR_10.text);
        VAR_4->error = VAR_2;
        VAR_19 = -1;
        goto out;
    }

    int VAR_21;
    size_t VAR_22 = FUNC_11 (VAR_9);
    json_t *VAR_23;

    FUNC_17 ("%lu objects or blocks are needed for %s:%s.\n",
                VAR_22, VAR_4->host, VAR_4->repo_id);

    for (VAR_21 = 0; VAR_21 < VAR_22; ++VAR_21) {
        VAR_23 = FUNC_10 (VAR_9, VAR_21);
        if (!VAR_23) {
            FUNC_18 ("Invalid JSON response from the server.\n");
            FUNC_12 (VAR_9);
            VAR_19 = -1;
            goto out;
        }

        *VAR_8 = FUNC_3 (*VAR_8, FUNC_4(FUNC_16(VAR_23)));
    }

    FUNC_12 (VAR_9);

out:
    FUNC_0 (VAR_15);
    FUNC_1 (VAR_13);
    FUNC_1 (VAR_17);

    return VAR_19;
}
