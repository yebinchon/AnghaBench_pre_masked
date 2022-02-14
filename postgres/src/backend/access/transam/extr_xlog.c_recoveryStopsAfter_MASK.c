
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ twophase_xid; } ;
typedef TYPE_1__ xl_xact_parsed_commit ;
struct TYPE_14__ {scalar_t__ twophase_xid; } ;
typedef TYPE_2__ xl_xact_parsed_abort ;
typedef int xl_xact_commit ;
typedef int xl_xact_abort ;
struct TYPE_15__ {int rp_name; } ;
typedef TYPE_3__ xl_restore_point ;
typedef scalar_t__ uint8 ;
typedef int uint32 ;
struct TYPE_16__ {scalar_t__ ReadRecPtr; } ;
typedef TYPE_4__ XLogReaderState ;
typedef scalar_t__ TransactionId ;
typedef scalar_t__ TimestampTz ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int *,TYPE_2__*) ;
 int FUNC_1 (scalar_t__,int *,TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ FUNC_9 (TYPE_4__*,scalar_t__*) ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 char* VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (char*,int ,int ) ;
 int FUNC_12 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_13(XLogReaderState *VAR_29)
{
 uint8 VAR_30;
 uint8 VAR_31;
 uint8 VAR_32;
 TimestampTz VAR_33;





 if (!VAR_0)
  return 0;

 VAR_30 = FUNC_4(VAR_29) & ~VAR_17;
 VAR_32 = FUNC_5(VAR_29);





 if (VAR_24 == VAR_7 &&
  VAR_32 == VAR_10 && VAR_30 == VAR_11)
 {
  xl_restore_point *VAR_34;

  VAR_34 = (xl_restore_point *) FUNC_3(VAR_29);

  if (FUNC_10(VAR_34->rp_name, VAR_27) == 0)
  {
   VAR_19 = 1;
   VAR_23 = VAR_1;
   VAR_20 = VAR_2;
   (void) FUNC_9(VAR_29, &VAR_22);
   FUNC_11(VAR_21, VAR_34->rp_name, VAR_4);

   FUNC_7(VAR_3,
     (FUNC_8("recovery stopping at restore point \"%s\", time %s",
       VAR_21,
       FUNC_12(VAR_22))));
   return 1;
  }
 }


 if (VAR_24 == VAR_6 &&
  VAR_25 &&
  VAR_29->ReadRecPtr >= VAR_26)
 {
  VAR_19 = 1;
  VAR_23 = VAR_1;
  VAR_20 = VAR_29->ReadRecPtr;
  VAR_22 = 0;
  VAR_21[0] = '\0';
  FUNC_7(VAR_3,
    (FUNC_8("recovery stopping after WAL location (LSN) \"%X/%X\"",
      (uint32) (VAR_20 >> 32),
      (uint32) VAR_20)));
  return 1;
 }

 if (VAR_32 != VAR_9)
  return 0;

 VAR_31 = VAR_30 & VAR_16;

 if (VAR_31 == VAR_14 ||
  VAR_31 == VAR_15 ||
  VAR_31 == VAR_12 ||
  VAR_31 == VAR_13)
 {
  TransactionId VAR_35;


  if (FUNC_9(VAR_29, &VAR_33))
   FUNC_2(VAR_33);


  if (VAR_31 == VAR_15)
  {
   xl_xact_commit *VAR_36 = (xl_xact_commit *) FUNC_3(VAR_29);
   xl_xact_parsed_commit VAR_37;

   FUNC_1(FUNC_4(VAR_29),
         VAR_36,
         &VAR_37);
   VAR_35 = VAR_37.twophase_xid;
  }
  else if (VAR_31 == VAR_13)
  {
   xl_xact_abort *VAR_38 = (xl_xact_abort *) FUNC_3(VAR_29);
   xl_xact_parsed_abort VAR_39;

   FUNC_0(FUNC_4(VAR_29),
        VAR_38,
        &VAR_39);
   VAR_35 = VAR_39.twophase_xid;
  }
  else
   VAR_35 = FUNC_6(VAR_29);
  if (VAR_24 == VAR_8 && VAR_25 &&
   VAR_35 == VAR_28)
  {
   VAR_19 = 1;
   VAR_23 = VAR_35;
   VAR_22 = VAR_33;
   VAR_20 = VAR_2;
   VAR_21[0] = '\0';

   if (VAR_31 == VAR_14 ||
    VAR_31 == VAR_15)
   {
    FUNC_7(VAR_3,
      (FUNC_8("recovery stopping after commit of transaction %u, time %s",
        VAR_23,
        FUNC_12(VAR_22))));
   }
   else if (VAR_31 == VAR_12 ||
      VAR_31 == VAR_13)
   {
    FUNC_7(VAR_3,
      (FUNC_8("recovery stopping after abort of transaction %u, time %s",
        VAR_23,
        FUNC_12(VAR_22))));
   }
   return 1;
  }
 }


 if (VAR_24 == VAR_5 && VAR_18)
 {
  FUNC_7(VAR_3,
    (FUNC_8("recovery stopping after reaching consistency")));

  VAR_19 = 1;
  VAR_23 = VAR_1;
  VAR_22 = 0;
  VAR_20 = VAR_2;
  VAR_21[0] = '\0';
  return 1;
 }

 return 0;
}
