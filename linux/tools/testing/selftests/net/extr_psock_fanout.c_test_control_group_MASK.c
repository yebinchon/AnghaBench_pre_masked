
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(void)
{
 int VAR_5[2];

 FUNC_2(VAR_4, "test: control multiple sockets\n");

 VAR_5[0] = FUNC_3(VAR_3, 0);
 if (VAR_5[0] == -1) {
  FUNC_2(VAR_4, "ERROR: failed to open HASH socket\n");
  FUNC_1(1);
 }
 if (FUNC_3(VAR_3 |
          VAR_1, 0) != -1) {
  FUNC_2(VAR_4, "ERROR: joined group with wrong flag defrag\n");
  FUNC_1(1);
 }
 if (FUNC_3(VAR_3 |
          VAR_2, 0) != -1) {
  FUNC_2(VAR_4, "ERROR: joined group with wrong flag ro\n");
  FUNC_1(1);
 }
 if (FUNC_3(VAR_0, 0) != -1) {
  FUNC_2(VAR_4, "ERROR: joined group with wrong mode\n");
  FUNC_1(1);
 }
 VAR_5[1] = FUNC_3(VAR_3, 0);
 if (VAR_5[1] == -1) {
  FUNC_2(VAR_4, "ERROR: failed to join group\n");
  FUNC_1(1);
 }
 if (FUNC_0(VAR_5[1]) || FUNC_0(VAR_5[0])) {
  FUNC_2(VAR_4, "ERROR: closing sockets\n");
  FUNC_1(1);
 }
}
