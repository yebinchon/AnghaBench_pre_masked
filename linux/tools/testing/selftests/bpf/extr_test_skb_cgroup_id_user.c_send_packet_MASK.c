
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int msg ;
typedef int dst ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,char const*,struct sockaddr_in6*) ;
 int FUNC_3 (int,char**,int,int ,struct sockaddr const*,int) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(const char *VAR_3)
{
 struct sockaddr_in6 VAR_4;
 char VAR_5[] = "msg";
 int VAR_6 = 0;
 int VAR_7 = -1;

 if (FUNC_2(VAR_1, VAR_3, &VAR_4))
  goto err;

 VAR_7 = FUNC_4(VAR_0, VAR_2, 0);
 if (VAR_7 == -1) {
  FUNC_1("Failed to create UDP socket");
  goto err;
 }

 if (FUNC_3(VAR_7, &VAR_5, sizeof(VAR_5), 0, (const struct sockaddr *)&VAR_4,
     sizeof(VAR_4)) == -1) {
  FUNC_1("Failed to send datagram");
  goto err;
 }

 goto out;
err:
 VAR_6 = -1;
out:
 if (VAR_7 >= 0)
  FUNC_0(VAR_7);
 return VAR_6;
}
