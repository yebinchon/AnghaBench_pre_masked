
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct sockaddr const*,int) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(int VAR_2)
{
 struct sockaddr_storage VAR_3;
 socklen_t VAR_4 = sizeof(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_4(VAR_0, VAR_1, 0);
 if (VAR_5 < 0) {
  FUNC_3("Failed to create client socket");
  return -1;
 }

 if (FUNC_2(VAR_2, (struct sockaddr *)&VAR_3, &VAR_4)) {
  FUNC_3("Failed to get server addr");
  goto out;
 }

 if (FUNC_1(VAR_5, (const struct sockaddr *)&VAR_3, VAR_4) < 0) {
  FUNC_3("Fail to connect to server");
  goto out;
 }

 return VAR_5;

out:
 FUNC_0(VAR_5);
 return -1;
}
