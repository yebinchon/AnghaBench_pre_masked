
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3 ;
typedef int X509_STORE ;
struct TYPE_2__ {int seaf_dir; } ;


 char* FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char*,int ,int *) ;
 scalar_t__ FUNC_5 (char*,int **) ;

__attribute__((used)) static int
FUNC_6 (X509_STORE *VAR_2)
{
    char *VAR_3 = ((void*)0);
    sqlite3 *VAR_4 = ((void*)0);
    char *VAR_5;
    int VAR_6 = 0;

    VAR_3 = FUNC_0 (VAR_1->seaf_dir, "certs.db", ((void*)0));
    if (FUNC_5 (VAR_3, &VAR_4) < 0) {
        FUNC_2 ("Failed to open certs.db\n");
        VAR_6 = -1;
        goto out;
    }

    VAR_5 = "SELECT cert FROM Certs;";

    if (FUNC_4 (VAR_4, VAR_5, VAR_0, VAR_2) < 0) {
        VAR_6 = -1;
        goto out;
    }

out:
    FUNC_1 (VAR_3);
    if (VAR_4)
        FUNC_3 (VAR_4);

    return VAR_6;
}
