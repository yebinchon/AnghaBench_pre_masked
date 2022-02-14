
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int,char*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int,char*,int) ;

__attribute__((used)) static int FUNC_4(int VAR_2)
{
 char VAR_3[1024];
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_3, sizeof(VAR_3)-1);
 if (VAR_4 == 0) {
  FUNC_1("client closed connection.\n");
  return 0;
 } else if (VAR_4 < 0) {
  FUNC_1("failed to read message\n");
  return -1;
 }

 VAR_3[VAR_4] = '\0';
 FUNC_1("Incoming message:\n");
 FUNC_1("    %.24s%s\n", VAR_3, VAR_4 > 24 ? " ..." : "");

 if (!VAR_0 && VAR_1) {
  if (FUNC_3(VAR_2, VAR_3, VAR_4) < 0) {
   FUNC_0("failed to send buf");
   return -1;
  }
  FUNC_1("Sent message:\n");
  FUNC_1("     %.24s%s\n", VAR_3, VAR_4 > 24 ? " ..." : "");
 }

 return 1;
}
