
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * mutexes; } ;
typedef TYPE_1__ MuOfficeLib ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(MuOfficeLib *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0+1; VAR_2++)
  FUNC_0(&VAR_1->mutexes[VAR_2]);
}
