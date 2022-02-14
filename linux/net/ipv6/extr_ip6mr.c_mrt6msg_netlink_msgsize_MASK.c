
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtgenmsg {int dummy; } ;
struct in6_addr {int dummy; } ;


 size_t FUNC_0 (int) ;
 size_t FUNC_1 (size_t) ;

__attribute__((used)) static size_t FUNC_2(size_t VAR_0)
{
 size_t VAR_1 =
  FUNC_0(sizeof(struct rtgenmsg))
  + FUNC_1(1)
  + FUNC_1(4)

  + FUNC_1(sizeof(struct in6_addr))

  + FUNC_1(sizeof(struct in6_addr))

  + FUNC_1(VAR_0)
  ;

 return VAR_1;
}
