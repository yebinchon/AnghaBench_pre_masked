
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* img_comp; TYPE_1__* s; } ;
typedef TYPE_3__ stbi__jpeg ;
struct TYPE_6__ {int * linebuf; scalar_t__ coeff; int * raw_coeff; int * data; int * raw_data; } ;
struct TYPE_5__ {int img_n; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(stbi__jpeg *VAR_0)
{
   int VAR_1;
   for (VAR_1=0; VAR_1 < VAR_0->s->img_n; ++VAR_1) {
      if (VAR_0->img_comp[VAR_1].raw_data) {
         FUNC_0(VAR_0->img_comp[VAR_1].raw_data);
         VAR_0->img_comp[VAR_1].raw_data = ((void*)0);
         VAR_0->img_comp[VAR_1].data = ((void*)0);
      }
      if (VAR_0->img_comp[VAR_1].raw_coeff) {
         FUNC_0(VAR_0->img_comp[VAR_1].raw_coeff);
         VAR_0->img_comp[VAR_1].raw_coeff = 0;
         VAR_0->img_comp[VAR_1].coeff = 0;
      }
      if (VAR_0->img_comp[VAR_1].linebuf) {
         FUNC_0(VAR_0->img_comp[VAR_1].linebuf);
         VAR_0->img_comp[VAR_1].linebuf = ((void*)0);
      }
   }
}
