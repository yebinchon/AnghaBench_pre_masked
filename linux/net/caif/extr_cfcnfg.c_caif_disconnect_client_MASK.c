
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct net {int dummy; } ;
struct cflayer {scalar_t__ id; int (* ctrlcmd ) (struct cflayer*,int ,int ) ;} ;
struct cfcnfg {int ctrl; int mux; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct cflayer*) ;
 int FUNC_2 (int ,scalar_t__,struct cflayer*) ;
 struct cflayer* FUNC_3 (int ,scalar_t__) ;
 struct cfcnfg* FUNC_4 (struct net*) ;
 int FUNC_5 (struct cflayer*,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct cflayer*,int ,int ) ;
 int FUNC_8 () ;

int FUNC_9(struct net *VAR_1, struct cflayer *VAR_2)
{
 u8 VAR_3;
 struct cfcnfg *VAR_4 = FUNC_4(VAR_1);

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_1(VAR_4->ctrl, VAR_2);
 VAR_3 = VAR_2->id;
 if (VAR_3 != 0) {
  struct cflayer *VAR_5;
  VAR_5 = FUNC_3(VAR_4->mux, VAR_3);
  FUNC_2(VAR_4->ctrl, VAR_3, VAR_2);
  if (VAR_5 != ((void*)0))
   FUNC_5(VAR_5, ((void*)0));
 } else
  FUNC_6("nothing to disconnect\n");


 FUNC_8();
 if (VAR_2->ctrlcmd != ((void*)0))
  VAR_2->ctrlcmd(VAR_2, VAR_0, 0);
 return 0;

}
