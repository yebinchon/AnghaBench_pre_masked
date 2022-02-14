
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sock_addr_test {int type; } ;
typedef int socklen_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct sockaddr_storage*) ;
 int FUNC_2 (int ,struct sockaddr_storage*,int) ;
 scalar_t__ FUNC_3 (struct sock_addr_test const*,struct sockaddr_storage*,struct sockaddr_storage*,int *) ;
 int FUNC_4 (int ,struct sockaddr_storage*,int) ;

__attribute__((used)) static int FUNC_5(const struct sock_addr_test *VAR_0)
{
 socklen_t VAR_1 = sizeof(struct sockaddr_storage);
 struct sockaddr_storage VAR_2;
 struct sockaddr_storage VAR_3;
 int VAR_4 = -1;
 int VAR_5 = -1;
 int VAR_6 = 0;

 if (FUNC_3(VAR_0, &VAR_2, &VAR_3, ((void*)0)))
  goto err;

 VAR_5 = FUNC_4(VAR_0->type, &VAR_2, VAR_1);
 if (VAR_5 == -1)
  goto err;

 if (FUNC_1(VAR_5, &VAR_3))
  goto err;


 VAR_4 = FUNC_2(VAR_0->type, &VAR_3, VAR_1);
 if (VAR_4 == -1)
  goto err;

 goto out;
err:
 VAR_6 = -1;
out:
 FUNC_0(VAR_4);
 FUNC_0(VAR_5);
 return VAR_6;
}
