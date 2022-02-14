
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct colormap {size_t* locolormap; TYPE_1__* cd; } ;
typedef size_t color ;
typedef scalar_t__ chr ;
struct TYPE_2__ {scalar_t__ nschrs; scalar_t__ firstchr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (struct colormap*,size_t) ;

__attribute__((used)) static color
FUNC_3(struct colormap *VAR_3, chr VAR_4)
{
 color VAR_5;
 color VAR_6;

 FUNC_1(VAR_4 <= VAR_2);

 VAR_5 = VAR_3->locolormap[VAR_4 - VAR_0];
 VAR_6 = FUNC_2(VAR_3, VAR_5);
 if (FUNC_0())
  return VAR_1;
 FUNC_1(VAR_6 != VAR_1);

 if (VAR_5 == VAR_6)
  return VAR_5;
 VAR_3->cd[VAR_5].nschrs--;
 if (VAR_3->cd[VAR_6].nschrs == 0)
  VAR_3->cd[VAR_6].firstchr = VAR_4;
 VAR_3->cd[VAR_6].nschrs++;
 VAR_3->locolormap[VAR_4 - VAR_0] = VAR_6;
 return VAR_6;
}
