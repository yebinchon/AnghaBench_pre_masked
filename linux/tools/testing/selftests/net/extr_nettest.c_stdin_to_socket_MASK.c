
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,char*,int,int ,void*,int ) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_6 (int,char*,int) ;

__attribute__((used)) static int FUNC_7(int VAR_5, int VAR_6, void *VAR_7, socklen_t VAR_8)
{
 char VAR_9[1024];
 int VAR_10;

 if (FUNC_0(VAR_9, sizeof(VAR_9), VAR_3) == ((void*)0))
  return 0;

 VAR_10 = FUNC_5(VAR_9);
 if (VAR_6 == VAR_1) {
  if (FUNC_6(VAR_5, VAR_9, VAR_10) < 0) {
   FUNC_1("failed to send buf");
   return -1;
  }
 } else {
  int VAR_11;

again:
  VAR_11 = FUNC_3(VAR_5, VAR_9, VAR_10, 0, VAR_7, VAR_8);
  if (VAR_11 < 0) {
   if (VAR_2 == VAR_0 && VAR_4) {
    VAR_4 = 0;
    if (!FUNC_4(VAR_5))
     goto again;
    VAR_2 = VAR_0;
   }
   FUNC_1("failed to send msg to peer");
   return -1;
  }
 }
 FUNC_2("Sent message:\n");
 FUNC_2("    %.24s%s\n", VAR_9, VAR_10 > 24 ? " ..." : "");

 return 1;
}
