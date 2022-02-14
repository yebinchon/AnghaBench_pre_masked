
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ btpo_prev; scalar_t__ btpo_next; } ;
typedef int Snapshot ;
typedef int Relation ;
typedef int Page ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;
typedef TYPE_1__* BTPageOpaque ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,scalar_t__,int ) ;
 int FUNC_10 (int ,int ,scalar_t__,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,char*,scalar_t__,...) ;

__attribute__((used)) static Buffer
FUNC_13(Relation VAR_3, Buffer VAR_4, Snapshot VAR_5)
{
 Page VAR_6;
 BTPageOpaque VAR_7;

 VAR_6 = FUNC_1(VAR_4);
 VAR_7 = (BTPageOpaque) FUNC_6(VAR_6);

 for (;;)
 {
  BlockNumber VAR_8;
  BlockNumber VAR_9;
  BlockNumber VAR_10;
  int VAR_11;


  if (FUNC_4(VAR_7))
  {
   FUNC_11(VAR_3, VAR_4);
   break;
  }

  VAR_8 = FUNC_0(VAR_4);

  VAR_10 = VAR_9 = VAR_7->btpo_prev;
  FUNC_11(VAR_3, VAR_4);

  FUNC_2();
  VAR_4 = FUNC_9(VAR_3, VAR_10, VAR_0);
  VAR_6 = FUNC_1(VAR_4);
  FUNC_8(VAR_5, VAR_3, VAR_6);
  VAR_7 = (BTPageOpaque) FUNC_6(VAR_6);
  VAR_11 = 0;
  for (;;)
  {
   if (!FUNC_3(VAR_7) && VAR_7->btpo_next == VAR_8)
   {

    return VAR_4;
   }
   if (FUNC_5(VAR_7) || ++VAR_11 > 4)
    break;
   VAR_10 = VAR_7->btpo_next;
   VAR_4 = FUNC_10(VAR_3, VAR_4, VAR_10, VAR_0);
   VAR_6 = FUNC_1(VAR_4);
   FUNC_8(VAR_5, VAR_3, VAR_6);
   VAR_7 = (BTPageOpaque) FUNC_6(VAR_6);
  }


  VAR_4 = FUNC_10(VAR_3, VAR_4, VAR_8, VAR_0);
  VAR_6 = FUNC_1(VAR_4);
  FUNC_8(VAR_5, VAR_3, VAR_6);
  VAR_7 = (BTPageOpaque) FUNC_6(VAR_6);
  if (FUNC_3(VAR_7))
  {






   for (;;)
   {
    if (FUNC_5(VAR_7))
     FUNC_12(VAR_1, "fell off the end of index \"%s\"",
       FUNC_7(VAR_3));
    VAR_10 = VAR_7->btpo_next;
    VAR_4 = FUNC_10(VAR_3, VAR_4, VAR_10, VAR_0);
    VAR_6 = FUNC_1(VAR_4);
    FUNC_8(VAR_5, VAR_3, VAR_6);
    VAR_7 = (BTPageOpaque) FUNC_6(VAR_6);
    if (!FUNC_3(VAR_7))
     break;
   }





  }
  else
  {





   if (VAR_7->btpo_prev == VAR_9)
    FUNC_12(VAR_1, "could not find left sibling of block %u in index \"%s\"",
      VAR_8, FUNC_7(VAR_3));

  }
 }

 return VAR_2;
}
