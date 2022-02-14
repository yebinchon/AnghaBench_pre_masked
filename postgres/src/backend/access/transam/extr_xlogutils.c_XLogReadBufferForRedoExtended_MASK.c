
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint8 ;
typedef int XLogRedoAction ;
typedef scalar_t__ XLogRecPtr ;
struct TYPE_9__ {scalar_t__ EndRecPtr; TYPE_1__* blocks; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_8__ {int flags; } ;
typedef int RelFileNode ;
typedef int ReadBufferMode ;
typedef int Page ;
typedef scalar_t__ ForkNumber ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (TYPE_2__*,size_t,int ) ;
 int FUNC_11 (int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_12 (TYPE_2__*,size_t) ;
 int FUNC_13 (TYPE_2__*,size_t,int *,scalar_t__*,int *) ;
 int FUNC_14 (TYPE_2__*,size_t) ;
 int FUNC_15 (int ,char*,...) ;

XLogRedoAction
FUNC_16(XLogReaderState *VAR_11,
         uint8 VAR_12,
         ReadBufferMode VAR_13, bool VAR_14,
         Buffer *VAR_15)
{
 XLogRecPtr VAR_16 = VAR_11->EndRecPtr;
 RelFileNode VAR_17;
 ForkNumber VAR_18;
 BlockNumber VAR_19;
 Page VAR_20;
 bool VAR_21;
 bool VAR_22;

 if (!FUNC_13(VAR_11, VAR_12, &VAR_17, &VAR_18, &VAR_19))
 {

  FUNC_15(VAR_8, "failed to locate backup block with ID %d", VAR_12);
 }





 VAR_21 = (VAR_13 == VAR_10 || VAR_13 == VAR_9);
 VAR_22 = (VAR_11->blocks[VAR_12].flags & VAR_0) != 0;
 if (VAR_22 && !VAR_21)
  FUNC_15(VAR_8, "block with WILL_INIT flag in WAL record must be zeroed by redo routine");
 if (!VAR_22 && VAR_21)
  FUNC_15(VAR_8, "block to be initialized in redo routine must be marked with WILL_INIT flag in the WAL record");


 if (FUNC_12(VAR_11, VAR_12))
 {
  FUNC_0(FUNC_14(VAR_11, VAR_12));
  *VAR_15 = FUNC_11(VAR_17, VAR_18, VAR_19,
           VAR_14 ? VAR_9 : VAR_10);
  VAR_20 = FUNC_1(*VAR_15);
  if (!FUNC_10(VAR_11, VAR_12, VAR_20))
   FUNC_15(VAR_6, "failed to restore block image");





  if (!FUNC_8(VAR_20))
  {
   FUNC_9(VAR_20, VAR_16);
  }

  FUNC_6(*VAR_15);







  if (VAR_18 == VAR_7)
   FUNC_3(*VAR_15);

  return VAR_4;
 }
 else
 {
  *VAR_15 = FUNC_11(VAR_17, VAR_18, VAR_19, VAR_13);
  if (FUNC_2(*VAR_15))
  {
   if (VAR_13 != VAR_10 && VAR_13 != VAR_9)
   {
    if (VAR_14)
     FUNC_5(*VAR_15);
    else
     FUNC_4(*VAR_15, VAR_5);
   }
   if (VAR_16 <= FUNC_7(FUNC_1(*VAR_15)))
    return VAR_1;
   else
    return VAR_2;
  }
  else
   return VAR_3;
 }
}
