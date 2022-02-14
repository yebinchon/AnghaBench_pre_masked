
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_9__ {int atEnd; int atStart; scalar_t__ portalPos; int cursorOptions; int run_once; scalar_t__ holdStore; TYPE_2__* queryDesc; } ;
struct TYPE_8__ {TYPE_1__* estate; int snapshot; int * dest; } ;
struct TYPE_7__ {scalar_t__ es_processed; } ;
typedef int ScanDirection ;
typedef TYPE_2__ QueryDesc ;
typedef TYPE_3__* Portal ;
typedef int DestReceiver ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,scalar_t__,int ) ;
 long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ,scalar_t__,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static uint64
FUNC_10(Portal VAR_7,
    bool VAR_8,
    long VAR_9,
    DestReceiver *VAR_10)
{
 QueryDesc *VAR_11;
 ScanDirection VAR_12;
 uint64 VAR_13;





 VAR_11 = VAR_7->queryDesc;


 FUNC_0(VAR_11 || VAR_7->holdStore);







 if (VAR_11)
  VAR_11->dest = VAR_10;
 if (VAR_8)
 {
  if (VAR_7->atEnd || VAR_9 <= 0)
  {
   VAR_12 = VAR_6;
   VAR_9 = 0;
  }
  else
   VAR_12 = VAR_5;


  if (VAR_9 == VAR_4)
   VAR_9 = 0;

  if (VAR_7->holdStore)
   VAR_13 = FUNC_4(VAR_7, VAR_12, (uint64) VAR_9, VAR_10);
  else
  {
   FUNC_3(VAR_11->snapshot);
   FUNC_1(VAR_11, VAR_12, (uint64) VAR_9,
      VAR_7->run_once);
   VAR_13 = VAR_11->estate->es_processed;
   FUNC_2();
  }

  if (!FUNC_5(VAR_12))
  {
   if (VAR_13 > 0)
    VAR_7->atStart = 0;
   if (VAR_9 == 0 || VAR_13 < (uint64) VAR_9)
    VAR_7->atEnd = 1;
   VAR_7->portalPos += VAR_13;
  }
 }
 else
 {
  if (VAR_7->cursorOptions & VAR_1)
   FUNC_6(VAR_3,
     (FUNC_7(VAR_2),
      FUNC_9("cursor can only scan forward"),
      FUNC_8("Declare it with SCROLL option to enable backward scan.")));

  if (VAR_7->atStart || VAR_9 <= 0)
  {
   VAR_12 = VAR_6;
   VAR_9 = 0;
  }
  else
   VAR_12 = VAR_0;


  if (VAR_9 == VAR_4)
   VAR_9 = 0;

  if (VAR_7->holdStore)
   VAR_13 = FUNC_4(VAR_7, VAR_12, (uint64) VAR_9, VAR_10);
  else
  {
   FUNC_3(VAR_11->snapshot);
   FUNC_1(VAR_11, VAR_12, (uint64) VAR_9,
      VAR_7->run_once);
   VAR_13 = VAR_11->estate->es_processed;
   FUNC_2();
  }

  if (!FUNC_5(VAR_12))
  {
   if (VAR_13 > 0 && VAR_7->atEnd)
   {
    VAR_7->atEnd = 0;
    VAR_7->portalPos++;
   }
   if (VAR_9 == 0 || VAR_13 < (uint64) VAR_9)
   {
    VAR_7->atStart = 1;
    VAR_7->portalPos = 0;
   }
   else
   {
    VAR_7->portalPos -= VAR_13;
   }
  }
 }

 return VAR_13;
}
