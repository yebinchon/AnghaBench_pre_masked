
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_8__ {int text; } ;
typedef TYPE_1__ json_error_t ;
struct TYPE_10__ {TYPE_2__* manager; } ;
struct TYPE_9__ {int obj_store; } ;
typedef TYPE_2__ SeafCommitManager ;
typedef TYPE_3__ SeafCommit ;


 int FUNC_0 (char*,int) ;
 TYPE_3__* FUNC_1 (char const*,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,int,int ,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ,char const*,int,char const*,void**,int*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static SeafCommit *
FUNC_8 (SeafCommitManager *VAR_0,
             const char *VAR_1,
             int VAR_2,
             const char *VAR_3)
{
    char *VAR_4 = ((void*)0);
    int VAR_5;
    SeafCommit *VAR_6 = ((void*)0);
    json_t *VAR_7 = ((void*)0);
    json_error_t VAR_8;

    if (!VAR_3 || FUNC_7(VAR_3) != 40)
        return ((void*)0);

    if (FUNC_5 (VAR_0->obj_store, VAR_1, VAR_2,
                                 VAR_3, (void **)&VAR_4, &VAR_5) < 0)
        return ((void*)0);

    VAR_7 = FUNC_4 (VAR_4, VAR_5, 0, &VAR_8);
    if (!VAR_7) {

        if (VAR_4[VAR_5-1] == 0)
            FUNC_0 (VAR_4, VAR_5 - 1);
        else
            FUNC_0 (VAR_4, VAR_5);

        VAR_7 = FUNC_4 (VAR_4, VAR_5, 0, &VAR_8);
        if (!VAR_7) {
            FUNC_6 ("Failed to load commit json object: %s.\n", VAR_8.text);
            goto out;
        }
    }

    VAR_6 = FUNC_1 (VAR_3, VAR_7);
    if (VAR_6)
        VAR_6->manager = VAR_0;

out:
    if (VAR_7) FUNC_3 (VAR_7);
    FUNC_2 (VAR_4);

    return VAR_6;
}
