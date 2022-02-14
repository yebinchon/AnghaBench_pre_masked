
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int XLogRecPtr ;
struct TYPE_5__ {TYPE_1__* shared; } ;
struct TYPE_4__ {int lsn_groups_per_page; int * group_lsn; } ;
typedef TYPE_1__* SlruShared ;
typedef TYPE_2__* SlruCtl ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_1(SlruCtl VAR_0, int VAR_1)
{
 SlruShared VAR_2 = VAR_0->shared;

 if (VAR_2->lsn_groups_per_page > 0)
  FUNC_0(&VAR_2->group_lsn[VAR_1 * VAR_2->lsn_groups_per_page], 0,
      VAR_2->lsn_groups_per_page * sizeof(XLogRecPtr));
}
