
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int repo_mgr; } ;
struct TYPE_6__ {int id; int name; } ;
typedef int SyncTask ;
typedef TYPE_1__ SeafRepo ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5 (SyncTask *VAR_2, SeafRepo *VAR_3)
{
    FUNC_4 (VAR_2, VAR_0);

    FUNC_2 ("repo %s(%.8s) not found on server\n",
                  VAR_3->name, VAR_3->id);

    if (!FUNC_3(VAR_1)) {
        FUNC_0 ("remove repo %s(%.8s) since it's deleted on relay\n",
                      VAR_3->name, VAR_3->id);



        FUNC_1 (VAR_1->repo_mgr, VAR_3);
    }
}
