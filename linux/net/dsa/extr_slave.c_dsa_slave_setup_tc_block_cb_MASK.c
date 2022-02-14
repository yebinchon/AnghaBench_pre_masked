
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;

 int FUNC_0 (struct net_device*,void*,int) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(enum tc_setup_type VAR_1, void *VAR_2,
           void *VAR_3, bool VAR_4)
{
 struct net_device *VAR_5 = VAR_3;

 if (!FUNC_1(VAR_5))
  return -VAR_0;

 switch (VAR_1) {
 case 128:
  return FUNC_0(VAR_5, VAR_2, VAR_4);
 default:
  return -VAR_0;
 }
}
