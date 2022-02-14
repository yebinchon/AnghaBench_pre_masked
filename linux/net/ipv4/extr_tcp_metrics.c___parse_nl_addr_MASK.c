
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct inetpeer_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct genl_info {struct nlattr** attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inetpeer_addr*) ;
 int FUNC_1 (struct inetpeer_addr*) ;
 int FUNC_2 (struct inetpeer_addr*,int ) ;
 int FUNC_3 (struct inetpeer_addr*,struct in6_addr*) ;
 unsigned int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;
 struct in6_addr FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct nlattr*) ;
 int FUNC_8 (struct nlattr*) ;

__attribute__((used)) static int FUNC_9(struct genl_info *VAR_2, struct inetpeer_addr *VAR_3,
      unsigned int *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct nlattr *VAR_8;

 VAR_8 = VAR_2->attrs[VAR_6];
 if (VAR_8) {
  FUNC_2(VAR_3, FUNC_7(VAR_8));
  if (VAR_4)
   *VAR_4 = FUNC_4(FUNC_0(VAR_3));
  return 0;
 }
 VAR_8 = VAR_2->attrs[VAR_7];
 if (VAR_8) {
  struct in6_addr VAR_9;

  if (FUNC_8(VAR_8) != sizeof(struct in6_addr))
   return -VAR_1;
  VAR_9 = FUNC_6(VAR_8);
  FUNC_3(VAR_3, &VAR_9);
  if (VAR_4)
   *VAR_4 = FUNC_5(FUNC_1(VAR_3));
  return 0;
 }
 return VAR_5 ? 1 : -VAR_0;
}
