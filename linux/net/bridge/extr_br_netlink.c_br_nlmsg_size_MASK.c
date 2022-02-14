
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ifinfomsg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 () ;
 size_t FUNC_3 (int) ;

__attribute__((used)) static inline size_t FUNC_4(struct net_device *VAR_2, u32 VAR_3)
{
 return FUNC_0(sizeof(struct ifinfomsg))
  + FUNC_3(VAR_0)
  + FUNC_3(VAR_1)
  + FUNC_3(4)
  + FUNC_3(4)
  + FUNC_3(4)
  + FUNC_3(1)
  + FUNC_3(FUNC_2())
  + FUNC_3(FUNC_1(VAR_2,
     VAR_3))
  + FUNC_3(4);
}
