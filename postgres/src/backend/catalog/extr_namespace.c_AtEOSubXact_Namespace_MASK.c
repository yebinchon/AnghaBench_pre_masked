
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {void* tempNamespaceId; } ;
struct TYPE_4__ {scalar_t__ nestLevel; int creationNamespace; int searchPath; } ;
typedef scalar_t__ SubTransactionId ;
typedef TYPE_1__ OverrideStackEntry ;


 scalar_t__ FUNC_0 () ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 void* VAR_11 ;
 scalar_t__ VAR_12 ;
 void* VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_5 (TYPE_1__*) ;

void
FUNC_6(bool VAR_15, SubTransactionId VAR_16,
       SubTransactionId VAR_17)
{
 OverrideStackEntry *VAR_18;

 if (VAR_12 == VAR_16)
 {
  if (VAR_15)
   VAR_12 = VAR_17;
  else
  {
   VAR_12 = VAR_1;

   VAR_11 = VAR_0;
   VAR_13 = VAR_0;
   VAR_9 = 0;
   VAR_2->tempNamespaceId = VAR_0;
  }
 }




 while (VAR_14)
 {
  VAR_18 = (OverrideStackEntry *) FUNC_2(VAR_14);
  if (VAR_18->nestLevel < FUNC_0())
   break;
  if (VAR_15)
   FUNC_1(VAR_3, "leaked override search path");
  VAR_14 = FUNC_3(VAR_14);
  FUNC_4(VAR_18->searchPath);
  FUNC_5(VAR_18);
 }


 if (VAR_14)
 {
  VAR_18 = (OverrideStackEntry *) FUNC_2(VAR_14);
  VAR_5 = VAR_18->searchPath;
  VAR_4 = VAR_18->creationNamespace;
  VAR_6 = 0;
 }
 else
 {

  VAR_5 = VAR_8;
  VAR_4 = VAR_7;
  VAR_6 = VAR_10;
 }
}
