
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
typedef TYPE_1__ fz_css_match_prop ;
struct TYPE_5__ {int count; TYPE_1__* prop; } ;
typedef TYPE_2__ fz_css_match ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(fz_css_match *VAR_0)
{
 int VAR_1 = VAR_0->count;
 fz_css_match_prop *VAR_2 = VAR_0->prop;
 int VAR_3, VAR_4;


 for (VAR_3 = 1; VAR_3 < VAR_1; ++VAR_3)
 {
  VAR_4 = VAR_3;
  while (VAR_4 > 0 && FUNC_0(VAR_2[VAR_4-1].name, VAR_2[VAR_4].name) > 0)
  {
   fz_css_match_prop VAR_5 = VAR_2[VAR_4-1];
   VAR_2[VAR_4-1] = VAR_2[VAR_4];
   VAR_2[VAR_4] = VAR_5;
   --VAR_4;
  }
 }
}
