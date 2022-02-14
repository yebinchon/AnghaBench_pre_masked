
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct net_device_ops {int (* ndo_set_config ) (struct net_device*,int *) ;int (* ndo_do_ioctl ) (struct net_device*,struct ifreq*,unsigned int) ;int ndo_set_rx_mode; } ;
struct net_device {int addr_len; int broadcast; int type; struct net_device_ops* netdev_ops; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int sa_data; int sa_family; } ;
struct ifreq {char* ifr_newname; int ifr_qlen; TYPE_1__ ifr_hwaddr; int ifr_map; int ifr_mtu; int ifr_flags; int ifr_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;

 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 struct net_device* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (struct net_device*,int ,int *) ;
 int FUNC_3 (struct net_device*,char*) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*,int ) ;
 int FUNC_6 (struct net_device*,int ) ;
 int FUNC_7 (struct net_device*,TYPE_1__*,int *) ;
 int FUNC_8 (struct net_device*,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int,size_t) ;
 int FUNC_11 (struct ifreq*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*,int *) ;
 int FUNC_14 (struct net_device*,struct ifreq*,unsigned int) ;

__attribute__((used)) static int FUNC_15(struct net *VAR_20, struct ifreq *VAR_21, unsigned int VAR_22)
{
 int VAR_23;
 struct net_device *VAR_24 = FUNC_0(VAR_20, VAR_21->ifr_name);
 const struct net_device_ops *VAR_25;

 if (!VAR_24)
  return -VAR_2;

 VAR_25 = VAR_24->netdev_ops;

 switch (VAR_22) {
 case 135:
  return FUNC_2(VAR_24, VAR_21->ifr_flags, ((void*)0));

 case 131:

  return -VAR_3;

 case 130:
  return FUNC_8(VAR_24, VAR_21->ifr_mtu);

 case 134:
  if (VAR_24->addr_len > sizeof(struct sockaddr))
   return -VAR_1;
  return FUNC_7(VAR_24, &VAR_21->ifr_hwaddr, ((void*)0));

 case 133:
  if (VAR_21->ifr_hwaddr.sa_family != VAR_24->type)
   return -VAR_1;
  FUNC_9(VAR_24->broadcast, VAR_21->ifr_hwaddr.sa_data,
         FUNC_10(sizeof(VAR_21->ifr_hwaddr.sa_data),
      (size_t)VAR_24->addr_len));
  FUNC_1(VAR_5, VAR_24);
  return 0;

 case 132:
  if (VAR_25->ndo_set_config) {
   if (!FUNC_12(VAR_24))
    return -VAR_2;
   return VAR_25->ndo_set_config(VAR_24, &VAR_21->ifr_map);
  }
  return -VAR_3;

 case 138:
  if (!VAR_25->ndo_set_rx_mode ||
      VAR_21->ifr_hwaddr.sa_family != VAR_0)
   return -VAR_1;
  if (!FUNC_12(VAR_24))
   return -VAR_2;
  return FUNC_5(VAR_24, VAR_21->ifr_hwaddr.sa_data);

 case 137:
  if (!VAR_25->ndo_set_rx_mode ||
      VAR_21->ifr_hwaddr.sa_family != VAR_0)
   return -VAR_1;
  if (!FUNC_12(VAR_24))
   return -VAR_2;
  return FUNC_6(VAR_24, VAR_21->ifr_hwaddr.sa_data);

 case 128:
  if (VAR_21->ifr_qlen < 0)
   return -VAR_1;
  return FUNC_4(VAR_24, VAR_21->ifr_qlen);

 case 129:
  VAR_21->ifr_newname[VAR_4-1] = '\0';
  return FUNC_3(VAR_24, VAR_21->ifr_newname);

 case 136:
  VAR_23 = FUNC_11(VAR_21);
  if (VAR_23)
   return VAR_23;





 default:
  if ((VAR_22 >= VAR_14 &&
      VAR_22 <= VAR_14 + 15) ||
      VAR_22 == VAR_7 ||
      VAR_22 == VAR_9 ||
      VAR_22 == VAR_10 ||
      VAR_22 == VAR_11 ||
      VAR_22 == VAR_8 ||
      VAR_22 == VAR_6 ||
      VAR_22 == VAR_16 ||
      VAR_22 == VAR_17 ||
      VAR_22 == VAR_18 ||
      VAR_22 == VAR_12 ||
      VAR_22 == VAR_13 ||
      VAR_22 == 136 ||
      VAR_22 == VAR_15 ||
      VAR_22 == VAR_19) {
   VAR_23 = -VAR_3;
   if (VAR_25->ndo_do_ioctl) {
    if (FUNC_12(VAR_24))
     VAR_23 = VAR_25->ndo_do_ioctl(VAR_24, VAR_21, VAR_22);
    else
     VAR_23 = -VAR_2;
   }
  } else
   VAR_23 = -VAR_1;

 }
 return VAR_23;
}
