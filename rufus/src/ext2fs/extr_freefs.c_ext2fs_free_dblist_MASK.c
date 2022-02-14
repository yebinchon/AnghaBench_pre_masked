
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* ext2_dblist ;
struct TYPE_6__ {scalar_t__ magic; TYPE_1__* fs; struct TYPE_6__* list; } ;
struct TYPE_5__ {TYPE_2__* dblist; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__**) ;

void FUNC_1(ext2_dblist VAR_1)
{
 if (!VAR_1 || (VAR_1->magic != VAR_0))
  return;

 if (VAR_1->list)
  FUNC_0(&VAR_1->list);
 VAR_1->list = 0;
 if (VAR_1->fs && VAR_1->fs->dblist == VAR_1)
  VAR_1->fs->dblist = 0;
 VAR_1->magic = 0;
 FUNC_0(&VAR_1);
}
