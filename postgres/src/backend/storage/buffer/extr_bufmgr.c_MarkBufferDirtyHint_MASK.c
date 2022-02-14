
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32 ;
typedef int XLogRecPtr ;
struct TYPE_10__ {int delayChkpt; } ;
struct TYPE_9__ {int shared_blks_dirtied; } ;
struct TYPE_8__ {int state; } ;
typedef int Page ;
typedef TYPE_1__ BufferDesc ;
typedef scalar_t__ Buffer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_3 ;
 TYPE_1__* FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (scalar_t__) ;
 TYPE_4__* VAR_5 ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (TYPE_1__*,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (scalar_t__,int) ;
 int FUNC_17 (int ,char*,scalar_t__) ;
 TYPE_2__ VAR_10 ;
 int FUNC_18 (int *) ;

void
FUNC_19(Buffer VAR_11, bool VAR_12)
{
 BufferDesc *VAR_13;
 Page VAR_14 = FUNC_3(VAR_11);

 if (!FUNC_5(VAR_11))
  FUNC_17(VAR_3, "bad buffer ID: %d", VAR_11);

 if (FUNC_4(VAR_11))
 {
  FUNC_10(VAR_11);
  return;
 }

 VAR_13 = FUNC_6(VAR_11 - 1);

 FUNC_0(FUNC_7(VAR_11) > 0);

 FUNC_0(FUNC_8(FUNC_2(VAR_13)));
 if ((FUNC_18(&VAR_13->state) & (VAR_0 | VAR_1)) !=
  (VAR_0 | VAR_1))
 {
  XLogRecPtr VAR_15 = VAR_4;
  bool VAR_16 = 0;
  bool VAR_17 = 0;
  uint32 VAR_18;
  if (FUNC_14() &&
   (FUNC_18(&VAR_13->state) & VAR_2))
  {







   if (FUNC_12())
    return;
   VAR_5->delayChkpt = VAR_17 = 1;
   VAR_15 = FUNC_16(VAR_11, VAR_12);
  }

  VAR_18 = FUNC_9(VAR_13);

  FUNC_0(FUNC_1(VAR_18) > 0);

  if (!(VAR_18 & VAR_0))
  {
   VAR_16 = 1;
   if (!FUNC_15(VAR_15))
    FUNC_11(VAR_14, VAR_15);
  }

  VAR_18 |= VAR_0 | VAR_1;
  FUNC_13(VAR_13, VAR_18);

  if (VAR_17)
   VAR_5->delayChkpt = 0;

  if (VAR_16)
  {
   VAR_9++;
   VAR_10.shared_blks_dirtied++;
   if (VAR_6)
    VAR_7 += VAR_8;
  }
 }
}
