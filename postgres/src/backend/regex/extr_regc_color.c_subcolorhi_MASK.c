
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct colormap {TYPE_1__* cd; } ;
typedef size_t color ;
struct TYPE_2__ {int nuchrs; } ;


 scalar_t__ FUNC_0 () ;
 size_t VAR_0 ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (struct colormap*,size_t) ;

__attribute__((used)) static color
FUNC_3(struct colormap *VAR_1, color *VAR_2)
{
 color VAR_3;
 color VAR_4;

 VAR_3 = *VAR_2;
 VAR_4 = FUNC_2(VAR_1, VAR_3);
 if (FUNC_0())
  return VAR_0;
 FUNC_1(VAR_4 != VAR_0);

 if (VAR_3 == VAR_4)
  return VAR_3;
 VAR_1->cd[VAR_3].nuchrs--;
 VAR_1->cd[VAR_4].nuchrs++;
 *VAR_2 = VAR_4;
 return VAR_4;
}
