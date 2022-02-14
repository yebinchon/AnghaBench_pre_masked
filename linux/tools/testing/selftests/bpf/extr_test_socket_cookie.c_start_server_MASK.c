
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {scalar_t__ sin6_port; int sin6_addr; int sin6_family; } ;
struct sockaddr {int dummy; } ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct sockaddr const*,int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct sockaddr_in6*,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(void)
{
 struct sockaddr_in6 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_5(VAR_0, VAR_1, 0);
 if (VAR_4 == -1) {
  FUNC_3("Failed to create server socket");
  goto out;
 }

 FUNC_4(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.sin6_family = VAR_0;
 VAR_3.sin6_addr = VAR_2;
 VAR_3.sin6_port = 0;

 if (FUNC_0(VAR_4, (const struct sockaddr *)&VAR_3, sizeof(VAR_3)) == -1) {
  FUNC_3("Failed to bind server socket");
  goto close_out;
 }

 if (FUNC_2(VAR_4, 128) == -1) {
  FUNC_3("Failed to listen on server socket");
  goto close_out;
 }

 goto out;

close_out:
 FUNC_1(VAR_4);
 VAR_4 = -1;
out:
 return VAR_4;
}
