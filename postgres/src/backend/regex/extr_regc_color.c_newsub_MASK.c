
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct colormap {TYPE_1__* cd; } ;
typedef size_t color ;
struct TYPE_2__ {size_t sub; int nschrs; int nuchrs; } ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (struct colormap*) ;

__attribute__((used)) static color
FUNC_3(struct colormap *VAR_2,
    color VAR_3)
{
 color VAR_4;

 VAR_4 = VAR_2->cd[VAR_3].sub;
 if (VAR_4 == VAR_1)
 {

  if ((VAR_2->cd[VAR_3].nschrs + VAR_2->cd[VAR_3].nuchrs) == 1)
   return VAR_3;
  VAR_4 = FUNC_2(VAR_2);
  if (VAR_4 == VAR_0)
  {
   FUNC_1(FUNC_0());
   return VAR_0;
  }
  VAR_2->cd[VAR_3].sub = VAR_4;
  VAR_2->cd[VAR_4].sub = VAR_4;
 }
 FUNC_1(VAR_4 != VAR_1);

 return VAR_4;
}
