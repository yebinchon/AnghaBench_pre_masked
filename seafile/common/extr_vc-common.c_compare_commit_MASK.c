
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int gint ;
typedef TYPE_1__* gconstpointer ;
struct TYPE_5__ {int commit_id; } ;
typedef TYPE_1__ SeafCommit ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static gint
FUNC_1 (gconstpointer VAR_0, gconstpointer VAR_1)
{
    const SeafCommit *VAR_2 = VAR_0;
    const SeafCommit *VAR_3 = VAR_1;

    return FUNC_0 (VAR_2->commit_id, VAR_3->commit_id);
}
