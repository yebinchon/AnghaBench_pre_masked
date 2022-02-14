
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int buffer ;
typedef int address ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct sockaddr*,int*) ;
 int FUNC_1 (int,int ) ;
 int * FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,char*,int) ;
 int FUNC_5 (struct sockaddr_storage*,int ,int) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int ,char*,char const*,...) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_10(const char* VAR_6, unsigned short VAR_7, int VAR_8, int *VAR_9, FILE **VAR_10) {
 FUNC_6(*VAR_9, *VAR_10);

 if (VAR_8 < 0) {
  FUNC_7(FUNC_3(VAR_3), "Initializing connection on %s:%u failed", VAR_6, VAR_7);

  return VAR_1;
 }

 FUNC_7(FUNC_3(VAR_3), "accepting connections on %s:%u", VAR_6, VAR_7);
 {
  struct sockaddr_storage VAR_11;
  socklen_t VAR_12 = sizeof(VAR_11);
  char VAR_13[20] = {0};

  FUNC_5(&VAR_11, 0, VAR_12);
  *VAR_9 = FUNC_0(VAR_8, (struct sockaddr *) &VAR_11, &VAR_12);
  FUNC_4(VAR_0, &(((struct sockaddr_in *)&VAR_11)->sin_addr), VAR_13, sizeof(VAR_13));

  FUNC_7(FUNC_3(VAR_3), "connection established from %s", VAR_13);
 }


 FUNC_1(*VAR_9, FUNC_3(VAR_5));
 FUNC_1(*VAR_9, FUNC_3(VAR_4));

 FUNC_9(VAR_5, ((void*)0));

 *VAR_10 = FUNC_2(*VAR_9, "r+");

 FUNC_8(*VAR_9);

 return VAR_2;
}
