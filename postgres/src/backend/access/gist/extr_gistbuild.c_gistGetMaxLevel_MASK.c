
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int t_tid; } ;
typedef int Relation ;
typedef scalar_t__ Page ;
typedef TYPE_1__* IndexTuple ;
typedef int Buffer ;
typedef int BlockNumber ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(Relation VAR_3)
{
 int VAR_4;
 BlockNumber VAR_5;





 VAR_4 = 0;
 VAR_5 = VAR_1;
 while (1)
 {
  Buffer VAR_6;
  Page VAR_7;
  IndexTuple VAR_8;

  VAR_6 = FUNC_6(VAR_3, VAR_5);





  FUNC_3(VAR_6, VAR_2);
  VAR_7 = (Page) FUNC_0(VAR_6);

  if (FUNC_1(VAR_7))
  {

   FUNC_7(VAR_6);
   break;
  }






  VAR_8 = (IndexTuple) FUNC_4(VAR_7,
          FUNC_5(VAR_7, VAR_0));
  VAR_5 = FUNC_2(&(VAR_8->t_tid));
  FUNC_7(VAR_6);





  VAR_4++;
 }
 return VAR_4;
}
