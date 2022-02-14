
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int gboolean ;
typedef int GList ;


 int VAR_0 ;
 int * FUNC_0 (int *,char*) ;
 char* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int *,int ) ;

__attribute__((used)) static gboolean
FUNC_3 (sqlite3_stmt *VAR_1, void *VAR_2)
{
    GList **VAR_3 = VAR_2;
    char *VAR_4;

    VAR_4 = FUNC_1((const char *)FUNC_2 (VAR_1, 0));
    *VAR_3 = FUNC_0 (*VAR_3, VAR_4);

    return VAR_0;
}
