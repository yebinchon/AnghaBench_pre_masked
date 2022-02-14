
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct sidtab {int lock; int * convert; scalar_t__ count; TYPE_1__* isids; int * rcache; int roots; } ;
struct TYPE_2__ {scalar_t__ set; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct sidtab *VAR_3)
{
 u32 VAR_4;

 FUNC_0(VAR_3->roots, 0, sizeof(VAR_3->roots));


 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_3->rcache[VAR_4] = VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3->isids[VAR_4].set = 0;

 VAR_3->count = 0;
 VAR_3->convert = ((void*)0);

 FUNC_1(&VAR_3->lock);
 return 0;
}
