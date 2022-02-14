
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int gpointer ;
typedef scalar_t__ gint ;
typedef TYPE_1__* gconstpointer ;
struct TYPE_5__ {scalar_t__ ctime; } ;
typedef TYPE_1__ SeafCommit ;



__attribute__((used)) static gint
FUNC_0 (gconstpointer VAR_0, gconstpointer VAR_1, gpointer VAR_2)
{
    const SeafCommit *VAR_3 = VAR_0;
    const SeafCommit *VAR_4 = VAR_1;


    return (VAR_4->ctime - VAR_3->ctime);
}
