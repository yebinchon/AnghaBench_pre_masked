
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
struct TYPE_10__ {scalar_t__ level; } ;
typedef int Relation ;
typedef TYPE_1__ FSMAddress ;
typedef int Buffer ;
typedef int BlockNumber ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__ FUNC_4 (TYPE_1__,int) ;
 int FUNC_5 (TYPE_1__,int) ;
 int FUNC_6 (int ) ;
 TYPE_1__ FUNC_7 (TYPE_1__,int *) ;
 int FUNC_8 (int ,TYPE_1__,int) ;
 int FUNC_9 (int ,int ,int,int) ;
 int FUNC_10 (int ,TYPE_1__,int ,int ,int ) ;

__attribute__((used)) static BlockNumber
FUNC_11(Relation VAR_5, uint8 VAR_6)
{
 int VAR_7 = 0;
 FSMAddress VAR_8 = VAR_2;

 for (;;)
 {
  int VAR_9;
  Buffer VAR_10;
  uint8 VAR_11 = 0;


  VAR_10 = FUNC_8(VAR_5, VAR_8, 0);


  if (FUNC_1(VAR_10))
  {
   FUNC_2(VAR_10, VAR_0);
   VAR_9 = FUNC_9(VAR_10, VAR_6,
         (VAR_8.level == VAR_1),
         0);
   if (VAR_9 == -1)
    VAR_11 = FUNC_6(FUNC_0(VAR_10));
   FUNC_3(VAR_10);
  }
  else
   VAR_9 = -1;

  if (VAR_9 != -1)
  {




   if (VAR_8.level == VAR_1)
    return FUNC_5(VAR_8, VAR_9);

   VAR_8 = FUNC_4(VAR_8, VAR_9);
  }
  else if (VAR_8.level == VAR_3)
  {




   return VAR_4;
  }
  else
  {
   uint16 VAR_12;
   FSMAddress VAR_13;
   VAR_13 = FUNC_7(VAR_8, &VAR_12);
   FUNC_10(VAR_5, VAR_13, VAR_12, VAR_11, 0);
   if (VAR_7++ > 10000)
    return VAR_4;


   VAR_8 = VAR_2;
  }
 }
}
