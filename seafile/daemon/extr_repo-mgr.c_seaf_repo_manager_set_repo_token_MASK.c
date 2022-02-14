
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; int token; } ;
typedef int SeafRepoManager ;
typedef TYPE_1__ SeafRepo ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *,int ,int ,char const*) ;

int
FUNC_3 (SeafRepoManager *VAR_1,
                                  SeafRepo *VAR_2,
                                  const char *VAR_3)
{
    FUNC_0 (VAR_2->token);
    VAR_2->token = FUNC_1(VAR_3);

    FUNC_2 (VAR_1, VAR_2->id, VAR_0, VAR_3);
    return 0;
}
