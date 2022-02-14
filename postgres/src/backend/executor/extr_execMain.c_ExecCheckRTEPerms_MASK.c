
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rtekind; int requiredPerms; int updatedCols; int insertedCols; int selectedCols; scalar_t__ checkAsUser; scalar_t__ relid; } ;
typedef TYPE_1__ RangeTblEntry ;
typedef scalar_t__ Oid ;
typedef scalar_t__ AttrNumber ;
typedef int AclMode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__,int,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__,int,int ) ;

__attribute__((used)) static bool
FUNC_7(RangeTblEntry *VAR_9)
{
 AclMode VAR_10;
 AclMode VAR_11;
 AclMode VAR_12;
 Oid VAR_13;
 Oid VAR_14;






 if (VAR_9->rtekind != VAR_8)
  return 1;




 VAR_10 = VAR_9->requiredPerms;
 if (VAR_10 == 0)
  return 1;

 VAR_13 = VAR_9->relid;
 VAR_14 = VAR_9->checkAsUser ? VAR_9->checkAsUser : FUNC_1();






 VAR_11 = FUNC_6(VAR_13, VAR_14, VAR_10, VAR_1);
 VAR_12 = VAR_10 & ~VAR_11;
 if (VAR_12 != 0)
 {
  int VAR_15 = -1;





  if (VAR_12 & ~(VAR_4 | VAR_3 | VAR_5))
   return 0;
  if (VAR_12 & VAR_4)
  {





   if (FUNC_2(VAR_9->selectedCols))
   {
    if (FUNC_5(VAR_13, VAR_14, VAR_4,
             VAR_2) != VAR_0)
     return 0;
   }

   while ((VAR_15 = FUNC_3(VAR_9->selectedCols, VAR_15)) >= 0)
   {

    AttrNumber VAR_16 = VAR_15 + VAR_6;

    if (VAR_16 == VAR_7)
    {

     if (FUNC_5(VAR_13, VAR_14, VAR_4,
              VAR_1) != VAR_0)
      return 0;
    }
    else
    {
     if (FUNC_4(VAR_13, VAR_16, VAR_14,
             VAR_4) != VAR_0)
      return 0;
    }
   }
  }





  if (VAR_12 & VAR_3 && !FUNC_0(VAR_13,
                   VAR_14,
                   VAR_9->insertedCols,
                   VAR_3))
   return 0;

  if (VAR_12 & VAR_5 && !FUNC_0(VAR_13,
                   VAR_14,
                   VAR_9->updatedCols,
                   VAR_5))
   return 0;
 }
 return 1;
}
