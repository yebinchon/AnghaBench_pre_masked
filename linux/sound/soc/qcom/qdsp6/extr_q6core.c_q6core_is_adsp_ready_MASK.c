
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned long,unsigned long) ;

bool FUNC_5(void)
{
 unsigned long VAR_3;
 bool VAR_4 = 0;

 if (!VAR_1)
  return 0;

 FUNC_2(&VAR_1->lock);
 VAR_3 = VAR_2 + FUNC_1(VAR_0);
 for (;;) {
  if (FUNC_0(VAR_1)) {
   VAR_4 = 1;
   break;
  }

  if (!FUNC_4(VAR_3, VAR_2)) {
   VAR_4 = 0;
   break;
  }
 }

 FUNC_3(&VAR_1->lock);
 return VAR_4;
}
