
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vars {struct colormap* cm; } ;
struct state {int dummy; } ;
struct colormap {int numcmranges; TYPE_1__* cmranges; } ;
struct TYPE_3__ {scalar_t__ cmax; scalar_t__ cmin; int rownum; } ;
typedef TYPE_1__ colormaprange ;
typedef int color ;
typedef scalar_t__ chr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 void* FUNC_4 (struct colormap*,int) ;
 int FUNC_5 (struct vars*,int,struct state*,struct state*,int *) ;

__attribute__((used)) static void
FUNC_6(struct vars *VAR_2,
     chr VAR_3,
     chr VAR_4,
     struct state *VAR_5,
     struct state *VAR_6,
     color *VAR_7)
{
 struct colormap *VAR_8 = VAR_2->cm;
 colormaprange *VAR_9;
 int VAR_10;
 colormaprange *VAR_11;
 int VAR_12;
 int VAR_13;


 FUNC_3(VAR_3 > VAR_0);
 FUNC_3(VAR_3 < VAR_4);





 VAR_9 = (colormaprange *)
  FUNC_2((VAR_8->numcmranges * 2 + 1) * sizeof(colormaprange));
 if (VAR_9 == ((void*)0))
 {
  FUNC_0(VAR_1);
  return;
 }
 VAR_10 = 0;


 for (VAR_11 = VAR_8->cmranges, VAR_12 = 0;
   VAR_12 < VAR_8->numcmranges;
   VAR_11++, VAR_12++)
 {
  if (VAR_11->cmax >= VAR_3)
   break;
  VAR_9[VAR_10++] = *VAR_11;
 }






 while (VAR_12 < VAR_8->numcmranges && VAR_11->cmin <= VAR_4)
 {
  if (VAR_3 < VAR_11->cmin)
  {

   VAR_9[VAR_10].cmin = VAR_3;
   VAR_9[VAR_10].cmax = VAR_11->cmin - 1;

   VAR_9[VAR_10].rownum = VAR_13 = FUNC_4(VAR_8, 0);
   VAR_10++;

   FUNC_5(VAR_2, VAR_13, VAR_5, VAR_6, VAR_7);

   VAR_3 = VAR_11->cmin;
  }

  if (VAR_3 <= VAR_11->cmin && VAR_4 >= VAR_11->cmax)
  {

   VAR_9[VAR_10++] = *VAR_11;
   VAR_13 = VAR_11->rownum;
   VAR_3 = VAR_11->cmax + 1;
  }
  else
  {

   if (VAR_3 > VAR_11->cmin)
   {

    VAR_9[VAR_10].cmin = VAR_11->cmin;
    VAR_9[VAR_10].cmax = VAR_3 - 1;
    VAR_9[VAR_10].rownum = VAR_11->rownum;
    VAR_10++;
   }

   VAR_9[VAR_10].cmin = VAR_3;
   VAR_9[VAR_10].cmax =
    (VAR_4 < VAR_11->cmax) ? VAR_4 : VAR_11->cmax;
   VAR_9[VAR_10].rownum = VAR_13 =
    FUNC_4(VAR_8, VAR_11->rownum);
   VAR_10++;
   if (VAR_4 < VAR_11->cmax)
   {

    VAR_9[VAR_10].cmin = VAR_4 + 1;
    VAR_9[VAR_10].cmax = VAR_11->cmax;

    VAR_9[VAR_10].rownum =
     (VAR_3 > VAR_11->cmin) ? FUNC_4(VAR_8, VAR_11->rownum) :
     VAR_11->rownum;
    VAR_10++;
   }
   VAR_3 = VAR_11->cmax + 1;
  }

  FUNC_5(VAR_2, VAR_13, VAR_5, VAR_6, VAR_7);

  VAR_11++, VAR_12++;
 }

 if (VAR_3 <= VAR_4)
 {

  VAR_9[VAR_10].cmin = VAR_3;
  VAR_9[VAR_10].cmax = VAR_4;

  VAR_9[VAR_10].rownum = VAR_13 = FUNC_4(VAR_8, 0);
  VAR_10++;

  FUNC_5(VAR_2, VAR_13, VAR_5, VAR_6, VAR_7);
 }


 for (; VAR_12 < VAR_8->numcmranges; VAR_11++, VAR_12++)
 {
  VAR_9[VAR_10++] = *VAR_11;
 }


 FUNC_3(VAR_10 <= (VAR_8->numcmranges * 2 + 1));


 if (VAR_8->cmranges != ((void*)0))
  FUNC_1(VAR_8->cmranges);
 VAR_8->cmranges = VAR_9;
 VAR_8->numcmranges = VAR_10;
}
