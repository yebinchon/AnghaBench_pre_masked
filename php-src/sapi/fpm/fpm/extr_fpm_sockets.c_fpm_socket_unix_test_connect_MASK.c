
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {scalar_t__ sun_family; } ;
struct sockaddr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct sockaddr*,size_t) ;
 int FUNC_2 (scalar_t__,int ,int ) ;

int FUNC_3(struct sockaddr_un *VAR_2, size_t VAR_3)
{
 int VAR_4;

 if (!VAR_2 || VAR_2->sun_family != VAR_0) {
  return -1;
 }

 if ((VAR_4 = FUNC_2(VAR_0, VAR_1, 0)) < 0) {
  return -1;
 }

 if (FUNC_1(VAR_4, (struct sockaddr *)VAR_2, VAR_3) == -1) {
  FUNC_0(VAR_4);
  return -1;
 }

 FUNC_0(VAR_4);
 return 0;
}
