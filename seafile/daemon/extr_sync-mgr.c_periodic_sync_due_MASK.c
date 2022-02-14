
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_3__ {int last_sync_time; int sync_interval; } ;
typedef TYPE_1__ SeafRepo ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) inline static gboolean
FUNC_1 (SeafRepo *VAR_0)
{
    int VAR_1 = (int)FUNC_0(((void*)0));
    return (VAR_1 > (VAR_0->last_sync_time + VAR_0->sync_interval));
}
