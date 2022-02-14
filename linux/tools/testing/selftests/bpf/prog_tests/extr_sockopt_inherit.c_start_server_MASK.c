
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,struct sockaddr const*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int,int ,int,char*,int) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(void)
{
 struct sockaddr_in VAR_6 = {
  .sin_family = VAR_0,
  .sin_addr.s_addr = FUNC_2(VAR_3),
 };
 char VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(VAR_0, VAR_4, 0);
 if (VAR_9 < 0) {
  FUNC_3("Failed to create server socket");
  return -1;
 }

 for (VAR_10 = VAR_1; VAR_10 <= VAR_2; VAR_10++) {
  VAR_7 = 0x01;
  VAR_8 = FUNC_4(VAR_9, VAR_5, VAR_10, &VAR_7, 1);
  if (VAR_8) {
   FUNC_3("Failed to call setsockopt(%d)", VAR_10);
   FUNC_1(VAR_9);
   return -1;
  }
 }

 if (FUNC_0(VAR_9, (const struct sockaddr *)&VAR_6, sizeof(VAR_6)) < 0) {
  FUNC_3("Failed to bind socket");
  FUNC_1(VAR_9);
  return -1;
 }

 return VAR_9;
}
