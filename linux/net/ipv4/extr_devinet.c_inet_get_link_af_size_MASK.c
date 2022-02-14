
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int ip_ptr; } ;
struct in_device {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 struct in_device* FUNC_1 (int ) ;

__attribute__((used)) static size_t FUNC_2(const struct net_device *VAR_1,
        u32 VAR_2)
{
 struct in_device *VAR_3 = FUNC_1(VAR_1->ip_ptr);

 if (!VAR_3)
  return 0;

 return FUNC_0(VAR_0 * 4);
}
