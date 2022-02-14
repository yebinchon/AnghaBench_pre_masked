
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int instr_time ;
struct TYPE_3__ {int rel_pages; int nonempty_pages; int lock_waiter_detected; } ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef TYPE_1__ LVRelStats ;
typedef int ItemId ;
typedef int Buffer ;
typedef int BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_9 (int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int) ;
 int VAR_6 ;
 int FUNC_14 (int ,int ,int,int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int,char*) ;
 int FUNC_17 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (char*,int ) ;
 int VAR_9 ;

__attribute__((used)) static BlockNumber
FUNC_20(Relation VAR_10, LVRelStats *VAR_11)
{
 BlockNumber VAR_12;
 BlockNumber VAR_13;
 instr_time VAR_14;


 FUNC_3(VAR_14);







 VAR_12 = VAR_11->rel_pages;
 FUNC_16((VAR_5 & (VAR_5 - 1)) == 0,
      "prefetch size must be power of 2");
 VAR_13 = VAR_3;
 while (VAR_12 > VAR_11->nonempty_pages)
 {
  Buffer VAR_15;
  Page VAR_16;
  OffsetNumber VAR_17,
     VAR_18;
  bool VAR_19;
  if ((VAR_12 % 32) == 0)
  {
   instr_time VAR_20;
   instr_time VAR_21;

   FUNC_3(VAR_20);
   VAR_21 = VAR_20;
   FUNC_4(VAR_21, VAR_14);
   if ((FUNC_2(VAR_21) / 1000)
    >= VAR_7)
   {
    if (FUNC_7(VAR_10, VAR_0))
    {
     FUNC_18(VAR_8,
       (FUNC_19("\"%s\": suspending truncate due to conflicting lock request",
         FUNC_15(VAR_10))));

     VAR_11->lock_waiter_detected = 1;
     return VAR_12;
    }
    VAR_14 = VAR_20;
   }
  }






  FUNC_1();

  VAR_12--;


  if (VAR_13 > VAR_12)
  {
   BlockNumber VAR_22;
   BlockNumber VAR_23;

   VAR_22 = VAR_12 & ~(VAR_5 - 1);
   for (VAR_23 = VAR_22; VAR_23 <= VAR_12; VAR_23++)
   {
    FUNC_13(VAR_10, VAR_4, VAR_23);
    FUNC_1();
   }
   VAR_13 = VAR_22;
  }

  VAR_15 = FUNC_14(VAR_10, VAR_4, VAR_12,
         VAR_6, VAR_9);


  FUNC_6(VAR_15, VAR_1);

  VAR_16 = FUNC_0(VAR_15);

  if (FUNC_12(VAR_16) || FUNC_11(VAR_16))
  {
   FUNC_17(VAR_15);
   continue;
  }

  VAR_19 = 0;
  VAR_18 = FUNC_10(VAR_16);
  for (VAR_17 = VAR_2;
    VAR_17 <= VAR_18;
    VAR_17 = FUNC_8(VAR_17))
  {
   ItemId VAR_24;

   VAR_24 = FUNC_9(VAR_16, VAR_17);







   if (FUNC_5(VAR_24))
   {
    VAR_19 = 1;
    break;
   }
  }

  FUNC_17(VAR_15);


  if (VAR_19)
   return VAR_12 + 1;
 }






 return VAR_11->nonempty_pages;
}
