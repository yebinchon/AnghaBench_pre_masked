
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int addr ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void *FUNC_8(void *VAR_2)
{
 struct sockaddr_storage VAR_3;
 socklen_t VAR_4 = sizeof(VAR_3);
 int VAR_5 = *(int *)VAR_2;
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_5, 1);

 FUNC_6(&VAR_1);
 FUNC_5(&VAR_0);
 FUNC_7(&VAR_1);

 if (FUNC_0(VAR_7 < 0)) {
  FUNC_4("Failed to listed on socket");
  return ((void*)0);
 }

 VAR_6 = FUNC_1(VAR_5, (struct sockaddr *)&VAR_3, &VAR_4);
 if (FUNC_0(VAR_6 < 0)) {
  FUNC_4("Failed to accept client");
  return ((void*)0);
 }





 if (FUNC_0(FUNC_1(VAR_5, (struct sockaddr *)&VAR_3, &VAR_4) >= 0)) {
  FUNC_4("Unexpected success in second accept");
  return ((void*)0);
 }

 FUNC_2(VAR_6);

 return ((void*)0);
}
