
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int gboolean ;
struct TYPE_2__ {int repo_version; } ;
typedef TYPE_1__ CloneTask ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static gboolean
FUNC_1 (sqlite3_stmt *VAR_1, void *VAR_2)
{
    CloneTask *VAR_3 = VAR_2;
    int VAR_4;

    VAR_4 = FUNC_0 (VAR_1, 0);

    VAR_3->repo_version = VAR_4;

    return VAR_0;
}
