
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnexthop {int dummy; } ;
struct rtmsg {int dummy; } ;
struct rta_mfc_stats {int dummy; } ;
struct in6_addr {int dummy; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 size_t FUNC_2 (int) ;
 size_t FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(bool VAR_0, int VAR_1)
{
 size_t VAR_2 =
  FUNC_1(sizeof(struct rtmsg))
  + FUNC_2(4)
  + FUNC_2(sizeof(struct in6_addr))
  + FUNC_2(sizeof(struct in6_addr))
  ;

 if (!VAR_0)
  VAR_2 = VAR_2
        + FUNC_2(4)
        + FUNC_2(0)
        + VAR_1 * FUNC_0(sizeof(struct rtnexthop))

        + FUNC_3(sizeof(struct rta_mfc_stats))
  ;

 return VAR_2;
}
