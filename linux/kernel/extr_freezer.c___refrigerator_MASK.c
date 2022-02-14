
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long state; int flags; int comm; } ;


 int VAR_0 ;
 long VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

bool FUNC_7(bool VAR_4)
{


 bool VAR_5 = 0;
 long VAR_6 = VAR_2->state;

 FUNC_2("%s entered refrigerator\n", VAR_2->comm);

 for (;;) {
  FUNC_4(VAR_1);

  FUNC_5(&VAR_3);
  VAR_2->flags |= VAR_0;
  if (!FUNC_0(VAR_2) ||
      (VAR_4 && FUNC_1()))
   VAR_2->flags &= ~VAR_0;
  FUNC_6(&VAR_3);

  if (!(VAR_2->flags & VAR_0))
   break;
  VAR_5 = 1;
  FUNC_3();
 }

 FUNC_2("%s left refrigerator\n", VAR_2->comm);






 FUNC_4(VAR_6);

 return VAR_5;
}
