
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VCCompareResult ;
struct TYPE_9__ {int commit_mgr; } ;
struct TYPE_8__ {char const* commit_id; } ;
typedef TYPE_1__ SeafCommit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 TYPE_4__* VAR_3 ;
 TYPE_1__* FUNC_1 (int ,char const*,int,char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;

VCCompareResult
FUNC_4 (const char *VAR_4, int VAR_5,
                    const char *VAR_6, const char *VAR_7)
{
    SeafCommit *VAR_8, *VAR_9, *VAR_10;
    VCCompareResult VAR_11;


    if (FUNC_3 (VAR_6, VAR_7) == 0)
        return VAR_2;

    VAR_8 = FUNC_1 (VAR_3->commit_mgr, VAR_4, VAR_5, VAR_6);
    if (!VAR_8)
        return VAR_1;

    VAR_9 = FUNC_1 (VAR_3->commit_mgr, VAR_4, VAR_5, VAR_7);
    if (!VAR_9) {
        FUNC_2 (VAR_8);
        return VAR_1;
    }

    VAR_10 = FUNC_0 (VAR_8, VAR_9);

    if (!VAR_10)
        VAR_11 = VAR_1;
    else if (FUNC_3(VAR_10->commit_id, VAR_8->commit_id) == 0)
        VAR_11 = VAR_2;
    else if (FUNC_3(VAR_10->commit_id, VAR_9->commit_id) == 0)
        VAR_11 = VAR_0;
    else
        VAR_11 = VAR_1;

    if (VAR_10) FUNC_2 (VAR_10);
    FUNC_2 (VAR_8);
    FUNC_2 (VAR_9);
    return VAR_11;
}
