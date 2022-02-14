
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_9__ {int btpo_next; } ;
struct TYPE_8__ {scalar_t__ nextkey; } ;
typedef int Snapshot ;
typedef int Relation ;
typedef int Page ;
typedef int Buffer ;
typedef int BlockNumber ;
typedef int BTStack ;
typedef TYPE_1__* BTScanInsert ;
typedef TYPE_2__* BTPageOpaque ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,TYPE_1__*,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int ,int ,int) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,char*,int ) ;

Buffer
FUNC_15(Relation VAR_5,
     BTScanInsert VAR_6,
     Buffer VAR_7,
     bool VAR_8,
     BTStack VAR_9,
     int VAR_10,
     Snapshot VAR_11)
{
 Page VAR_12;
 BTPageOpaque VAR_13;
 int32 VAR_14;
 VAR_14 = VAR_6->nextkey ? 0 : 1;

 for (;;)
 {
  VAR_12 = FUNC_1(VAR_7);
  FUNC_8(VAR_11, VAR_5, VAR_12);
  VAR_13 = (BTPageOpaque) FUNC_6(VAR_12);

  if (FUNC_5(VAR_13))
   break;




  if (VAR_8 && FUNC_4(VAR_13))
  {
   BlockNumber VAR_15 = FUNC_0(VAR_7);


   if (VAR_10 == VAR_0)
   {
    FUNC_2(VAR_7, VAR_2);
    FUNC_2(VAR_7, VAR_1);
   }

   if (FUNC_4(VAR_13))
    FUNC_10(VAR_5, VAR_7, VAR_9);
   else
    FUNC_13(VAR_5, VAR_7);


   VAR_7 = FUNC_11(VAR_5, VAR_15, VAR_10);
   continue;
  }

  if (FUNC_3(VAR_13) || FUNC_9(VAR_5, VAR_6, VAR_12, VAR_4) >= VAR_14)
  {

   VAR_7 = FUNC_12(VAR_5, VAR_7, VAR_13->btpo_next, VAR_10);
   continue;
  }
  else
   break;
 }

 if (FUNC_3(VAR_13))
  FUNC_14(VAR_3, "fell off the end of index \"%s\"",
    FUNC_7(VAR_5));

 return VAR_7;
}
