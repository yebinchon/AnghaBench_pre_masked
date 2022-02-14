
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sock_addr_test {scalar_t__ type; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct sockaddr_storage*) ;
 scalar_t__ FUNC_2 (int,struct sockaddr_storage*) ;
 int FUNC_3 (scalar_t__,struct sockaddr_storage*,int) ;
 int FUNC_4 (struct sockaddr_storage*,int) ;
 scalar_t__ FUNC_5 (struct sock_addr_test const*,struct sockaddr_storage*,struct sockaddr_storage*,struct sockaddr_storage*) ;
 int FUNC_6 (scalar_t__,struct sockaddr_storage*,int) ;

__attribute__((used)) static int FUNC_7(const struct sock_addr_test *VAR_1)
{
 socklen_t VAR_2 = sizeof(struct sockaddr_storage);
 struct sockaddr_storage VAR_3;
 struct sockaddr_storage VAR_4;
 struct sockaddr_storage VAR_5;
 int VAR_6 = -1;
 int VAR_7 = -1;
 int VAR_8 = 0;

 if (FUNC_5(VAR_1, &VAR_4, &VAR_5,
         &VAR_3))
  goto err;


 VAR_7 = FUNC_6(VAR_1->type, &VAR_5, VAR_2);
 if (VAR_7 == -1)
  goto err;

 VAR_6 = FUNC_3(VAR_1->type, &VAR_4, VAR_2);
 if (VAR_6 == -1)
  goto err;


 if (FUNC_2(VAR_6, &VAR_5))
  goto err;

 if (FUNC_1(VAR_6, &VAR_3))
  goto err;

 if (VAR_1->type == VAR_0) {

  VAR_6 = FUNC_4(&VAR_4, VAR_2);
  if (VAR_6 == -1)
   goto err;


  if (FUNC_2(VAR_6, &VAR_5))
   goto err;

  if (FUNC_1(VAR_6, &VAR_3))
   goto err;
 }

 goto out;
err:
 VAR_8 = -1;
out:
 FUNC_0(VAR_6);
 FUNC_0(VAR_7);
 return VAR_8;
}
