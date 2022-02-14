
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int ph_node; int regd_count; } ;
typedef TYPE_1__* Snapshot ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int VAR_6 ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;

Snapshot
FUNC_12(void)
{






 if (FUNC_4())
 {
  FUNC_0(!VAR_3);
  return VAR_5;
 }


 if (!VAR_3)
 {




  FUNC_5();

  FUNC_0(FUNC_11(&VAR_6));
  FUNC_0(VAR_4 == ((void*)0));

  if (FUNC_6())
   FUNC_9(VAR_2,
     "cannot take query snapshot during a parallel operation");
  if (FUNC_8())
  {

   if (FUNC_7())
    VAR_0 = FUNC_2(&VAR_1);
   else
    VAR_0 = FUNC_3(&VAR_1);

   VAR_0 = FUNC_1(VAR_0);
   VAR_4 = VAR_0;

   VAR_4->regd_count++;
   FUNC_10(&VAR_6, &VAR_4->ph_node);
  }
  else
   VAR_0 = FUNC_3(&VAR_1);

  VAR_3 = 1;
  return VAR_0;
 }

 if (FUNC_8())
  return VAR_0;


 FUNC_5();

 VAR_0 = FUNC_3(&VAR_1);

 return VAR_0;
}
