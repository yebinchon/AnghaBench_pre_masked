
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tv ;
struct timeval {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ,struct timeval*,int) ;
 int FUNC_1 (int ,char*) ;

bool FUNC_2(int VAR_3, struct timeval VAR_4) {
 if (FUNC_0(VAR_3, VAR_0, VAR_1, &VAR_4, sizeof(VAR_4)) == -1) {
  FUNC_1(VAR_2, "Failed to set ipc recv timeout");
  return 0;
 }
 return 1;
}
