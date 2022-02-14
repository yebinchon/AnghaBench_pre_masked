
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error; int thread; } ;
typedef TYPE_1__ MuOfficeRender ;
typedef int MuError ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

MuError FUNC_1(MuOfficeRender *VAR_1)
{
 if (!VAR_1)
  return VAR_0;

 FUNC_0(&VAR_1->thread);

 return VAR_1->error;
}
