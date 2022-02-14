
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct aa_loaddata {long revision; int * dents; TYPE_1__* ns; } ;
struct TYPE_5__ {void* i_mtime; } ;
struct TYPE_4__ {int lock; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct aa_loaddata *VAR_2, long VAR_3)
{
 FUNC_0(!VAR_2);
 FUNC_0(!VAR_2->ns);
 FUNC_0(!VAR_2->dents[VAR_1]);
 FUNC_0(!FUNC_3(&VAR_2->ns->lock));
 FUNC_0(VAR_2->revision > VAR_3);

 VAR_2->revision = VAR_3;
 FUNC_2(VAR_2->dents[VAR_0])->i_mtime =
  FUNC_1(FUNC_2(VAR_2->dents[VAR_0]));
 FUNC_2(VAR_2->dents[VAR_1])->i_mtime =
  FUNC_1(FUNC_2(VAR_2->dents[VAR_1]));
}
