
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int gboolean ;
struct TYPE_2__ {int enc_version; int random_key; } ;
typedef TYPE_1__ CloneTask ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int) ;

__attribute__((used)) static gboolean
FUNC_3 (sqlite3_stmt *VAR_1, void *VAR_2)
{
    CloneTask *VAR_3 = VAR_2;
    int VAR_4;
    const char *VAR_5;

    VAR_4 = FUNC_1 (VAR_1, 0);
    VAR_5 = (const char *)FUNC_2 (VAR_1, 1);

    VAR_3->enc_version = VAR_4;
    VAR_3->random_key = FUNC_0 (VAR_5);

    return VAR_0;
}
