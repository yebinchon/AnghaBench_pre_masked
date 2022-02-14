
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int addr ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,struct sockaddr*,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int,int ,char*,int) ;

__attribute__((used)) static void *FUNC_9(void *VAR_5)
{
 struct sockaddr_storage VAR_6;
 socklen_t VAR_7 = sizeof(VAR_6);
 int VAR_8 = *(int *)VAR_5;
 int VAR_9;
 int VAR_10 = 0;

 VAR_10 = FUNC_3(VAR_8, 1);

 FUNC_6(&VAR_4);
 FUNC_5(&VAR_3);
 FUNC_7(&VAR_4);

 if (FUNC_0(VAR_10 < 0)) {
  FUNC_4("Failed to listed on socket");
  return ((void*)0);
 }

 VAR_10 += FUNC_8(VAR_8, VAR_0, "listen", 1);
 VAR_10 += FUNC_8(VAR_8, VAR_1, "listen", 1);
 VAR_10 += FUNC_8(VAR_8, VAR_2, "listen", 1);

 VAR_9 = FUNC_1(VAR_8, (struct sockaddr *)&VAR_6, &VAR_7);
 if (FUNC_0(VAR_9 < 0)) {
  FUNC_4("Failed to accept client");
  return ((void*)0);
 }

 VAR_10 += FUNC_8(VAR_9, VAR_0, "accept", 1);
 VAR_10 += FUNC_8(VAR_9, VAR_1, "accept", 1);
 VAR_10 += FUNC_8(VAR_9, VAR_2, "accept", 0);

 FUNC_2(VAR_9);

 return (void *)(long)VAR_10;
}
