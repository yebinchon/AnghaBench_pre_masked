
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_3__ {int* ntom_val; int spf; int ntom_step; } ;
typedef TYPE_1__ mpg123_handle ;


 int VAR_0 ;

off_t FUNC_0(mpg123_handle *VAR_1)
{

 int VAR_2 = VAR_1->ntom_val[0];
 VAR_2 += VAR_1->spf*VAR_1->ntom_step;
 return VAR_2/VAR_0;
}
