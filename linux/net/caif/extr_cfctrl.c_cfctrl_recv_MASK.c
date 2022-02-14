
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct cfpkt {int dummy; } ;
struct cflayer {int dummy; } ;
struct TYPE_12__ {int paramlen; int* params; scalar_t__ name; void* fifosize_bufs; void* fifosize_kb; } ;
struct TYPE_11__ {scalar_t__ volume; void* connid; } ;
struct TYPE_10__ {void* connid; } ;
struct TYPE_9__ {int connid; } ;
struct TYPE_13__ {TYPE_4__ utility; TYPE_3__ rfm; TYPE_2__ datagram; TYPE_1__ video; } ;
struct cfctrl_link_param {int linktype; int chtype; int priority; int phyid; int endpoint; TYPE_5__ u; } ;
struct cfctrl_request_info {int cmd; int * client_layer; struct cfctrl_link_param param; } ;
struct TYPE_16__ {int (* radioset_rsp ) () ;int (* restart_rsp ) () ;int (* wake_rsp ) () ;int (* sleep_rsp ) () ;int (* enum_rsp ) () ;int (* linkerror_ind ) () ;int (* linkdestroy_rsp ) (int ,int) ;int (* linksetup_rsp ) (int ,int,int,int,int *) ;int (* reject_rsp ) (int ,int ,int *) ;} ;
struct TYPE_14__ {int up; } ;
struct TYPE_15__ {TYPE_6__ layer; } ;
struct cfctrl {TYPE_8__ res; TYPE_7__ serv; int info_list_lock; } ;
typedef int linkparam ;
typedef enum cfctrl_srv { ____Placeholder_cfctrl_srv } cfctrl_srv ;







 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;




 int VAR_4 ;
 int FUNC_0 (int) ;
 struct cfctrl_request_info* FUNC_1 (struct cfctrl*,struct cfctrl_request_info*) ;
 int FUNC_2 (struct cfpkt*) ;
 int FUNC_3 (struct cfpkt*) ;
 int FUNC_4 (struct cfpkt*,int**,int) ;
 void* FUNC_5 (struct cfpkt*) ;
 void* FUNC_6 (struct cfpkt*) ;
 int FUNC_7 (struct cfpkt*) ;
 int FUNC_8 (struct cfpkt*) ;
 struct cfctrl* FUNC_9 (struct cflayer*) ;
 scalar_t__ FUNC_10 (struct cfctrl*,int,struct cfpkt*) ;
 int FUNC_11 (struct cfctrl_request_info*) ;
 int FUNC_12 (struct cfctrl_link_param*,int ,int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,int ,int *) ;
 int FUNC_18 (int ,int,int,int,int *) ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 () ;

__attribute__((used)) static int FUNC_26(struct cflayer *VAR_5, struct cfpkt *VAR_6)
{
 u8 VAR_7;
 u8 VAR_8;
 int VAR_9 = -1;
 u8 VAR_10;
 u8 VAR_11[255];
 u8 VAR_12 = 0;
 struct cfctrl *VAR_13 = FUNC_9(VAR_5);
 struct cfctrl_request_info VAR_14, *VAR_15;


 VAR_7 = FUNC_7(VAR_6);
 VAR_8 = VAR_7 & VAR_0;
 if (VAR_8 != 139
     && VAR_2 != (VAR_2 & VAR_7)
  && VAR_1 != (VAR_1 & VAR_7)) {
  if (FUNC_10(VAR_13, VAR_8, VAR_6) != 0)
   VAR_7 |= VAR_1;
 }

 switch (VAR_8) {
 case 137:
  {
   enum cfctrl_srv VAR_16;
   enum cfctrl_srv VAR_17;
   u8 VAR_18;
   u8 VAR_19;
   u8 VAR_20;
   u8 VAR_21;
   u8 *VAR_22;
   int VAR_23;
   struct cfctrl_link_param VAR_24;
   FUNC_12(&VAR_24, 0, sizeof(VAR_24));

   VAR_21 = FUNC_7(VAR_6);

   VAR_16 = VAR_21 & VAR_3;
   VAR_24.linktype = VAR_16;

   VAR_17 = VAR_21 >> 4;
   VAR_24.chtype = VAR_17;

   VAR_21 = FUNC_7(VAR_6);
   VAR_19 = VAR_21 & 0x07;
   VAR_20 = VAR_21 >> 3;

   VAR_24.priority = VAR_20;
   VAR_24.phyid = VAR_19;
   VAR_18 = FUNC_7(VAR_6);
   VAR_24.endpoint = VAR_18 & 0x03;

   switch (VAR_16) {
   case 129:
   case 132:
    if (VAR_1 & VAR_7)
     break;

    VAR_12 = FUNC_7(VAR_6);
    break;
   case 128:
    VAR_21 = FUNC_7(VAR_6);
    VAR_24.u.video.connid = VAR_21;
    if (VAR_1 & VAR_7)
     break;

    VAR_12 = FUNC_7(VAR_6);
    break;

   case 133:
    VAR_24.u.datagram.connid =
        FUNC_6(VAR_6);
    if (VAR_1 & VAR_7)
     break;

    VAR_12 = FUNC_7(VAR_6);
    break;
   case 131:




    VAR_24.u.rfm.connid =
        FUNC_6(VAR_6);
    VAR_22 = (u8 *) VAR_24.u.rfm.volume;
    for (VAR_21 = FUNC_7(VAR_6);
         FUNC_8(VAR_6) && VAR_21 != '\0';
         VAR_21 = FUNC_7(VAR_6))
     *VAR_22++ = VAR_21;
    *VAR_22 = '\0';

    if (VAR_1 & VAR_7)
     break;

    VAR_12 = FUNC_7(VAR_6);

    break;
   case 130:





    VAR_24.u.utility.fifosize_kb =
        FUNC_5(VAR_6);

    VAR_24.u.utility.fifosize_bufs =
        FUNC_5(VAR_6);

    VAR_22 = (u8 *) VAR_24.u.utility.name;
    FUNC_0(sizeof(VAR_24.u.utility.name)
          >= VAR_4);
    for (VAR_23 = 0;
         VAR_23 < VAR_4
         && FUNC_8(VAR_6); VAR_23++) {
     VAR_21 = FUNC_7(VAR_6);
     *VAR_22++ = VAR_21;
    }

    VAR_10 = FUNC_7(VAR_6);
    VAR_24.u.utility.paramlen = VAR_10;

    VAR_22 = VAR_24.u.utility.params;
    while (FUNC_8(VAR_6) && VAR_10--) {
     VAR_21 = FUNC_7(VAR_6);
     *VAR_22++ = VAR_21;
    }
    if (VAR_1 & VAR_7)
     break;

    VAR_12 = FUNC_7(VAR_6);

    VAR_10 = FUNC_7(VAR_6);

    FUNC_4(VAR_6, &VAR_11, VAR_10);
    break;
   default:
    FUNC_14("Request setup, invalid type (%d)\n",
     VAR_16);
    goto error;
   }

   VAR_14.cmd = VAR_8;
   VAR_14.param = VAR_24;
   FUNC_15(&VAR_13->info_list_lock);
   VAR_15 = FUNC_1(VAR_13, &VAR_14);

   if (VAR_1 == (VAR_1 & VAR_7) ||
    FUNC_3(VAR_6)) {
    FUNC_13("Invalid O/E bit or parse error "
      "on CAIF control channel\n");
    VAR_13->res.reject_rsp(VAR_13->serv.layer.up,
             0,
             VAR_15 ? VAR_15->client_layer
             : ((void*)0));
   } else {
    VAR_13->res.linksetup_rsp(VAR_13->serv.
         layer.up, VAR_12,
         VAR_16, VAR_19,
         VAR_15 ? VAR_15->
         client_layer : ((void*)0));
   }

   FUNC_11(VAR_15);

   FUNC_16(&VAR_13->info_list_lock);
  }
  break;
 case 140:
  VAR_12 = FUNC_7(VAR_6);
  VAR_13->res.linkdestroy_rsp(VAR_13->serv.layer.up, VAR_12);
  break;
 case 139:
  FUNC_13("Frame Error Indication received\n");
  VAR_13->res.linkerror_ind();
  break;
 case 141:
  VAR_13->res.enum_rsp();
  break;
 case 135:
  VAR_13->res.sleep_rsp();
  break;
 case 134:
  VAR_13->res.wake_rsp();
  break;
 case 138:
  VAR_13->res.restart_rsp();
  break;
 case 136:
  VAR_13->res.radioset_rsp();
  break;
 default:
  FUNC_13("Unrecognized Control Frame\n");
  goto error;
 }
 VAR_9 = 0;
error:
 FUNC_2(VAR_6);
 return VAR_9;
}
