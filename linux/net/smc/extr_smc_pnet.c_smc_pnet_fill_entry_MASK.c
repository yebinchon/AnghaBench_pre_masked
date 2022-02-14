
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_user_pnetentry {int ib_port; int smcibdev; int smcd_dev; int ndev; int pnet_name; int list; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (struct net*,char*) ;
 struct net VAR_6 ;
 int FUNC_2 (struct smc_user_pnetentry*,int ,int) ;
 scalar_t__ FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ) ;
 char* FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct net *VAR_7,
          struct smc_user_pnetentry *VAR_8,
          struct nlattr *VAR_9[])
{
 char *VAR_10, *VAR_11;
 int VAR_12;

 FUNC_2(VAR_8, 0, sizeof(*VAR_8));
 FUNC_0(&VAR_8->list);

 VAR_12 = -VAR_0;
 if (!VAR_9[VAR_5])
  goto error;
 VAR_10 = (char *)FUNC_3(VAR_9[VAR_5]);
 if (!FUNC_7(VAR_10, VAR_8->pnet_name))
  goto error;

 VAR_12 = -VAR_0;
 if (VAR_9[VAR_2]) {
  VAR_10 = (char *)FUNC_3(VAR_9[VAR_2]);
  VAR_8->ndev = FUNC_1(VAR_7, VAR_10);
  if (!VAR_8->ndev)
   goto error;
 }


 if (VAR_7 != &VAR_6)
  return 0;

 VAR_12 = -VAR_0;
 if (VAR_9[VAR_3]) {
  VAR_11 = (char *)FUNC_3(VAR_9[VAR_3]);
  VAR_11 = FUNC_8(VAR_11);
  VAR_8->smcibdev = FUNC_5(VAR_11);
  VAR_8->smcd_dev = FUNC_6(VAR_11);
  if (!VAR_8->smcibdev && !VAR_8->smcd_dev)
   goto error;
  if (VAR_8->smcibdev) {
   if (!VAR_9[VAR_4])
    goto error;
   VAR_8->ib_port = FUNC_4(VAR_9[VAR_4]);
   if (VAR_8->ib_port < 1 ||
       VAR_8->ib_port > VAR_1)
    goto error;
  }
 }

 return 0;

error:
 return VAR_12;
}
