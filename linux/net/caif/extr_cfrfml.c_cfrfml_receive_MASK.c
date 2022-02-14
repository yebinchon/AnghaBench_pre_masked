
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int id; } ;
struct TYPE_6__ {TYPE_5__* up; } ;
struct TYPE_8__ {TYPE_2__ dev_info; TYPE_1__ layer; } ;
struct cfrfml {scalar_t__ pdu_size; int sync; TYPE_3__ serv; struct cfpkt* incomplete_frm; scalar_t__ seghead; } ;
struct cfpkt {int dummy; } ;
struct cflayer {TYPE_4__* up; int * receive; } ;
struct TYPE_10__ {int (* receive ) (TYPE_5__*,struct cfpkt*) ;} ;
struct TYPE_9__ {int (* ctrlcmd ) (TYPE_4__*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cfpkt*) ;
 scalar_t__ FUNC_2 (struct cfpkt*) ;
 scalar_t__ FUNC_3 (struct cfpkt*,int*,int) ;
 scalar_t__ FUNC_4 (struct cfpkt*) ;
 scalar_t__ FUNC_5 (struct cfpkt*,scalar_t__,int) ;
 struct cfrfml* FUNC_6 (struct cflayer*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*,int) ;
 struct cfpkt* FUNC_9 (struct cfrfml*,int*,struct cfpkt*,int*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_5__*,struct cfpkt*) ;
 int FUNC_13 (TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct cflayer *VAR_6, struct cfpkt *VAR_7)
{
 u8 VAR_8;
 bool VAR_9;
 int VAR_10;
 u8 VAR_11[6];
 struct cfrfml *VAR_12;
 struct cfpkt *VAR_13 = ((void*)0);

 FUNC_0(VAR_6->up != ((void*)0));
 FUNC_0(VAR_6->receive != ((void*)0));
 VAR_12 = FUNC_6(VAR_6);
 FUNC_10(&VAR_12->sync);

 VAR_10 = -VAR_3;
 if (FUNC_3(VAR_7, &VAR_8, 1) < 0)
  goto out;
 VAR_9 = VAR_8 & VAR_5;

 if (VAR_9) {
  if (VAR_12->incomplete_frm == ((void*)0)) {

   if (FUNC_5(VAR_7, VAR_12->seghead, 6) < 0)
    goto out;

   VAR_12->pdu_size = FUNC_7(VAR_12->seghead+4);

   if (FUNC_2(VAR_7))
    goto out;
   VAR_12->incomplete_frm = VAR_7;
   VAR_7 = ((void*)0);
  } else {

   VAR_13 = FUNC_9(VAR_12, VAR_11, VAR_7, &VAR_10);
   if (VAR_13 == ((void*)0))
    goto out;

   if (FUNC_2(VAR_13))
    goto out;

   VAR_12->incomplete_frm = VAR_13;


   if (FUNC_2(VAR_13))
    goto out;
  }
  VAR_10 = 0;
  goto out;
 }

 if (VAR_12->incomplete_frm) {


  VAR_13 = FUNC_9(VAR_12, VAR_11, VAR_7, &VAR_10);
  if (VAR_13 == ((void*)0))
   goto out;

  if (FUNC_2(VAR_13))
   goto out;

  VAR_12->incomplete_frm = ((void*)0);
  VAR_7 = VAR_13;
  VAR_13 = ((void*)0);


  VAR_10 = -VAR_3;
  if (VAR_12->pdu_size != FUNC_4(VAR_7) - VAR_4 + 1)
   goto out;
 }

 VAR_10 = VAR_12->serv.layer.up->receive(VAR_12->serv.layer.up, VAR_7);

out:

 if (VAR_10 != 0) {
  if (VAR_13)
   FUNC_1(VAR_13);
  if (VAR_7)
   FUNC_1(VAR_7);
  if (VAR_12->incomplete_frm)
   FUNC_1(VAR_12->incomplete_frm);
  VAR_12->incomplete_frm = ((void*)0);

  FUNC_8("Connection error %d triggered on RFM link\n", VAR_10);


  VAR_6->up->ctrlcmd(VAR_6->up, VAR_0,
     VAR_12->serv.dev_info.id);
 }
 FUNC_11(&VAR_12->sync);

 if (FUNC_14(VAR_10 == -VAR_1))

  VAR_10 = -VAR_2;

 return VAR_10;
}
