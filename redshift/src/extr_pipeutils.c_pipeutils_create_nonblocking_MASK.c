
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int*) ;

int
FUNC_4(int VAR_3[2])
{
 int VAR_4 = FUNC_3(VAR_3);
 if (VAR_4 == -1) {
  FUNC_2("pipe");
  return -1;
 }

 int VAR_5 = FUNC_1(VAR_3[0], VAR_0);
 if (VAR_5 == -1) {
  FUNC_2("fcntl");
  FUNC_0(VAR_3[0]);
  FUNC_0(VAR_3[1]);
  return -1;
 }

 VAR_4 = FUNC_1(VAR_3[0], VAR_1, VAR_5 | VAR_2);
 if (VAR_4 == -1) {
  FUNC_2("fcntl");
  FUNC_0(VAR_3[0]);
  FUNC_0(VAR_3[1]);
  return -1;
 }

 VAR_5 = FUNC_1(VAR_3[1], VAR_0);
 if (VAR_5 == -1) {
  FUNC_2("fcntl");
  FUNC_0(VAR_3[0]);
  FUNC_0(VAR_3[1]);
  return -1;
 }

 VAR_4 = FUNC_1(VAR_3[1], VAR_1, VAR_5 | VAR_2);
 if (VAR_4 == -1) {
  FUNC_2("fcntl");
  FUNC_0(VAR_3[0]);
  FUNC_0(VAR_3[1]);
  return -1;
 }

 return 0;
}
