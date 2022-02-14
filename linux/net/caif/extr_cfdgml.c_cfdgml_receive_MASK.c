
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cfpkt {int dummy; } ;
struct cflayer {int (* ctrlcmd ) (struct cflayer*,int ,int ) ;TYPE_1__* up; int * receive; } ;
struct TYPE_2__ {int (* receive ) (TYPE_1__*,struct cfpkt*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cfpkt*) ;
 scalar_t__ FUNC_2 (struct cfpkt*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (TYPE_1__*,struct cfpkt*) ;
 int FUNC_6 (struct cflayer*,int ,int ) ;
 int FUNC_7 (struct cflayer*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct cflayer *VAR_4, struct cfpkt *VAR_5)
{
 u8 VAR_6 = -1;
 u8 VAR_7[3];
 int VAR_8;
 FUNC_0(VAR_4->up != ((void*)0));
 FUNC_0(VAR_4->receive != ((void*)0));
 FUNC_0(VAR_4->ctrlcmd != ((void*)0));

 if (FUNC_2(VAR_5, &VAR_6, 1) < 0) {
  FUNC_3("Packet is erroneous!\n");
  FUNC_1(VAR_5);
  return -VAR_3;
 }

 if ((VAR_6 & VAR_2) == 0) {
  if (FUNC_2(VAR_5, &VAR_7, 3) < 0) {
   FUNC_3("Packet is erroneous!\n");
   FUNC_1(VAR_5);
   return -VAR_3;
  }
  VAR_8 = VAR_4->up->receive(VAR_4->up, VAR_5);
  return VAR_8;
 }

 switch (VAR_6) {
 case 129:
  VAR_4->ctrlcmd(VAR_4, VAR_0, 0);
  FUNC_1(VAR_5);
  return 0;
 case 128:
  VAR_4->ctrlcmd(VAR_4, VAR_1, 0);
  FUNC_1(VAR_5);
  return 0;
 default:
  FUNC_1(VAR_5);
  FUNC_4("Unknown datagram control %d (0x%x)\n", VAR_6, VAR_6);
  return -VAR_3;
 }
}
