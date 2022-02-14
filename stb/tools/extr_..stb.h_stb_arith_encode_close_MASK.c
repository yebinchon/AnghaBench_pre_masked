
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int stbfile ;
struct TYPE_5__ {int range_low; int * output; } ;
typedef TYPE_1__ stb_arith ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;

stbfile *FUNC_2(stb_arith *VAR_0)
{

   FUNC_1(VAR_0, VAR_0->range_low >> 24);
   FUNC_1(VAR_0, VAR_0->range_low >> 16);
   FUNC_1(VAR_0, VAR_0->range_low >> 8);
   FUNC_1(VAR_0, VAR_0->range_low >> 0);
   FUNC_0(VAR_0);
   return VAR_0->output;
}
