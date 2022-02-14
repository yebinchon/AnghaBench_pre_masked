
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct sidtab {TYPE_2__* roots; TYPE_1__* isids; } ;
struct TYPE_4__ {int ptr_inner; } ;
struct TYPE_3__ {int context; scalar_t__ set; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__,size_t) ;

void FUNC_2(struct sidtab *VAR_2)
{
 u32 VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_2->isids[VAR_3].set)
   FUNC_0(&VAR_2->isids[VAR_3].context);

 VAR_4 = VAR_1;
 while (VAR_4 && !VAR_2->roots[VAR_4].ptr_inner)
  --VAR_4;

 FUNC_1(VAR_2->roots[VAR_4], VAR_4);
}
