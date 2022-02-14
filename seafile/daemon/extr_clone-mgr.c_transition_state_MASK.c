
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t state; int repo_id; int manager; } ;
typedef TYPE_1__ CloneTask ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int * VAR_2 ;

__attribute__((used)) static void
FUNC_2 (CloneTask *VAR_3, int VAR_4)
{
    FUNC_1 ("Transition clone state for %.8s from [%s] to [%s].\n",
                  VAR_3->repo_id,
                  VAR_2[VAR_3->state], VAR_2[VAR_4]);

    if (VAR_4 == VAR_1 ||
        VAR_4 == VAR_0) {

        FUNC_0 (VAR_3->manager, VAR_3->repo_id);
    }

    VAR_3->state = VAR_4;
}
