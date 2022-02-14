
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int bandwidth_up; int bandwidth_down; } ;
struct batadv_priv {TYPE_1__ gw; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct batadv_priv*) ;
 int FUNC_3 (struct batadv_priv*) ;
 int FUNC_4 (struct net_device*,char*,int,int,int,int,int,int,int,int) ;
 int FUNC_5 (struct net_device*,char*,int*,int*) ;
 struct batadv_priv* FUNC_6 (struct net_device*) ;

ssize_t FUNC_7(struct net_device *VAR_1, char *VAR_2,
    size_t VAR_3)
{
 struct batadv_priv *VAR_4 = FUNC_6(VAR_1);
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7 = 0;
 u32 VAR_8 = 0;
 bool VAR_9;

 VAR_5 = (unsigned int)FUNC_0(&VAR_4->gw.bandwidth_down);
 VAR_6 = (unsigned int)FUNC_0(&VAR_4->gw.bandwidth_up);

 VAR_9 = FUNC_5(VAR_1, VAR_2, &VAR_7, &VAR_8);
 if (!VAR_9)
  return -VAR_0;

 if (!VAR_7)
  VAR_7 = 1;

 if (!VAR_8)
  VAR_8 = VAR_7 / 5;

 if (!VAR_8)
  VAR_8 = 1;

 if (VAR_5 == VAR_7 && VAR_6 == VAR_8)
  return VAR_3;

 FUNC_2(VAR_4);
 FUNC_4(VAR_1,
      "Changing gateway bandwidth from: '%u.%u/%u.%u MBit' to: '%u.%u/%u.%u MBit'\n",
      VAR_5 / 10, VAR_5 % 10, VAR_6 / 10, VAR_6 % 10,
      VAR_7 / 10, VAR_7 % 10, VAR_8 / 10, VAR_8 % 10);

 FUNC_1(&VAR_4->gw.bandwidth_down, VAR_7);
 FUNC_1(&VAR_4->gw.bandwidth_up, VAR_8);
 FUNC_3(VAR_4);

 return VAR_3;
}
