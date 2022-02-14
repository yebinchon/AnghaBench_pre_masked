
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32 ;
typedef int standby_sysid ;
typedef scalar_t__ pgsocket ;
typedef int XLogRecPtr ;
struct TYPE_9__ {char* startpointTLI; } ;
struct TYPE_10__ {TYPE_1__ physical; } ;
struct TYPE_11__ {int logical; int startpoint; char* slotname; TYPE_2__ proto; } ;
typedef TYPE_3__ WalRcvStreamOptions ;
struct TYPE_12__ {scalar_t__ pid; int walRcvState; int ready_to_display; int receiveStart; char* receiveStartTLI; int sender_port; int force_reply; int * latch; int mutex; scalar_t__ sender_host; scalar_t__ conninfo; scalar_t__ latestWalEndTime; scalar_t__ lastMsgReceiptTime; scalar_t__ lastMsgSendTime; scalar_t__ slotname; } ;
typedef TYPE_4__ WalRcvData ;
typedef scalar_t__ TimestampTz ;
typedef char* TimeLineID ;
struct TYPE_14__ {int Write; int Flush; } ;
struct TYPE_13__ {int procLatch; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 TYPE_8__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_7__* VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 char* VAR_28 ;
 scalar_t__ FUNC_11 (scalar_t__,int) ;
 char* VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;






 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_12 (int *,int,scalar_t__,int ,int ) ;
 TYPE_4__* VAR_36 ;
 int VAR_37 ;
 int FUNC_13 (char*,char*) ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_14 (int*,char**) ;
 int * VAR_42 ;
 int FUNC_15 (char*) ;
 scalar_t__ VAR_43 ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*,int ,int ,int ) ;
 char* FUNC_18 (int ,int ) ;
 int FUNC_19 (int) ;
 int FUNC_20 (char,char*,int) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int,int) ;
 scalar_t__ FUNC_23 (int) ;
 char* VAR_44 ;
 int FUNC_24 (int ,char*) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 () ;
 int FUNC_27 (char*,char*,char*,...) ;
 int FUNC_28 (char*,...) ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_29 (int *) ;
 int FUNC_30 (char*,int) ;
 int FUNC_31 (scalar_t__,int ,int) ;
 int FUNC_32 (int ,int ) ;
 int FUNC_33 (char*) ;
 int FUNC_34 () ;
 int FUNC_35 (int ,int ) ;
 int FUNC_36 (int) ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int FUNC_37 (int *,int ) ;
 int FUNC_38 (char*,int,char*,int ) ;
 scalar_t__ FUNC_39 (char*,char*) ;
 int FUNC_40 (char*,char*,int) ;
 int VAR_51 ;
 int VAR_52 ;
 int FUNC_41 (char*,int,char*,char**) ;
 int FUNC_42 (int ,char**) ;
 char* FUNC_43 (int ) ;
 int FUNC_44 (int ,char**,int*) ;
 char* FUNC_45 (int ,char**) ;
 int FUNC_46 (int ,char**,scalar_t__*) ;
 scalar_t__ FUNC_47 (int ,TYPE_3__*) ;
 int VAR_53 ;

void
FUNC_48(void)
{
 char VAR_54[VAR_7];
 char *VAR_55;
 char VAR_56[VAR_11];
 XLogRecPtr VAR_57;
 TimeLineID VAR_58;
 TimeLineID VAR_59;
 bool VAR_60;
 WalRcvData *VAR_61 = VAR_36;
 TimestampTz VAR_62;
 TimestampTz VAR_63;
 bool VAR_64;
 char *VAR_65;
 char *VAR_66 = ((void*)0);
 int VAR_67 = 0;





 FUNC_0(VAR_61 != ((void*)0));

 VAR_63 = FUNC_1();
 FUNC_9(&VAR_61->mutex);
 FUNC_0(VAR_61->pid == 0);
 switch (VAR_61->walRcvState)
 {
  case 130:

   VAR_61->walRcvState = 131;


  case 131:
   FUNC_10(&VAR_61->mutex);
   FUNC_36(1);
   break;

  case 132:

   break;

  case 128:
  case 129:
  case 133:
  default:

   FUNC_10(&VAR_61->mutex);
   FUNC_24(VAR_14, "walreceiver still running according to shared memory state");
 }

 VAR_61->pid = VAR_10;
 VAR_61->walRcvState = 129;


 VAR_61->ready_to_display = 0;
 FUNC_40(VAR_54, (char *) VAR_61->conninfo, VAR_7);
 FUNC_40(VAR_56, (char *) VAR_61->slotname, VAR_11);
 VAR_57 = VAR_61->receiveStart;
 VAR_58 = VAR_61->receiveStartTLI;


 VAR_61->lastMsgSendTime =
  VAR_61->lastMsgReceiptTime = VAR_61->latestWalEndTime = VAR_63;


 VAR_61->latch = &VAR_9->procLatch;

 FUNC_10(&VAR_61->mutex);


 FUNC_32(VAR_37, 0);


 FUNC_35(VAR_19, VAR_40);
 FUNC_35(VAR_20, VAR_27);
 FUNC_35(VAR_23, VAR_39);
 FUNC_35(VAR_22, VAR_38);
 FUNC_35(VAR_17, VAR_27);
 FUNC_35(VAR_21, VAR_27);
 FUNC_35(VAR_24, VAR_41);
 FUNC_35(VAR_25, VAR_27);


 FUNC_35(VAR_18, VAR_26);


 FUNC_37(&VAR_1, VAR_22);


 FUNC_30("libpqwalreceiver", 0);
 if (VAR_42 == ((void*)0))
  FUNC_24(VAR_3, "libpqwalreceiver didn't initialize correctly");


 FUNC_4(&VAR_30);


 VAR_53 = FUNC_41(VAR_54, 0, VAR_44[0] ? VAR_44 : "walreceiver", &VAR_65);
 if (!VAR_53)
  FUNC_25(VAR_3,
    (FUNC_28("could not connect to the primary server: %s", VAR_65)));






 VAR_55 = FUNC_43(VAR_53);
 FUNC_44(VAR_53, &VAR_66, &VAR_67);
 FUNC_9(&VAR_61->mutex);
 FUNC_31(VAR_61->conninfo, 0, VAR_7);
 if (VAR_55)
  FUNC_40((char *) VAR_61->conninfo, VAR_55, VAR_7);

 FUNC_31(VAR_61->sender_host, 0, VAR_13);
 if (VAR_66)
  FUNC_40((char *) VAR_61->sender_host, VAR_66, VAR_13);

 VAR_61->sender_port = VAR_67;
 VAR_61->ready_to_display = 1;
 FUNC_10(&VAR_61->mutex);

 if (VAR_55)
  FUNC_33(VAR_55);

 if (VAR_66)
  FUNC_33(VAR_66);

 VAR_60 = 1;
 for (;;)
 {
  char *VAR_68;
  char VAR_69[32];
  WalRcvStreamOptions VAR_70;





  VAR_68 = FUNC_45(VAR_53, &VAR_59);

  FUNC_38(VAR_69, sizeof(VAR_69), VAR_29,
     FUNC_2());
  if (FUNC_39(VAR_68, VAR_69) != 0)
  {
   FUNC_25(VAR_3,
     (FUNC_28("database system identifier differs between the primary and standby"),
      FUNC_27("The primary's identifier is %s, the standby's identifier is %s.",
          VAR_68, VAR_69)));
  }





  if (VAR_59 < VAR_58)
   FUNC_25(VAR_3,
     (FUNC_28("highest timeline %u of the primary is behind recovery timeline %u",
       VAR_59, VAR_58)));
  FUNC_13(VAR_58, VAR_59);
  VAR_70.logical = 0;
  VAR_70.startpoint = VAR_57;
  VAR_70.slotname = VAR_56[0] != '\0' ? VAR_56 : ((void*)0);
  VAR_70.proto.physical.startpointTLI = VAR_58;
  VAR_28 = VAR_58;
  if (FUNC_47(VAR_53, &VAR_70))
  {
   if (VAR_60)
    FUNC_25(VAR_5,
      (FUNC_28("started streaming WAL from primary at %X/%X on timeline %u",
        (uint32) (VAR_57 >> 32), (uint32) VAR_57,
        VAR_58)));
   else
    FUNC_25(VAR_5,
      (FUNC_28("restarted WAL streaming at %X/%X on timeline %u",
        (uint32) (VAR_57 >> 32), (uint32) VAR_57,
        VAR_58)));
   VAR_60 = 0;


   VAR_6.Write = VAR_6.Flush = FUNC_3(((void*)0));
   FUNC_29(&VAR_50);
   FUNC_29(&VAR_46);


   VAR_62 = FUNC_1();
   VAR_64 = 0;


   for (;;)
   {
    char *VAR_71;
    int VAR_72;
    bool VAR_73 = 0;
    pgsocket VAR_74 = VAR_16;
    int VAR_75;





    if (!FUNC_7())
     FUNC_25(VAR_4,
       (FUNC_28("cannot continue WAL streaming, recovery has already ended")));


    FUNC_6();

    if (VAR_45)
    {
     VAR_45 = 0;
     FUNC_5(VAR_15);
     FUNC_21(1);
    }


    VAR_72 = FUNC_46(VAR_53, &VAR_71, &VAR_74);
    if (VAR_72 != 0)
    {




     for (;;)
     {
      if (VAR_72 > 0)
      {




       VAR_62 = FUNC_1();
       VAR_64 = 0;
       FUNC_20(VAR_71[0], &VAR_71[1], VAR_72 - 1);
      }
      else if (VAR_72 == 0)
       break;
      else if (VAR_72 < 0)
      {
       FUNC_25(VAR_5,
         (FUNC_28("replication terminated by primary server"),
          FUNC_27("End of WAL reached on timeline %u at %X/%X.",
              VAR_58,
              (uint32) (VAR_6.Write >> 32), (uint32) VAR_6.Write)));
       VAR_73 = 1;
       break;
      }
      VAR_72 = FUNC_46(VAR_53, &VAR_71, &VAR_74);
     }


     FUNC_22(0, 0);






     FUNC_19(0);
    }


    if (VAR_73)
     break;
    FUNC_0(VAR_74 != VAR_16);
    VAR_75 = FUNC_12(VAR_61->latch,
            VAR_32 | VAR_34 |
            VAR_35 | VAR_33,
            VAR_74,
            VAR_12,
            VAR_31);
    if (VAR_75 & VAR_33)
    {
     FUNC_8(VAR_61->latch);
     FUNC_6();

     if (VAR_61->force_reply)
     {






      VAR_61->force_reply = 0;
      FUNC_34();
      FUNC_22(1, 0);
     }
    }
    if (VAR_75 & VAR_35)
    {
     bool VAR_76 = 0;





     if (VAR_51 > 0)
     {
      TimestampTz VAR_77 = FUNC_1();
      TimestampTz VAR_78;

      VAR_78 =
       FUNC_11(VAR_62,
              VAR_51);

      if (VAR_77 >= VAR_78)
       FUNC_25(VAR_3,
         (FUNC_28("terminating walreceiver due to timeout")));





      if (!VAR_64)
      {
       VAR_78 = FUNC_11(VAR_62,
                  (VAR_51 / 2));
       if (VAR_77 >= VAR_78)
       {
        VAR_76 = 1;
        VAR_64 = 1;
       }
      }
     }

     FUNC_22(VAR_76, VAR_76);
     FUNC_21(0);
    }
   }





   FUNC_42(VAR_53, &VAR_59);






   FUNC_13(VAR_58, VAR_59);
  }
  else
   FUNC_25(VAR_5,
     (FUNC_28("primary server contains no more WAL on requested timeline %u",
       VAR_58)));





  if (VAR_47 >= 0)
  {
   char VAR_79[VAR_8];

   FUNC_19(0);
   if (FUNC_23(VAR_47) != 0)
    FUNC_25(VAR_14,
      (FUNC_26(),
       FUNC_28("could not close log segment %s: %m",
        FUNC_18(VAR_48, VAR_49))));





   FUNC_17(VAR_79, VAR_48, VAR_49, VAR_52);
   if (VAR_43 != VAR_0)
    FUNC_15(VAR_79);
   else
    FUNC_16(VAR_79);
  }
  VAR_47 = -1;

  FUNC_24(VAR_2, "walreceiver ended streaming and awaits new instructions");
  FUNC_14(&VAR_57, &VAR_58);
 }

}
