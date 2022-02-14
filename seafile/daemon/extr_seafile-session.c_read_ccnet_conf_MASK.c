
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int message; } ;
typedef int GKeyFile ;
typedef TYPE_1__ GError ;


 int VAR_0 ;
 char* FUNC_0 (char*,char const*,char*,int *) ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *,char*,char*,TYPE_1__**) ;
 int FUNC_6 (int *,char*,int ,TYPE_1__**) ;
 int * FUNC_7 () ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static void
FUNC_9 (const char *VAR_1, char **VAR_2, char **VAR_3)
{
    char *VAR_4 = FUNC_0 ("/", VAR_1, "ccnet.conf", ((void*)0));
    GKeyFile *VAR_5 = FUNC_7 ();
    GError *VAR_6 = ((void*)0);

    if (!FUNC_2 (VAR_4, VAR_0))
        goto out;

    if (!FUNC_6 (VAR_5, VAR_4, 0, &VAR_6)) {
        FUNC_8 ("Failed to read ccnet.conf: %s.\n", VAR_6->message);
        FUNC_1 (&VAR_6);
        goto out;
    }

    *VAR_2 = FUNC_5 (VAR_5, "General", "ID", &VAR_6);
    if (VAR_6) {
        FUNC_8 ("Failed to read client id from ccnet.conf: %s.\n", VAR_6->message);
        FUNC_1 (&VAR_6);
        goto out;
    }

    *VAR_3 = FUNC_5 (VAR_5, "General", "NAME", &VAR_6);
    if (VAR_6) {
        FUNC_8 ("Failed to read client name from ccnet.conf: %s.\n", VAR_6->message);
        FUNC_1 (&VAR_6);
        goto out;
    }

out:
    FUNC_3 (VAR_4);
    FUNC_4 (VAR_5);
}
