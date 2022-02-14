
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t state; int error; int repo_id; } ;
typedef TYPE_1__ CloneTask ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int * VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2 (CloneTask *VAR_2, int VAR_3)
{
    FUNC_0 ("Transition clone state for %.8s from [%s] to [error]: %s.\n",
                  VAR_2->repo_id,
                  VAR_1[VAR_2->state],
                  FUNC_1(VAR_3));

    VAR_2->state = VAR_0;
    VAR_2->error = VAR_3;
}
