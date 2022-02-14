
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sock_addr_test {scalar_t__ type; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct sockaddr_storage*,struct sockaddr_storage*,int ) ;
 scalar_t__ FUNC_2 (struct sock_addr_test const*,struct sockaddr_storage*,struct sockaddr_storage*,struct sockaddr_storage*) ;
 int FUNC_3 (int,struct sockaddr_storage*) ;
 int FUNC_4 (scalar_t__,struct sockaddr_storage*,int,int,int ,int*) ;
 int FUNC_5 (scalar_t__,struct sockaddr_storage*,int) ;

__attribute__((used)) static int FUNC_6(const struct sock_addr_test *VAR_1, int VAR_2)
{
 socklen_t VAR_3 = sizeof(struct sockaddr_storage);
 struct sockaddr_storage VAR_4;
 struct sockaddr_storage VAR_5;
 struct sockaddr_storage VAR_6;
 struct sockaddr_storage VAR_7;
 int VAR_8 = -1;
 int VAR_9 = -1;
 int VAR_10;
 int VAR_11 = 0;

 if (VAR_1->type != VAR_0)
  goto err;

 if (FUNC_2(VAR_1, &VAR_6, &VAR_5, &VAR_4))
  goto err;


 VAR_9 = FUNC_5(VAR_1->type, &VAR_5, VAR_3);
 if (VAR_9 == -1)
  goto err;

 for (VAR_10 = 0; VAR_10 <= VAR_2; ++VAR_10) {
  if (VAR_8 >= 0)
   FUNC_0(VAR_8);

  VAR_8 = FUNC_4(VAR_1->type, &VAR_6,
          VAR_3, VAR_10, 0,
          &VAR_11);
  if (VAR_11)
   goto out;
  else if (VAR_8 == -1)
   goto err;
  if (FUNC_3(VAR_9, &VAR_7) == -1)
   goto err;

  if (FUNC_1(&VAR_7, &VAR_4, 0))
   goto err;
 }

 goto out;
err:
 VAR_11 = -1;
out:
 FUNC_0(VAR_8);
 FUNC_0(VAR_9);
 return VAR_11;
}
