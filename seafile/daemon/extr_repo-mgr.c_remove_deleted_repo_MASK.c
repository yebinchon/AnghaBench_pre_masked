
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int gboolean ;
typedef int SeafRepoManager ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;

__attribute__((used)) static gboolean
FUNC_2 (sqlite3_stmt *VAR_1, void *VAR_2)
{
    SeafRepoManager *VAR_3 = VAR_2;
    const char *VAR_4;

    VAR_4 = (const char *) FUNC_1 (VAR_1, 0);

    FUNC_0 (VAR_3, VAR_4, VAR_0);

    return VAR_0;
}
