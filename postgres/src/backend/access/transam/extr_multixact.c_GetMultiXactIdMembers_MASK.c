
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32 ;
typedef int TransactionId ;
struct TYPE_14__ {scalar_t__ oldestMultiXactId; scalar_t__ nextMXact; scalar_t__ nextOffset; } ;
struct TYPE_13__ {TYPE_1__* shared; } ;
struct TYPE_12__ {int status; int xid; } ;
struct TYPE_11__ {scalar_t__* page_buffer; } ;
typedef scalar_t__ MultiXactOffset ;
typedef TYPE_2__ MultiXactMember ;
typedef scalar_t__ MultiXactId ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 () ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int VAR_8 ;
 TYPE_6__* VAR_9 ;
 int VAR_10 ;
 TYPE_6__* VAR_11 ;
 TYPE_7__* VAR_12 ;
 size_t VAR_13 ;
 scalar_t__* VAR_14 ;
 int FUNC_13 (TYPE_6__*,int,int,scalar_t__) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (int ,char*,scalar_t__) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (char*,scalar_t__) ;
 int FUNC_20 (scalar_t__,TYPE_2__**) ;
 int FUNC_21 (scalar_t__,int,TYPE_2__*) ;
 scalar_t__ FUNC_22 (scalar_t__,int,TYPE_2__*) ;
 scalar_t__ FUNC_23 (int) ;
 int FUNC_24 (long) ;

int
FUNC_25(MultiXactId VAR_15, MultiXactMember **VAR_16,
       bool VAR_17, bool VAR_18)
{
 int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 MultiXactOffset *VAR_23;
 MultiXactOffset VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 MultiXactId VAR_28;
 MultiXactId VAR_29;
 MultiXactId VAR_30;
 MultiXactOffset VAR_31;
 MultiXactMember *VAR_32;

 FUNC_16(VAR_0, "GetMembers: asked for %u", VAR_15);

 if (!FUNC_8(VAR_15) || VAR_17)
  return -1;


 VAR_25 = FUNC_20(VAR_15, VAR_16);
 if (VAR_25 >= 0)
 {
  FUNC_16(VAR_0, "GetMembers: found %s in the cache",
     FUNC_22(VAR_15, VAR_25, *VAR_16));
  return VAR_25;
 }


 FUNC_10();






 if (VAR_18 &&
  FUNC_9(VAR_15, VAR_14[VAR_13]))
 {
  FUNC_15(VAR_0, "GetMembers: a locker-only multi is too old");
  *VAR_16 = ((void*)0);
  return -1;
 }
 FUNC_2(VAR_7, VAR_5);

 VAR_28 = VAR_12->oldestMultiXactId;
 VAR_29 = VAR_12->nextMXact;
 VAR_31 = VAR_12->nextOffset;

 FUNC_3(VAR_7);

 if (FUNC_9(VAR_15, VAR_28))
 {
  FUNC_17(VAR_2,
    (FUNC_18(VAR_1),
     FUNC_19("MultiXactId %u does no longer exist -- apparent wraparound",
      VAR_15)));
  return -1;
 }

 if (!FUNC_9(VAR_15, VAR_29))
  FUNC_17(VAR_2,
    (FUNC_18(VAR_1),
     FUNC_19("MultiXactId %u has not been created yet -- apparent wraparound",
      VAR_15)));
retry:
 FUNC_2(VAR_10, VAR_4);

 VAR_19 = FUNC_12(VAR_15);
 VAR_21 = FUNC_11(VAR_15);

 VAR_22 = FUNC_13(VAR_11, VAR_19, 1, VAR_15);
 VAR_23 = (MultiXactOffset *) VAR_11->shared->page_buffer[VAR_22];
 VAR_23 += VAR_21;
 VAR_24 = *VAR_23;

 FUNC_0(VAR_24 != 0);





 VAR_30 = VAR_15 + 1;

 if (VAR_29 == VAR_30)
 {

  VAR_25 = VAR_31 - VAR_24;
 }
 else
 {
  MultiXactOffset VAR_33;


  if (VAR_30 < VAR_3)
   VAR_30 = VAR_3;

  VAR_20 = VAR_19;

  VAR_19 = FUNC_12(VAR_30);
  VAR_21 = FUNC_11(VAR_30);

  if (VAR_19 != VAR_20)
   VAR_22 = FUNC_13(VAR_11, VAR_19, 1, VAR_30);

  VAR_23 = (MultiXactOffset *) VAR_11->shared->page_buffer[VAR_22];
  VAR_23 += VAR_21;
  VAR_33 = *VAR_23;

  if (VAR_33 == 0)
  {

   FUNC_3(VAR_10);
   FUNC_1();
   FUNC_24(1000L);
   goto retry;
  }

  VAR_25 = VAR_33 - VAR_24;
 }

 FUNC_3(VAR_10);

 VAR_32 = (MultiXactMember *) FUNC_23(VAR_25 * sizeof(MultiXactMember));
 *VAR_16 = VAR_32;


 FUNC_2(VAR_8, VAR_4);

 VAR_26 = 0;
 VAR_20 = -1;
 for (VAR_27 = 0; VAR_27 < VAR_25; VAR_27++, VAR_24++)
 {
  TransactionId *VAR_34;
  uint32 *VAR_35;
  int VAR_36;
  int VAR_37;
  int VAR_38;

  VAR_19 = FUNC_7(VAR_24);
  VAR_38 = FUNC_6(VAR_24);

  if (VAR_19 != VAR_20)
  {
   VAR_22 = FUNC_13(VAR_9, VAR_19, 1, VAR_15);
   VAR_20 = VAR_19;
  }

  VAR_34 = (TransactionId *)
   (VAR_9->shared->page_buffer[VAR_22] + VAR_38);

  if (!FUNC_14(*VAR_34))
  {

   FUNC_0(VAR_24 == 0);
   continue;
  }

  VAR_36 = FUNC_5(VAR_24);
  VAR_37 = FUNC_4(VAR_24);
  VAR_35 = (uint32 *) (VAR_9->shared->page_buffer[VAR_22] + VAR_36);

  VAR_32[VAR_26].xid = *VAR_34;
  VAR_32[VAR_26].status = (*VAR_35 >> VAR_37) & VAR_6;
  VAR_26++;
 }

 FUNC_3(VAR_8);




 FUNC_21(VAR_15, VAR_26, VAR_32);

 FUNC_16(VAR_0, "GetMembers: no cache for %s",
    FUNC_22(VAR_15, VAR_26, VAR_32));
 return VAR_26;
}
