
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int json_t ;
struct TYPE_4__ {int text; } ;
typedef TYPE_1__ json_error_t ;
typedef int gboolean ;
struct TYPE_5__ {void* repo_salt; void* server_url; int is_readonly; } ;
typedef TYPE_2__ CloneTask ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,int ,TYPE_1__*) ;
 int * FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (int *,int ) ;

__attribute__((used)) static gboolean
FUNC_8 (sqlite3_stmt *VAR_1, void *VAR_2)
{
    CloneTask *VAR_3 = VAR_2;
    json_error_t VAR_4;
    json_t *VAR_5 = ((void*)0);
    const char *VAR_6;

    VAR_6 = (const char *)FUNC_7 (VAR_1, 0);
    VAR_5 = FUNC_3 (VAR_6, 0, &VAR_4);
    if (!VAR_5) {
        FUNC_6 ("Failed to load more sync info from json: %s.\n", VAR_4.text);
        return VAR_0;
    }

    json_t *VAR_7 = FUNC_4 (VAR_5, "is_readonly");
    VAR_3->is_readonly = FUNC_2 (VAR_7);
    json_t *VAR_8 = FUNC_4 (VAR_5, "server_url");
    if (VAR_8)
        VAR_3->server_url = FUNC_0 (FUNC_5 (VAR_8));
    json_t *VAR_9 = FUNC_4 (VAR_5, "repo_salt");
    if (VAR_9)
        VAR_3->repo_salt = FUNC_0 (FUNC_5 (VAR_9));
    FUNC_1 (VAR_5);

    return VAR_0;
}
