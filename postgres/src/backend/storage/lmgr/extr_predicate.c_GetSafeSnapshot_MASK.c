
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int possibleUnsafeConflicts; } ;
typedef int Snapshot ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static Snapshot
FUNC_12(Snapshot VAR_11)
{
 Snapshot VAR_12;

 FUNC_0(VAR_10 && VAR_9);

 while (1)
 {






  VAR_12 = FUNC_1(VAR_11,
               ((void*)0), VAR_2);

  if (VAR_5 == VAR_3)
   return VAR_12;

  FUNC_2(VAR_7, VAR_4);





  VAR_5->flags |= VAR_6;
  while (!(FUNC_6(&VAR_5->possibleUnsafeConflicts) ||
     FUNC_8(VAR_5)))
  {
   FUNC_3(VAR_7);
   FUNC_4(VAR_8);
   FUNC_2(VAR_7, VAR_4);
  }
  VAR_5->flags &= ~VAR_6;

  if (!FUNC_8(VAR_5))
  {
   FUNC_3(VAR_7);
   break;
  }

  FUNC_3(VAR_7);


  FUNC_9(VAR_0,
    (FUNC_10(VAR_1),
     FUNC_11("deferrable snapshot was unsafe; trying a new one")));
  FUNC_5(0, 0);
 }




 FUNC_0(FUNC_7(VAR_5));
 FUNC_5(0, 1);

 return VAR_12;
}
