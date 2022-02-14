
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_7__ {int shared_blks_dirtied; } ;
struct TYPE_6__ {int state; } ;
typedef TYPE_1__ BufferDesc ;
typedef scalar_t__ Buffer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_3 ;
 TYPE_1__* FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 int VAR_4 ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,char*,scalar_t__) ;
 TYPE_2__ VAR_9 ;
 scalar_t__ FUNC_11 (int *,int*,int) ;
 int FUNC_12 (int *) ;

void
FUNC_13(Buffer VAR_10)
{
 BufferDesc *VAR_11;
 uint32 VAR_12;
 uint32 VAR_13;

 if (!FUNC_5(VAR_10))
  FUNC_10(VAR_3, "bad buffer ID: %d", VAR_10);

 if (FUNC_3(VAR_10))
 {
  FUNC_8(VAR_10);
  return;
 }

 VAR_11 = FUNC_6(VAR_10 - 1);

 FUNC_0(FUNC_4(VAR_10));
 FUNC_0(FUNC_7(FUNC_2(VAR_11),
        VAR_4));

 VAR_13 = FUNC_12(&VAR_11->state);
 for (;;)
 {
  if (VAR_13 & VAR_2)
   VAR_13 = FUNC_9(VAR_11);

  VAR_12 = VAR_13;

  FUNC_0(FUNC_1(VAR_12) > 0);
  VAR_12 |= VAR_0 | VAR_1;

  if (FUNC_11(&VAR_11->state, &VAR_13,
             VAR_12))
   break;
 }




 if (!(VAR_13 & VAR_0))
 {
  VAR_8++;
  VAR_9.shared_blks_dirtied++;
  if (VAR_5)
   VAR_6 += VAR_7;
 }
}
