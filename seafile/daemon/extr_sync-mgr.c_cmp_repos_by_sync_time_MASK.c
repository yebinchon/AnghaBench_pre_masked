
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int gpointer ;
typedef scalar_t__ gint ;
typedef TYPE_1__* gconstpointer ;
struct TYPE_5__ {scalar_t__ last_sync_time; } ;
typedef TYPE_1__ SeafRepo ;



gint
FUNC_0 (gconstpointer VAR_0, gconstpointer VAR_1, gpointer VAR_2)
{
    const SeafRepo *VAR_3 = VAR_0;
    const SeafRepo *VAR_4 = VAR_1;

    return (VAR_3->last_sync_time - VAR_4->last_sync_time);
}
