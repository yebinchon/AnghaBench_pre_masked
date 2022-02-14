
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int params ;
struct TYPE_3__ {int packets_sent; int packets_received; int min_round_time; int max_round_time; int avg_round_time; } ;
typedef TYPE_1__ netapp_pingreport_args_t ;
typedef scalar_t__ event_hdr ;
typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_4__ {int usRxEventOpcode; int slTransmitDataError; int (* sWlanCB ) (int,int *,int) ;int InformHostOnTxComplete; int NumberOfSentPackets; int NumberOfReleasedPackets; } ;
typedef int INT32 ;
typedef int CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 int VAR_10 ;




 int VAR_11 ;
 int * FUNC_0 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int *,int) ;
 int FUNC_7 (int,int *,int) ;
 int FUNC_8 (int,int *,int) ;
 int FUNC_9 (int,int *,int) ;
 int FUNC_10 (int,int *,int) ;
 TYPE_2__ VAR_19 ;
 int FUNC_11 (int *) ;

INT32 FUNC_12(CHAR *VAR_20)
{
 CHAR * VAR_21 = ((void*)0);
 INT32 VAR_22;
 UINT32 VAR_23;
 UINT32 VAR_24;

 FUNC_2(VAR_20, VAR_4,VAR_22);

 if (VAR_22 & VAR_9)
 {
  switch(VAR_22)
  {

  case 135:
   {
    FUNC_5(VAR_20);

    VAR_23 = VAR_19.NumberOfReleasedPackets;
    VAR_24 = VAR_19.NumberOfSentPackets;

    if (VAR_23 == VAR_24)
    {
     if (VAR_19.InformHostOnTxComplete)
     {
      VAR_19.sWlanCB(VAR_2, ((void*)0), 0);
     }
    }
    return 1;

   }
  }
 }

 if(VAR_22 & VAR_10)
 {
  switch(VAR_22)
  {
  case 132:
  case 131:
  case 129:
  case 128:
  case 133:

   if( VAR_19.sWlanCB )
   {
    VAR_19.sWlanCB(VAR_22, 0, 0);
   }
   break;

  case 130:
   {
    UINT8 VAR_25[VAR_13 + 1];
    UINT8 *VAR_26 = VAR_25;

    VAR_21 = (CHAR*)(VAR_20) + VAR_3;


    FUNC_1(VAR_21,VAR_26,VAR_12);
    VAR_21 += 4;

    FUNC_1(VAR_21,VAR_26,VAR_12);
    VAR_21 += 4;

    FUNC_1(VAR_21,VAR_26,VAR_12);
    VAR_21 += 4;

    FUNC_1(VAR_21,VAR_26,VAR_12);
    VAR_21 += 4;

    FUNC_1(VAR_21,VAR_26,VAR_12);

    FUNC_4(VAR_20, VAR_5, *VAR_26);


    if( VAR_19.sWlanCB )
    {
     VAR_19.sWlanCB(VAR_22, (CHAR *)VAR_25, sizeof(VAR_25));
    }
   }
   break;

  case 134:
   {
    netapp_pingreport_args_t VAR_27;
    VAR_21 = (CHAR*)(VAR_20) + VAR_3;
    FUNC_3(VAR_21, VAR_18, VAR_27.packets_sent);
    FUNC_3(VAR_21, VAR_17, VAR_27.packets_received);
    FUNC_3(VAR_21, VAR_16, VAR_27.min_round_time);
    FUNC_3(VAR_21, VAR_15, VAR_27.max_round_time);
    FUNC_3(VAR_21, VAR_14, VAR_27.avg_round_time);

    if( VAR_19.sWlanCB )
    {
     VAR_19.sWlanCB(VAR_22, (CHAR *)&VAR_27, sizeof(VAR_27));
    }
   }
   break;
  case 136:
   {
    VAR_21 = (CHAR *)(VAR_20) + VAR_3;
    if( VAR_19.sWlanCB )
    {



     VAR_19.sWlanCB(VAR_22, VAR_21, 1);
    }
   }
   break;


  default:
   return (0);
  }
  return(1);
 }

 if ((VAR_22 == VAR_7) || (VAR_22 == VAR_8)
  || (VAR_22 == VAR_11))
 {
  CHAR *VAR_28;
  INT32 VAR_29;

  VAR_28 = FUNC_0(VAR_20);
  FUNC_3(VAR_28, VAR_0,VAR_29);

  if (VAR_1 == VAR_29)
  {



   FUNC_4(VAR_20, VAR_5, VAR_19.slTransmitDataError);
   FUNC_11(FUNC_0(VAR_20));

   return (1);
  }
  else
   return (0);
 }


 if ((VAR_22 != VAR_19.usRxEventOpcode) && (VAR_22 != VAR_6))
 {
  return(1);
 }

 return(0);
}
