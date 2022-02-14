
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int new_name; int name; } ;
typedef int GHashTable ;
typedef TYPE_1__ DiffEntry ;


 char* FUNC_0 (char const*,int ,int ) ;
 int VAR_0 ;
 char* FUNC_1 (char const*,int ,int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*,char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8 (DiffEntry *VAR_1, const char *VAR_2,
                       GHashTable *VAR_3, GHashTable *VAR_4)
{
    char *VAR_5, *VAR_6;
    int VAR_7 = 0;

    VAR_5 = FUNC_1 (VAR_2, VAR_1->name, ((void*)0));

    if (FUNC_3 (VAR_5)) {
        VAR_6 = FUNC_0 (VAR_2, VAR_1->new_name, FUNC_7(VAR_1->new_name));
        if (!VAR_6) {
            VAR_7 = -1;
            goto out;
        }

        if (FUNC_4 (VAR_5, VAR_6) < 0) {
            FUNC_5 ("Failed to rename %s to %s: %s.\n",
                          VAR_5, VAR_6, FUNC_6(VAR_0));
            VAR_7 = -1;
        }

        FUNC_2 (VAR_6);
    }

out:
    FUNC_2 (VAR_5);
    return VAR_7;
}
