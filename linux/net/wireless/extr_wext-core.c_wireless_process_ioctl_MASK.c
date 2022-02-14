
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* wext_ioctl_func ) (struct net_device*,struct iwreq*,unsigned int,struct iw_request_info*,int *) ;
struct net_device {scalar_t__ wireless_handlers; } ;
struct net {int dummy; } ;
struct iwreq {int ifr_name; } ;
struct iw_request_info {int dummy; } ;
typedef int * iw_handler ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct net_device* FUNC_0 (struct net*,int ) ;
 int * FUNC_1 (struct net_device*,unsigned int) ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_7, struct iwreq *VAR_8,
      unsigned int VAR_9,
      struct iw_request_info *VAR_10,
      wext_ioctl_func VAR_11,
      wext_ioctl_func VAR_12)
{
 struct net_device *VAR_13;
 iw_handler VAR_14;





 if ((VAR_13 = FUNC_0(VAR_7, VAR_8->ifr_name)) == ((void*)0))
  return -VAR_0;




 if (VAR_9 == VAR_3)
  return VAR_11(VAR_13, VAR_8, VAR_9, VAR_10,
    &VAR_5);
 if (!FUNC_2(VAR_13))
  return -VAR_0;


 VAR_14 = FUNC_1(VAR_13, VAR_9);
 if (VAR_14) {

  if (VAR_9 < VAR_4)
   return VAR_11(VAR_13, VAR_8, VAR_9, VAR_10, VAR_14);
  else if (VAR_12)
   return VAR_12(VAR_13, VAR_8, VAR_9, VAR_10, VAR_14);
 }
 return -VAR_1;
}
