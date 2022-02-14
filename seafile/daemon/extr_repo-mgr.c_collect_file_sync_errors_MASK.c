
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int gint64 ;
typedef int gboolean ;
typedef int SeafileFileSyncError ;
typedef int GList ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int ,char*,int,char*,char const*,char*,char const*,char*,char const*,char*,int,char*,int ,int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;

__attribute__((used)) static gboolean
FUNC_5 (sqlite3_stmt *VAR_2, void *VAR_3)
{
    GList **VAR_4 = VAR_3;
    const char *VAR_5, *VAR_6, *VAR_7;
    int VAR_8, VAR_9;
    gint64 VAR_10;
    SeafileFileSyncError *VAR_11;

    VAR_8 = FUNC_2 (VAR_2, 0);
    VAR_5 = (const char *)FUNC_4 (VAR_2, 1);
    VAR_6 = (const char *)FUNC_4 (VAR_2, 2);
    VAR_7 = (const char *)FUNC_4 (VAR_2, 3);
    VAR_9 = FUNC_2 (VAR_2, 4);
    VAR_10 = FUNC_3 (VAR_2, 5);

    VAR_11 = FUNC_1 (VAR_0,
                          "id", VAR_8,
                          "repo_id", VAR_5,
                          "repo_name", VAR_6,
                          "path", VAR_7,
                          "err_id", VAR_9,
                          "timestamp", VAR_10,
                          ((void*)0));
    *VAR_4 = FUNC_0 (*VAR_4, VAR_11);

    return VAR_1;
}
