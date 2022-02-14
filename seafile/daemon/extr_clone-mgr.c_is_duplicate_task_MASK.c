
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_6__ {scalar_t__ state; } ;
struct TYPE_5__ {int tasks; } ;
typedef TYPE_1__ SeafCloneManager ;
typedef TYPE_2__ CloneTask ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int ,char const*) ;

__attribute__((used)) static gboolean
FUNC_1 (SeafCloneManager *VAR_4, const char *VAR_5)
{
    CloneTask *VAR_6 = FUNC_0 (VAR_4->tasks, VAR_5);
    if (VAR_6 != ((void*)0) &&
        VAR_6->state != VAR_1 &&
        VAR_6->state != VAR_0)
        return VAR_3;
    return VAR_2;
}
