
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct cfpkt {int dummy; } ;
struct cflayer {int (* transmit ) (struct cflayer*,struct cfpkt*) ;} ;
struct TYPE_3__ {struct cflayer* dn; } ;
struct TYPE_4__ {TYPE_1__ layer; } ;
struct cfctrl {scalar_t__* loop_linkused; TYPE_2__ serv; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cfpkt*,size_t) ;
 struct cfpkt* FUNC_1 (int ) ;
 int FUNC_2 (struct cfpkt*) ;
 int FUNC_3 (struct cfpkt*,int ) ;
 struct cfctrl* FUNC_4 (struct cflayer*) ;
 int FUNC_5 (int ,struct cfctrl*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct cflayer*,struct cfpkt*) ;

int FUNC_8(struct cflayer *VAR_5, u8 VAR_6,
   struct cflayer *VAR_7)
{
 int VAR_8;
 struct cfpkt *VAR_9;
 struct cfctrl *VAR_10 = FUNC_4(VAR_5);
 struct cflayer *VAR_11 = VAR_10->serv.layer.dn;

 if (!VAR_11) {
  FUNC_6("not able to send link-down request\n");
  return -VAR_2;
 }
 VAR_9 = FUNC_1(VAR_1);
 if (!VAR_9)
  return -VAR_3;
 FUNC_0(VAR_9, VAR_0);
 FUNC_0(VAR_9, VAR_6);
 FUNC_5(FUNC_2(VAR_9), VAR_10);
 FUNC_3(VAR_9, VAR_4);
 VAR_8 =
     VAR_11->transmit(VAR_11, VAR_9);

 VAR_10->loop_linkused[VAR_6] = 0;

 return VAR_8;
}
