
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct sock_addr_test {scalar_t__ expected_src_ip; int domain; int requested_port; scalar_t__ requested_ip; int expected_port; scalar_t__ expected_ip; } ;
typedef int socklen_t ;


 int FUNC_0 (int ,scalar_t__,int ,struct sockaddr*,int) ;

__attribute__((used)) static int FUNC_1(const struct sock_addr_test *VAR_0,
        struct sockaddr_storage *VAR_1,
        struct sockaddr_storage *VAR_2,
        struct sockaddr_storage *VAR_3)
{
 socklen_t VAR_4 = sizeof(struct sockaddr_storage);

 if (FUNC_0(VAR_0->domain, VAR_0->expected_ip, VAR_0->expected_port,
   (struct sockaddr *)VAR_2, VAR_4) == -1)
  goto err;

 if (FUNC_0(VAR_0->domain, VAR_0->requested_ip, VAR_0->requested_port,
   (struct sockaddr *)VAR_1, VAR_4) == -1)
  goto err;

 if (VAR_0->expected_src_ip &&
     FUNC_0(VAR_0->domain, VAR_0->expected_src_ip, 0,
   (struct sockaddr *)VAR_3, VAR_4) == -1)
  goto err;

 return 0;
err:
 return -1;
}
