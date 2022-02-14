
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dn_ptr; } ;
struct dn_dev {int dummy; } ;


 struct net_device* FUNC_0 (int *,int) ;
 int VAR_0 ;
 struct dn_dev* FUNC_1 (int ) ;

__attribute__((used)) static struct dn_dev *FUNC_2(int VAR_1)
{
 struct net_device *VAR_2;
 struct dn_dev *VAR_3 = ((void*)0);

 VAR_2 = FUNC_0(&VAR_0, VAR_1);
 if (VAR_2)
  VAR_3 = FUNC_1(VAR_2->dn_ptr);

 return VAR_3;
}
