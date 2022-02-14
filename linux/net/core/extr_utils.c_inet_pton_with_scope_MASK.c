
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sockaddr_storage {int dummy; } ;
struct net {int dummy; } ;
typedef int __kernel_sa_family_t ;





 int VAR_0 ;
 int FUNC_0 (char const*,scalar_t__,struct sockaddr_storage*) ;
 int FUNC_1 (struct net*,char const*,scalar_t__,struct sockaddr_storage*) ;
 scalar_t__ FUNC_2 (char const*,int ,scalar_t__*) ;
 int FUNC_3 (char*,int) ;

int FUNC_4(struct net *VAR_1, __kernel_sa_family_t VAR_2,
  const char *VAR_3, const char *VAR_4, struct sockaddr_storage *VAR_5)
{
 u16 VAR_6;
 int VAR_7 = -VAR_0;

 if (VAR_4) {
  if (FUNC_2(VAR_4, 0, &VAR_6))
   return -VAR_0;
 } else {
  VAR_6 = 0;
 }

 switch (VAR_2) {
 case 130:
  VAR_7 = FUNC_0(VAR_3, VAR_6, VAR_5);
  break;
 case 129:
  VAR_7 = FUNC_1(VAR_1, VAR_3, VAR_6, VAR_5);
  break;
 case 128:
  VAR_7 = FUNC_0(VAR_3, VAR_6, VAR_5);
  if (VAR_7)
   VAR_7 = FUNC_1(VAR_1, VAR_3, VAR_6, VAR_5);
  break;
 default:
  FUNC_3("unexpected address family %d\n", VAR_2);
 }

 return VAR_7;
}
