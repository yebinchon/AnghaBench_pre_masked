
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_4__ {int conflict; scalar_t__ new_merge; scalar_t__ second_parent_id; } ;
typedef TYPE_1__ SeafCommit ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static gboolean
FUNC_1 (SeafCommit *VAR_1, void *VAR_2, gboolean *VAR_3)
{
    SeafCommit **VAR_4 = VAR_2;

    if (VAR_1->second_parent_id && VAR_1->new_merge && !VAR_1->conflict)
        return VAR_0;

    *VAR_3 = VAR_0;
    FUNC_0 (VAR_1);
    *VAR_4 = VAR_1;
    return VAR_0;
}
