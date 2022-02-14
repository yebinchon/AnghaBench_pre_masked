
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct swaybar {int ipc_socketfd; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char*,int*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 size_t FUNC_4 (char const*) ;

void FUNC_5(struct swaybar *VAR_1, const char *VAR_2) {
 uint32_t VAR_3 = FUNC_4("workspace \"\"") + FUNC_4(VAR_2);
 for (size_t VAR_4 = 0; VAR_4 < FUNC_4(VAR_2); ++VAR_4) {
  if (VAR_2[VAR_4] == '"' || VAR_2[VAR_4] == '\\') {
   ++VAR_3;
  }
 }

 char *VAR_5 = FUNC_2(VAR_3 + 1);
 if (!VAR_5) {
  return;
 }

 FUNC_3(VAR_5, "workspace \"");
 FUNC_3(&VAR_5[VAR_3 - 1], "\"");
 for (size_t VAR_6 = 0, VAR_7 = FUNC_4("workspace \""); VAR_6 < FUNC_4(VAR_2); ++VAR_6) {
  if (VAR_2[VAR_6] == '"' || VAR_2[VAR_6] == '\\') {
   VAR_5[VAR_7++] = '\\';
  }
  VAR_5[VAR_7++] = VAR_2[VAR_6];
 }

 FUNC_1(VAR_1->ipc_socketfd, VAR_0, VAR_5, &VAR_3);
 FUNC_0(VAR_5);
}
