
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;

int FUNC_2(struct pollfd *VAR_1, int VAR_2, int VAR_3) {
  FUNC_0("poll(2) not supported on this system\n",VAR_0);
  FUNC_1(5);
  return -1;
}
