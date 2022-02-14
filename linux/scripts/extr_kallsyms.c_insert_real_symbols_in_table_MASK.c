
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int len; unsigned int* sym; } ;


 unsigned int** VAR_0 ;
 int* VAR_1 ;
 TYPE_1__* VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static void FUNC_0(void)
{
 unsigned int VAR_4, VAR_5, VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  for (VAR_5 = 0; VAR_5 < VAR_2[VAR_4].len; VAR_5++) {
   VAR_6 = VAR_2[VAR_4].sym[VAR_5];
   VAR_0[VAR_6][0]=VAR_6;
   VAR_1[VAR_6]=1;
  }
 }
}
