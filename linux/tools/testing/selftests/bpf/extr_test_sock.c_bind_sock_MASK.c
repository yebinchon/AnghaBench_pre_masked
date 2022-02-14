
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_family; int sin6_addr; void* sin6_port; } ;
struct sockaddr_in {int sin_family; int sin_addr; void* sin_port; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct sockaddr const*,int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (unsigned short) ;
 int FUNC_3 (int,char const*,void*) ;
 int FUNC_4 (struct sockaddr_storage*,int ,int) ;
 int FUNC_5 (int,int,int ) ;

__attribute__((used)) static int FUNC_6(int VAR_2, int VAR_3, const char *VAR_4, unsigned short VAR_5)
{
 struct sockaddr_storage VAR_6;
 struct sockaddr_in6 *VAR_7;
 struct sockaddr_in *VAR_8;
 int VAR_9 = -1;
 socklen_t VAR_10;
 int VAR_11 = 0;

 VAR_9 = FUNC_5(VAR_2, VAR_3, 0);
 if (VAR_9 < 0)
  goto err;

 FUNC_4(&VAR_6, 0, sizeof(VAR_6));

 if (VAR_2 == VAR_0) {
  VAR_10 = sizeof(struct sockaddr_in);
  VAR_8 = (struct sockaddr_in *)&VAR_6;
  VAR_8->sin_family = VAR_2;
  VAR_8->sin_port = FUNC_2(VAR_5);
  if (FUNC_3(VAR_2, VAR_4, (void *)&VAR_8->sin_addr) != 1)
   goto err;
 } else if (VAR_2 == VAR_1) {
  VAR_10 = sizeof(struct sockaddr_in6);
  VAR_7 = (struct sockaddr_in6 *)&VAR_6;
  VAR_7->sin6_family = VAR_2;
  VAR_7->sin6_port = FUNC_2(VAR_5);
  if (FUNC_3(VAR_2, VAR_4, (void *)&VAR_7->sin6_addr) != 1)
   goto err;
 } else {
  goto err;
 }

 if (FUNC_0(VAR_9, (const struct sockaddr *)&VAR_6, VAR_10) == -1)
  goto err;

 goto out;
err:
 VAR_11 = -1;
out:
 FUNC_1(VAR_9);
 return VAR_11;
}
