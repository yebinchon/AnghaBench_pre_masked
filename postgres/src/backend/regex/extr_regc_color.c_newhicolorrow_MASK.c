
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct colormap {int hiarrayrows; int maxarrayrows; int hiarraycols; size_t* hicolormap; TYPE_1__* cd; } ;
typedef size_t color ;
struct TYPE_2__ {int nuchrs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (size_t*,int) ;
 int VAR_1 ;
 int FUNC_2 (size_t*,size_t*,int) ;

__attribute__((used)) static int
FUNC_3(struct colormap *VAR_2,
     int VAR_3)
{
 int VAR_4 = VAR_2->hiarrayrows;
 color *VAR_5;
 int VAR_6;


 if (VAR_4 >= VAR_2->maxarrayrows)
 {
  color *VAR_7;

  if (VAR_2->maxarrayrows >= VAR_0 / (VAR_2->hiarraycols * 2))
  {
   FUNC_0(VAR_1);
   return 0;
  }
  VAR_7 = (color *) FUNC_1(VAR_2->hicolormap,
          VAR_2->maxarrayrows * 2 *
          VAR_2->hiarraycols * sizeof(color));
  if (VAR_7 == ((void*)0))
  {
   FUNC_0(VAR_1);
   return 0;
  }
  VAR_2->hicolormap = VAR_7;
  VAR_2->maxarrayrows *= 2;
 }
 VAR_2->hiarrayrows++;


 VAR_5 = &VAR_2->hicolormap[VAR_4 * VAR_2->hiarraycols];
 FUNC_2(VAR_5,
     &VAR_2->hicolormap[VAR_3 * VAR_2->hiarraycols],
     VAR_2->hiarraycols * sizeof(color));


 for (VAR_6 = 0; VAR_6 < VAR_2->hiarraycols; VAR_6++)
  VAR_2->cd[VAR_5[VAR_6]].nuchrs++;

 return VAR_4;
}
