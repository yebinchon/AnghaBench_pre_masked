
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct colormap {int hiarraycols; int maxarrayrows; size_t* hicolormap; int hiarrayrows; TYPE_1__* cd; } ;
typedef size_t color ;
struct TYPE_2__ {int nuchrs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (size_t*,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct colormap *VAR_2)
{
 color *VAR_3;
 int VAR_4,
    VAR_5;

 if (VAR_2->hiarraycols >= VAR_0 / (VAR_2->maxarrayrows * 2))
 {
  FUNC_0(VAR_1);
  return;
 }
 VAR_3 = (color *) FUNC_1(VAR_2->hicolormap,
         VAR_2->maxarrayrows *
         VAR_2->hiarraycols * 2 * sizeof(color));
 if (VAR_3 == ((void*)0))
 {
  FUNC_0(VAR_1);
  return;
 }
 VAR_2->hicolormap = VAR_3;



 for (VAR_4 = VAR_2->hiarrayrows - 1; VAR_4 >= 0; VAR_4--)
 {
  color *VAR_6 = &VAR_3[VAR_4 * VAR_2->hiarraycols];
  color *VAR_7 = &VAR_3[VAR_4 * VAR_2->hiarraycols * 2];
  color *VAR_8 = VAR_7 + VAR_2->hiarraycols;

  for (VAR_5 = 0; VAR_5 < VAR_2->hiarraycols; VAR_5++)
  {
   color VAR_9 = VAR_6[VAR_5];

   VAR_7[VAR_5] = VAR_8[VAR_5] = VAR_9;
   VAR_2->cd[VAR_9].nuchrs++;
  }
 }

 VAR_2->hiarraycols *= 2;
}
