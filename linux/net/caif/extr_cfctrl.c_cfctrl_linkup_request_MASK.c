
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int utility_name ;
typedef char u8 ;
typedef char u32 ;
typedef char u16 ;
struct cfpkt {int dummy; } ;
struct cflayer {int (* transmit ) (struct cflayer*,struct cfpkt*) ;struct cflayer* dn; } ;
struct TYPE_13__ {char paramlen; char* params; int name; int fifosize_bufs; int fifosize_kb; } ;
struct TYPE_12__ {char* volume; int connid; } ;
struct TYPE_11__ {int connid; } ;
struct TYPE_10__ {int connid; } ;
struct TYPE_14__ {TYPE_4__ utility; TYPE_3__ rfm; TYPE_2__ datagram; TYPE_1__ video; } ;
struct cfctrl_link_param {int chtype; int linktype; int priority; int phyid; int endpoint; TYPE_5__ u; } ;
struct cfctrl_request_info {char cmd; struct cfctrl_link_param param; struct cflayer* client_layer; } ;
struct TYPE_16__ {struct cflayer layer; } ;
struct cfctrl {TYPE_7__ serv; } ;
struct TYPE_17__ {TYPE_6__* dev_info; } ;
struct TYPE_15__ {int id; } ;


 char VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cflayer*,struct cflayer*) ;
 int FUNC_2 (struct cfctrl*,struct cfctrl_request_info*) ;
 int FUNC_3 (struct cfpkt*,char*,int) ;
 int FUNC_4 (struct cfpkt*,char) ;
 struct cfpkt* FUNC_5 (int ) ;
 TYPE_8__* FUNC_6 (struct cfpkt*) ;
 int FUNC_7 (struct cfpkt*,int ) ;
 struct cfctrl* FUNC_8 (struct cflayer*) ;
 char FUNC_9 (int ) ;
 char FUNC_10 (int ) ;
 int FUNC_11 (TYPE_8__*,struct cfctrl*) ;
 struct cfctrl_request_info* FUNC_12 (int,int ) ;
 int FUNC_13 (char*,int ,int) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (char*,int) ;
 int FUNC_17 (char*,int ,int) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (struct cflayer*,struct cfpkt*) ;

int FUNC_20(struct cflayer *VAR_9,
     struct cfctrl_link_param *VAR_10,
     struct cflayer *VAR_11)
{
 struct cfctrl *VAR_12 = FUNC_8(VAR_9);
 u32 VAR_13;
 u16 VAR_14;
 u8 VAR_15;
 struct cfctrl_request_info *VAR_16;
 int VAR_17;
 char VAR_18[16];
 struct cfpkt *VAR_19;
 struct cflayer *VAR_20 = VAR_12->serv.layer.dn;

 if (!VAR_20) {
  FUNC_14("not able to send linkup request\n");
  return -VAR_4;
 }

 if (FUNC_1(VAR_9, VAR_11) > 0) {

  FUNC_15("Duplicate connect request for same client\n");
  FUNC_0(1);
  return -VAR_2;
 }

 VAR_19 = FUNC_5(VAR_1);
 if (!VAR_19)
  return -VAR_5;
 FUNC_4(VAR_19, VAR_0);
 FUNC_4(VAR_19, (VAR_10->chtype << 4) | VAR_10->linktype);
 FUNC_4(VAR_19, (VAR_10->priority << 3) | VAR_10->phyid);
 FUNC_4(VAR_19, VAR_10->endpoint & 0x03);

 switch (VAR_10->linktype) {
 case 129:
  break;
 case 128:
  FUNC_4(VAR_19, (u8) VAR_10->u.video.connid);
  break;
 case 132:
  break;
 case 133:
  VAR_13 = FUNC_10(VAR_10->u.datagram.connid);
  FUNC_3(VAR_19, &VAR_13, 4);
  break;
 case 131:



  VAR_13 = FUNC_10(VAR_10->u.rfm.connid);
  FUNC_3(VAR_19, &VAR_13, 4);

  FUNC_3(VAR_19, VAR_10->u.rfm.volume,
          FUNC_18(VAR_10->u.rfm.volume) + 1);
  break;
 case 130:
  VAR_14 = FUNC_9(VAR_10->u.utility.fifosize_kb);
  FUNC_3(VAR_19, &VAR_14, 2);
  VAR_14 = FUNC_9(VAR_10->u.utility.fifosize_bufs);
  FUNC_3(VAR_19, &VAR_14, 2);
  FUNC_13(VAR_18, 0, sizeof(VAR_18));
  FUNC_17(VAR_18, VAR_10->u.utility.name,
   VAR_8);
  FUNC_3(VAR_19, VAR_18, VAR_8);
  VAR_15 = VAR_10->u.utility.paramlen;
  FUNC_3(VAR_19, &VAR_15, 1);
  FUNC_3(VAR_19, VAR_10->u.utility.params,
          VAR_10->u.utility.paramlen);
  break;
 default:
  FUNC_16("Request setup of bad link type = %d\n",
   VAR_10->linktype);
  return -VAR_3;
 }
 VAR_16 = FUNC_12(sizeof(*VAR_16), VAR_6);
 if (!VAR_16)
  return -VAR_5;
 VAR_16->client_layer = VAR_11;
 VAR_16->cmd = VAR_0;
 VAR_16->param = *VAR_10;
 FUNC_2(VAR_12, VAR_16);
 FUNC_11(FUNC_6(VAR_19), VAR_12);





 FUNC_6(VAR_19)->dev_info->id = VAR_10->phyid;
 FUNC_7(VAR_19, VAR_7);
 VAR_17 =
     VAR_20->transmit(VAR_20, VAR_19);
 if (VAR_17 < 0) {
  int VAR_21;

  VAR_21 = FUNC_1(&VAR_12->serv.layer,
      VAR_11);
  if (VAR_21 != 1) {
   FUNC_15("Could not remove request (%d)", VAR_21);
   return -VAR_4;
  }
 }
 return 0;
}
