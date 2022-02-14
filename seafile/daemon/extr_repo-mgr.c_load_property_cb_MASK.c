
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int gboolean ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int ) ;

__attribute__((used)) static gboolean
FUNC_2 (sqlite3_stmt *VAR_1, void *VAR_2)
{
    char **VAR_3 = VAR_2;

    char *VAR_4 = (char *) FUNC_1 (VAR_1, 0);
    *VAR_3 = FUNC_0 (VAR_4);


    return VAR_0;
}
