
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* s; } ;
typedef TYPE_1__ png ;
struct TYPE_6__ {int img_x; int img_y; int img_n; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(png *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4)
{
   if (!FUNC_0(VAR_1, VAR_0, 0)) {
      FUNC_1( VAR_1->s );
      return 0;
   }
   if (VAR_2) *VAR_2 = VAR_1->s->img_x;
   if (VAR_3) *VAR_3 = VAR_1->s->img_y;
   if (VAR_4) *VAR_4 = VAR_1->s->img_n;
   return 1;
}
