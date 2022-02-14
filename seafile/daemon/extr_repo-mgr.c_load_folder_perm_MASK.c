
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int gboolean ;
typedef int GList ;
typedef int FolderPerm ;


 int VAR_0 ;
 int * FUNC_0 (char const*,char const*) ;
 int * FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int) ;

__attribute__((used)) static gboolean
FUNC_3 (sqlite3_stmt *VAR_1, void *VAR_2)
{
    GList **VAR_3 = VAR_2;
    const char *VAR_4, *VAR_5;

    VAR_4 = (const char *)FUNC_2 (VAR_1, 0);
    VAR_5 = (const char *)FUNC_2 (VAR_1, 1);

    FolderPerm *VAR_6 = FUNC_0 (VAR_4, VAR_5);
    *VAR_3 = FUNC_1 (*VAR_3, VAR_6);

    return VAR_0;
}
