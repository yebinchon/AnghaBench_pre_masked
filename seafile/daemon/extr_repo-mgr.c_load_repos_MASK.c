
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;
typedef int SeafRepoManager ;


 int VAR_0 ;
 int * FUNC_0 (int *,char const*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,char*,int ,int *) ;

__attribute__((used)) static void
FUNC_3 (SeafRepoManager *VAR_2, const char *VAR_3)
{
    sqlite3 *VAR_4 = FUNC_0(VAR_2, VAR_3);
    if (!VAR_4) return;

    char *VAR_5;

    VAR_5 = "SELECT repo_id FROM DeletedRepo";
    if (FUNC_2 (VAR_4, VAR_5, VAR_1, VAR_2) < 0) {
        FUNC_1 ("Error removing deleted repos.\n");
        return;
    }

    VAR_5 = "SELECT repo_id FROM Repo;";
    if (FUNC_2 (VAR_4, VAR_5, VAR_0, VAR_2) < 0) {
        FUNC_1 ("Error read repo db.\n");
        return;
    }
}
