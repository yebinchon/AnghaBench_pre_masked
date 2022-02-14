
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int,unsigned int,unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (struct device*,struct net_device**) ;
 struct net_device** FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct net_device**) ;

struct net_device *FUNC_4(struct device *VAR_2, int VAR_3,
        unsigned int VAR_4, unsigned int VAR_5)
{
 struct net_device **VAR_6;
 struct net_device *VAR_7;

 VAR_6 = FUNC_2(VAR_1, sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5);
 if (!VAR_7) {
  FUNC_3(VAR_6);
  return ((void*)0);
 }

 *VAR_6 = VAR_7;
 FUNC_1(VAR_2, VAR_6);

 return VAR_7;
}
