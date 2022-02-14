
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;
typedef char* gpointer ;
typedef size_t SyncStatus ;
typedef int GHashTableIter ;
typedef int GHashTable ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,char**,char**) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (char*) ;
 char** VAR_0 ;

__attribute__((used)) static json_t *
FUNC_7 (GHashTable *VAR_1)
{
    json_t *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
    GHashTableIter VAR_4;
    gpointer VAR_5, VAR_6;
    char *VAR_7;
    SyncStatus VAR_8;

    VAR_2 = FUNC_2 ();

    FUNC_0 (&VAR_4, VAR_1);
    while (FUNC_1 (&VAR_4, &VAR_5, &VAR_6)) {
        VAR_7 = VAR_5;
        VAR_8 = (SyncStatus)VAR_6;

        VAR_3 = FUNC_4 ();
        FUNC_5 (VAR_3, "path", FUNC_6(VAR_7));
        FUNC_5 (VAR_3, "status", FUNC_6(VAR_0[VAR_8]));

        FUNC_3 (VAR_2, VAR_3);
    }

    return VAR_2;
}
