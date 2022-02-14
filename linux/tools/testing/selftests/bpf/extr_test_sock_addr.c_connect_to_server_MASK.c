
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int ss_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct sockaddr const*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int,int ) ;

__attribute__((used)) static int FUNC_4(int VAR_2, const struct sockaddr_storage *VAR_3,
        socklen_t VAR_4)
{
 int VAR_5;
 int VAR_6 = -1;

 VAR_5 = VAR_3->ss_family;

 if (VAR_5 != VAR_0 && VAR_5 != VAR_1) {
  FUNC_2("Unsupported address family");
  goto err;
 }

 VAR_6 = FUNC_3(VAR_5, VAR_2, 0);
 if (VAR_6 == -1) {
  FUNC_2("Failed to create client socket");
  goto err;
 }

 if (FUNC_1(VAR_6, (const struct sockaddr *)VAR_3, VAR_4) == -1) {
  FUNC_2("Fail to connect to server");
  goto err;
 }

 goto out;
err:
 FUNC_0(VAR_6);
 VAR_6 = -1;
out:
 return VAR_6;
}
