
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int ss ;
typedef int socklen_t ;
typedef int port ;
typedef int host ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,struct sockaddr*,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sockaddr*,int,char*,int,char*,int,int) ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 (struct sockaddr_storage*,int ,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(int VAR_4)
{
 int VAR_5;
 struct sockaddr_storage VAR_6;
 socklen_t VAR_7 = sizeof(VAR_6);
 char VAR_8[VAR_0], VAR_9[VAR_1];
 int VAR_10;

 FUNC_6(&VAR_6, 0, sizeof(VAR_6));

 VAR_5 = FUNC_0(VAR_4, (struct sockaddr *)&VAR_6, &VAR_7);
 if (VAR_5 < 0) {
  FUNC_2("failed to accept connection");
  return -1;
 }

 VAR_10 = FUNC_4((struct sockaddr *)&VAR_6, VAR_7, VAR_8, sizeof(VAR_8),
    VAR_9, sizeof(VAR_9), VAR_2 | VAR_3);
 if (VAR_10)
  FUNC_2("getnameinfo: %s", FUNC_3(VAR_10));
 FUNC_5("connection from %s:%s", VAR_8, VAR_9);

 return VAR_5;
}
