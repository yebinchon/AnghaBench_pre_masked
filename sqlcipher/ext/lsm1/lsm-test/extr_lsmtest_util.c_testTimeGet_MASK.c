
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_2__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;


 int FUNC_0 (struct timeval*,int ) ;
 TYPE_1__ VAR_0 ;

int FUNC_1(void){
  struct timeval VAR_1;
  FUNC_0(&VAR_1, 0);
  return
    (((int)VAR_1.tv_sec - (int)VAR_0.tv_sec)*1000) +
    (((int)VAR_1.tv_usec - (int)VAR_0.tv_usec)/1000);
}
