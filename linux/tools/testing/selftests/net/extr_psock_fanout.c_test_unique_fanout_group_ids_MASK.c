
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int,int*,int*) ;
 int FUNC_4 (int,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(void)
{
 int VAR_4[3];
 uint16_t VAR_5, VAR_6, VAR_7;

 FUNC_2(VAR_3, "test: unique ids\n");

 VAR_4[0] = FUNC_4(VAR_2 |
      VAR_1, 0);
 if (VAR_4[0] == -1) {
  FUNC_2(VAR_3, "ERROR: failed to create a unique id group.\n");
  FUNC_1(1);
 }

 FUNC_3(VAR_4[0], &VAR_5, &VAR_6);
 if (VAR_5 != VAR_2) {
  FUNC_2(VAR_3, "ERROR: unexpected typeflags %x\n", VAR_5);
  FUNC_1(1);
 }

 if (FUNC_4(VAR_0, VAR_6) != -1) {
  FUNC_2(VAR_3, "ERROR: joined group with wrong type.\n");
  FUNC_1(1);
 }

 VAR_4[1] = FUNC_4(VAR_2, VAR_6);
 if (VAR_4[1] == -1) {
  FUNC_2(VAR_3,
   "ERROR: failed to join previously created group.\n");
  FUNC_1(1);
 }

 VAR_4[2] = FUNC_4(VAR_2 |
      VAR_1, 0);
 if (VAR_4[2] == -1) {
  FUNC_2(VAR_3,
   "ERROR: failed to create a second unique id group.\n");
  FUNC_1(1);
 }

 FUNC_3(VAR_4[2], &VAR_5, &VAR_7);
 if (FUNC_4(VAR_2 | VAR_1,
        VAR_7) != -1) {
  FUNC_2(VAR_3,
   "ERROR: specified a group id when requesting unique id\n");
  FUNC_1(1);
 }

 if (FUNC_0(VAR_4[0]) || FUNC_0(VAR_4[1]) || FUNC_0(VAR_4[2])) {
  FUNC_2(VAR_3, "ERROR: closing sockets\n");
  FUNC_1(1);
 }
}
