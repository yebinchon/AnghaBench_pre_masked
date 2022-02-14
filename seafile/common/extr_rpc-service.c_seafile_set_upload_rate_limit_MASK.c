
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* sync_mgr; } ;
struct TYPE_4__ {int upload_limit; } ;
typedef int GError ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;

int
FUNC_1 (int VAR_2, GError **VAR_3)
{
    if (VAR_2 < 0)
        VAR_2 = 0;

    VAR_1->sync_mgr->upload_limit = VAR_2;

    return FUNC_0 (VAR_1, VAR_0, VAR_2);
}
