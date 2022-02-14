
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s6_addr; } ;
struct sockaddr_in6 {TYPE_1__ sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int,int *,char*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(void *VAR_4,
    int VAR_5, char *VAR_6,
    int VAR_7, int *VAR_8)
{
 struct sockaddr_in *VAR_9;
 struct sockaddr_in6 *VAR_10;
 int VAR_11;
 char VAR_12[50];
 const char *VAR_13;

 if (VAR_5 == VAR_0) {
  VAR_9 = (struct sockaddr_in *)VAR_4;
  VAR_13 = FUNC_0(VAR_5, &VAR_9->sin_addr, VAR_12, 50);
  VAR_11 = VAR_3;
 } else {
  VAR_10 = (struct sockaddr_in6 *)VAR_4;
  VAR_13 = FUNC_0(VAR_5, &VAR_10->sin6_addr.s6_addr, VAR_12, 50);
  VAR_11 = VAR_2;
 }

 if ((VAR_7 - *VAR_8) < VAR_11 + 2)
  return VAR_1;
 if (VAR_13 == ((void*)0)) {
  FUNC_2(VAR_6, "inet_ntop failed\n");
  return VAR_1;
 }
 if (*VAR_8 == 0)
  FUNC_2(VAR_6, VAR_12);
 else {
  FUNC_1(VAR_6, ";");
  FUNC_1(VAR_6, VAR_12);
 }

 *VAR_8 += FUNC_3(VAR_13) + 1;

 return 0;
}
