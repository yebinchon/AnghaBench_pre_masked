
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct iface_combination_params {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wiphy*,struct iface_combination_params*,int ,int*) ;
 int VAR_1 ;

int FUNC_1(struct wiphy *VAR_2,
    struct iface_combination_params *VAR_3)
{
 int VAR_4, VAR_5 = 0;

 VAR_4 = FUNC_0(VAR_2, VAR_3,
      VAR_1, &VAR_5);
 if (VAR_4)
  return VAR_4;
 if (VAR_5 == 0)
  return -VAR_0;

 return 0;
}
