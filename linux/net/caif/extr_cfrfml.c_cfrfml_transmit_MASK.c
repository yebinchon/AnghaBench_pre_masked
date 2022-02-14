
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int id; } ;
struct TYPE_8__ {TYPE_2__ dev_info; } ;
struct cfrfml {scalar_t__ fragment_size; TYPE_4__ serv; } ;
struct cfpkt {int dummy; } ;
struct cflayer {TYPE_3__* up; TYPE_1__* dn; } ;
struct TYPE_7__ {int (* ctrlcmd ) (TYPE_3__*,int ,int ) ;} ;
struct TYPE_5__ {int * transmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct cfpkt*,int*,int) ;
 int FUNC_2 (struct cfpkt*) ;
 scalar_t__ FUNC_3 (struct cfpkt*) ;
 int FUNC_4 (struct cfpkt*,int*,int) ;
 struct cfpkt* FUNC_5 (struct cfpkt*,scalar_t__) ;
 int FUNC_6 (struct cfrfml*,struct cfpkt*) ;
 int FUNC_7 (TYPE_4__*,int*) ;
 struct cfrfml* FUNC_8 (struct cflayer*) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct cflayer *VAR_3, struct cfpkt *VAR_4)
{
 int VAR_5;
 u8 VAR_6;
 u8 VAR_7[6];
 struct cfpkt *VAR_8 = ((void*)0);
 struct cfpkt *VAR_9 = VAR_4;
 struct cfrfml *VAR_10 = FUNC_8(VAR_3);

 FUNC_0(VAR_3->dn != ((void*)0));
 FUNC_0(VAR_3->dn->transmit != ((void*)0));

 if (!FUNC_7(&VAR_10->serv, &VAR_5))
  goto out;

 VAR_5 = -VAR_1;
 if (FUNC_3(VAR_4) <= VAR_2-1)
  goto out;

 VAR_5 = 0;
 if (FUNC_3(VAR_4) > VAR_10->fragment_size + VAR_2)
  VAR_5 = FUNC_4(VAR_4, VAR_7, 6);

 if (VAR_5 < 0)
  goto out;

 while (FUNC_3(VAR_9) > VAR_10->fragment_size + VAR_2) {

  VAR_6 = 1;
  VAR_5 = -VAR_1;

  if (FUNC_1(VAR_9, &VAR_6, 1) < 0)
   goto out;







  VAR_8 = FUNC_5(VAR_9, VAR_10->fragment_size);
  if (VAR_8 == ((void*)0))
   goto out;

  VAR_5 = FUNC_6(VAR_10, VAR_9);

  if (VAR_5 != 0) {
   VAR_9 = ((void*)0);
   goto out;
  }

  VAR_9 = VAR_8;
  VAR_8 = ((void*)0);

  VAR_5 = -VAR_1;
  if (FUNC_1(VAR_9, VAR_7, 6) < 0)
   goto out;

 }

 VAR_6 = 0;
 VAR_5 = -VAR_1;

 if (FUNC_1(VAR_9, &VAR_6, 1) < 0)
  goto out;

 VAR_5 = FUNC_6(VAR_10, VAR_9);

 VAR_9 = ((void*)0);
out:

 if (VAR_5 != 0) {
  FUNC_9("Connection error %d triggered on RFM link\n", VAR_5);


  VAR_3->up->ctrlcmd(VAR_3->up, VAR_0,
     VAR_10->serv.dev_info.id);

  if (VAR_8)
   FUNC_2(VAR_8);

  if (VAR_9)
   FUNC_2(VAR_9);
 }

 return VAR_5;
}
