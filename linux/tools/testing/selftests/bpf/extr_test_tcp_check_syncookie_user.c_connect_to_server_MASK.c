
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int ss_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int addr ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct sockaddr const*,int) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(int VAR_1)
{
 struct sockaddr_storage VAR_2;
 socklen_t VAR_3 = sizeof(VAR_2);
 int VAR_4 = -1;

 if (FUNC_2(VAR_1, (struct sockaddr *)&VAR_2, &VAR_3)) {
  FUNC_3("Failed to get server addr");
  goto out;
 }

 VAR_4 = FUNC_4(VAR_2.ss_family, VAR_0, 0);
 if (VAR_4 == -1) {
  FUNC_3("Failed to create client socket");
  goto out;
 }

 if (FUNC_1(VAR_4, (const struct sockaddr *)&VAR_2, VAR_3) == -1) {
  FUNC_3("Fail to connect to server");
  goto close_out;
 }

 goto out;

close_out:
 FUNC_0(VAR_4);
 VAR_4 = -1;
out:
 return VAR_4;
}
