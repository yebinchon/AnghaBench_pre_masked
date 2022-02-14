
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int start; int last; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  u32 VAR_7 = (FUNC_0(&VAR_5) >> 4) % VAR_0;
  u32 VAR_8 = (FUNC_0(&VAR_5) >> 4) % VAR_7;

  VAR_2[VAR_6].start = VAR_8;
  VAR_2[VAR_6].last = VAR_7;
 }






 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  VAR_4[VAR_6] = (FUNC_0(&VAR_5) >> 4) % VAR_0;
}
