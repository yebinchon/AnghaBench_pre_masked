
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iwreq_data {int dummy; } iwreq_data ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_priv_args {int set_args; int get_args; } ;
struct iw_point {int length; int pointer; } ;
typedef int (* iw_handler ) (struct net_device*,struct iw_request_info*,union iwreq_data*,char*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,struct iw_point*) ;
 scalar_t__ FUNC_3 (char*,int ,int) ;
 scalar_t__ FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct iw_point *VAR_6, unsigned int VAR_7,
      const struct iw_priv_args *VAR_8,
      iw_handler VAR_9, struct net_device *VAR_10,
      struct iw_request_info *VAR_11, int VAR_12)
{
 char *VAR_13;
 int VAR_14;


 if (FUNC_1(VAR_7)) {
  if (!VAR_6->pointer && VAR_6->length != 0)
   return -VAR_1;

  if (VAR_6->length > (VAR_8->set_args & VAR_5))
   return -VAR_0;
 } else if (!VAR_6->pointer)
  return -VAR_1;

 VAR_13 = FUNC_6(VAR_12, VAR_3);
 if (!VAR_13)
  return -VAR_2;


 if (FUNC_1(VAR_7) && (VAR_6->length != 0)) {
  if (FUNC_3(VAR_13, VAR_6->pointer, VAR_12)) {
   VAR_14 = -VAR_1;
   goto out;
  }
 }


 VAR_14 = VAR_9(VAR_10, VAR_11, (union iwreq_data *) VAR_6, VAR_13);


 if (!VAR_14 && FUNC_0(VAR_7)) {



  if (!(VAR_8->get_args & VAR_4))
   VAR_12 = FUNC_2(VAR_8->get_args, VAR_6);

  if (FUNC_4(VAR_6->pointer, VAR_13, VAR_12))
   VAR_14 = -VAR_1;
 }

out:
 FUNC_5(VAR_13);
 return VAR_14;
}
