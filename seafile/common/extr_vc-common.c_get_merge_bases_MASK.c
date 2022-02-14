
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_8__ {int result; int commit_hash; } ;
struct TYPE_7__ {int commit_id; } ;
typedef TYPE_1__ SeafCommit ;
typedef TYPE_2__ MergeTraverseData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int FUNC_2 (int ,TYPE_1__*,int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static gboolean
FUNC_4 (SeafCommit *VAR_3, void *VAR_4, gboolean *VAR_5)
{
    MergeTraverseData *VAR_6 = VAR_4;




    if (FUNC_0 (VAR_6->commit_hash, VAR_3->commit_id)) {
        if (!FUNC_1 (VAR_6->result, VAR_3, VAR_1)) {
            VAR_6->result = FUNC_2 (VAR_6->result, VAR_3,
                                                     VAR_2,
                                                     ((void*)0));
            FUNC_3 (VAR_3);
        }
        *VAR_5 = VAR_0;
    }

    return VAR_0;
}
