
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct aa_profile {TYPE_1__** dents; } ;
struct TYPE_6__ {int i_mtime; } ;
struct TYPE_5__ {int lock; } ;
struct TYPE_4__ {TYPE_3__* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (struct aa_profile*) ;

void FUNC_4(struct aa_profile *VAR_1,
      struct aa_profile *VAR_2)
{
 int VAR_3;

 FUNC_0(!VAR_1);
 FUNC_0(!VAR_2);
 FUNC_0(!FUNC_2(&FUNC_3(VAR_1)->lock));

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2->dents[VAR_3] = VAR_1->dents[VAR_3];
  if (VAR_2->dents[VAR_3])
   VAR_2->dents[VAR_3]->d_inode->i_mtime = FUNC_1(VAR_2->dents[VAR_3]->d_inode);
  VAR_1->dents[VAR_3] = ((void*)0);
 }
}
