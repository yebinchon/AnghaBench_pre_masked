
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_family; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int FUNC_0 (int,struct sockaddr const*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(const struct sockaddr *VAR_1, socklen_t VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_4(VAR_1->sa_family, VAR_0, 0);
 if (VAR_3 == -1) {
  FUNC_3("Failed to create server socket");
  goto out;
 }

 if (FUNC_0(VAR_3, VAR_1, VAR_2) == -1) {
  FUNC_3("Failed to bind server socket");
  goto close_out;
 }

 if (FUNC_2(VAR_3, 128) == -1) {
  FUNC_3("Failed to listen on server socket");
  goto close_out;
 }

 goto out;

close_out:
 FUNC_1(VAR_3);
 VAR_3 = -1;
out:
 return VAR_3;
}
