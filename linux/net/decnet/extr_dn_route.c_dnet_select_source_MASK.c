
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dn_ptr; } ;
struct dn_ifaddr {int ifa_scope; int ifa_local; int ifa_next; } ;
struct dn_dev {int ifa_list; } ;
typedef int __le16 ;


 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static __le16 FUNC_4(const struct net_device *VAR_0, __le16 VAR_1, int VAR_2)
{
 __le16 VAR_3 = 0;
 struct dn_dev *VAR_4;
 struct dn_ifaddr *VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 FUNC_2();
 VAR_4 = FUNC_1(VAR_0->dn_ptr);
 for (VAR_5 = FUNC_1(VAR_4->ifa_list);
      VAR_5 != ((void*)0);
      VAR_5 = FUNC_1(VAR_5->ifa_next)) {
  if (VAR_5->ifa_scope > VAR_2)
   continue;
  if (!VAR_1) {
   VAR_3 = VAR_5->ifa_local;
   break;
  }
  VAR_7 = FUNC_0(VAR_1, VAR_5->ifa_local);
  if (VAR_7 > VAR_6)
   VAR_3 = VAR_5->ifa_local;
  if (VAR_6 == 0)
   VAR_3 = VAR_5->ifa_local;
 }
 FUNC_3();

 return VAR_3;
}
