
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int data; } ;
struct iwreq {TYPE_1__ u; } ;
struct iw_request_info {int dummy; } ;
struct iw_priv_args {int dummy; } ;
typedef int (* iw_handler ) (struct net_device*,struct iw_request_info*,TYPE_1__*,char*) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,unsigned int,struct iw_priv_args const**) ;
 int FUNC_2 (int *,unsigned int,struct iw_priv_args const*,int (*) (struct net_device*,struct iw_request_info*,TYPE_1__*,char*),struct net_device*,struct iw_request_info*,int) ;

int FUNC_3(struct net_device *VAR_2, struct iwreq *VAR_3,
         unsigned int VAR_4, struct iw_request_info *VAR_5,
         iw_handler VAR_6)
{
 int VAR_7 = 0, VAR_8 = -VAR_0;
 const struct iw_priv_args *VAR_9;

 VAR_7 = FUNC_1(VAR_2, VAR_4, &VAR_9);


 if (VAR_7 == 0) {

  VAR_8 = VAR_6(VAR_2, VAR_5, &(VAR_3->u), (char *) &(VAR_3->u));
 } else {
  VAR_8 = FUNC_2(&VAR_3->u.data, VAR_4, VAR_9,
          VAR_6, VAR_2, VAR_5, VAR_7);
 }


 if (VAR_8 == -VAR_1)
  VAR_8 = FUNC_0(VAR_2);

 return VAR_8;
}
