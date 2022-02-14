
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sub; int plus; int seed; scalar_t__ num_colors; } ;
typedef TYPE_1__ gdScatter ;
typedef int gdImagePtr ;


 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*) ;

int FUNC_2(gdImagePtr VAR_0, int VAR_1, int VAR_2)
{
 gdScatter VAR_3;

 VAR_3.sub = VAR_1;
 VAR_3.plus = VAR_2;
 VAR_3.num_colors = 0;
 VAR_3.seed = FUNC_0();
 return FUNC_1(VAR_0, &VAR_3);
}
