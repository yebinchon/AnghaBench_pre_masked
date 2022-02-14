
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stat {int dummy; } ;
typedef int buf ;
struct TYPE_6__ {int unique_subject; } ;
struct TYPE_7__ {struct stat dbst; int dbfname; TYPE_1__ attributes; int * db; } ;
typedef int TXT_DB ;
typedef int FILE ;
typedef TYPE_1__ DB_ATTR ;
typedef int CONF ;
typedef TYPE_2__ CA_DB ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int **) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*,int,char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,char*,char const*) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (int *,int *,char*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,int ) ;
 int * FUNC_11 (char*) ;
 TYPE_2__* FUNC_12 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,struct stat*) ;
 int FUNC_15 (char*,int) ;

CA_DB *FUNC_16(const char *VAR_5, DB_ATTR *VAR_6)
{
    CA_DB *VAR_7 = ((void*)0);
    TXT_DB *VAR_8 = ((void*)0);
    BIO *VAR_9;
    CONF *VAR_10 = ((void*)0);
    char VAR_11[VAR_0];

    FILE *VAR_12;
    struct stat VAR_13;


    VAR_9 = FUNC_2(VAR_5, "r");
    if (VAR_9 == ((void*)0)) {
        FUNC_4(VAR_3);
        goto err;
    }


    FUNC_1(VAR_9, &VAR_12);
    if (FUNC_14(FUNC_13(VAR_12), &VAR_13) == -1) {
        FUNC_5(VAR_2, VAR_4,
                       "calling fstat(%s)", VAR_5);
        FUNC_4(VAR_3);
        goto err;
    }


    if ((VAR_8 = FUNC_10(VAR_9, VAR_1)) == ((void*)0))
        goto err;


    FUNC_3(VAR_11, sizeof(VAR_11), "%s.attr", VAR_5);



    VAR_10 = FUNC_11(VAR_11);

    VAR_7 = FUNC_12(sizeof(*VAR_7), "new DB");
    VAR_7->db = VAR_8;
    VAR_8 = ((void*)0);
    if (VAR_6)
        VAR_7->attributes = *VAR_6;
    else {
        VAR_7->attributes.unique_subject = 1;
    }

    if (VAR_10) {
        char *VAR_14 = FUNC_7(VAR_10, ((void*)0), "unique_subject");
        if (VAR_14) {
            VAR_7->attributes.unique_subject = FUNC_15(VAR_14, 1);
        }
    }

    VAR_7->dbfname = FUNC_8(VAR_5);

    VAR_7->dbst = VAR_13;


 err:
    FUNC_6(VAR_10);
    FUNC_9(VAR_8);
    FUNC_0(VAR_9);
    return VAR_7;
}
