
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dn_ptr; } ;
struct dn_ifaddr {int ifa_local; } ;
struct dn_dev {int ifa_list; } ;
typedef int __le16 ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, __le16 *VAR_2)
{
 struct dn_dev *VAR_3;
 struct dn_ifaddr *VAR_4;
 int VAR_5 = -VAR_0;

 FUNC_1();
 VAR_3 = FUNC_0(VAR_1->dn_ptr);
 if (VAR_3 == ((void*)0))
  goto out;

 VAR_4 = FUNC_0(VAR_3->ifa_list);
 if (VAR_4 != ((void*)0)) {
  *VAR_2 = VAR_4->ifa_local;
  VAR_5 = 0;
 }
out:
 FUNC_2();
 return VAR_5;
}
