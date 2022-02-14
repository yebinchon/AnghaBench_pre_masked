
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vars {int nfa; struct colormap* cm; } ;
struct state {int dummy; } ;
struct colormap {int numcmranges; TYPE_1__* cmranges; } ;
struct TYPE_3__ {scalar_t__ cmax; scalar_t__ cmin; int rownum; } ;
typedef TYPE_1__ colormaprange ;
typedef scalar_t__ color ;
typedef scalar_t__ chr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,scalar_t__,struct state*,struct state*) ;
 void* FUNC_6 (struct colormap*,int) ;
 scalar_t__ FUNC_7 (struct colormap*,scalar_t__) ;
 int FUNC_8 (struct vars*,int,struct state*,struct state*,scalar_t__*) ;

__attribute__((used)) static void
FUNC_9(struct vars *VAR_3,
      chr VAR_4,
      struct state *VAR_5,
      struct state *VAR_6,
      color *VAR_7)
{
 struct colormap *VAR_8 = VAR_3->cm;
 colormaprange *VAR_9;
 int VAR_10;
 colormaprange *VAR_11;
 int VAR_12;
 int VAR_13;


 if (VAR_4 <= VAR_0)
 {
  color VAR_14 = FUNC_7(VAR_8, VAR_4);

  FUNC_3();
  if (VAR_14 != *VAR_7)
  {
   FUNC_5(VAR_3->nfa, VAR_1, VAR_14, VAR_5, VAR_6);
   *VAR_7 = VAR_14;
  }
  return;
 }





 VAR_9 = (colormaprange *)
  FUNC_2((VAR_8->numcmranges + 2) * sizeof(colormaprange));
 if (VAR_9 == ((void*)0))
 {
  FUNC_0(VAR_2);
  return;
 }
 VAR_10 = 0;


 for (VAR_11 = VAR_8->cmranges, VAR_12 = 0;
   VAR_12 < VAR_8->numcmranges;
   VAR_11++, VAR_12++)
 {
  if (VAR_11->cmax >= VAR_4)
   break;
  VAR_9[VAR_10++] = *VAR_11;
 }


 if (VAR_12 >= VAR_8->numcmranges || VAR_11->cmin > VAR_4)
 {

  VAR_9[VAR_10].cmin = VAR_4;
  VAR_9[VAR_10].cmax = VAR_4;

  VAR_9[VAR_10].rownum = VAR_13 = FUNC_6(VAR_8, 0);
  VAR_10++;
 }
 else if (VAR_11->cmin == VAR_11->cmax)
 {

  VAR_9[VAR_10++] = *VAR_11;
  VAR_13 = VAR_11->rownum;

  VAR_11++, VAR_12++;
 }
 else
 {

  if (VAR_4 > VAR_11->cmin)
  {

   VAR_9[VAR_10].cmin = VAR_11->cmin;
   VAR_9[VAR_10].cmax = VAR_4 - 1;
   VAR_9[VAR_10].rownum = VAR_11->rownum;
   VAR_10++;
  }

  VAR_9[VAR_10].cmin = VAR_4;
  VAR_9[VAR_10].cmax = VAR_4;
  VAR_9[VAR_10].rownum = VAR_13 =
   FUNC_6(VAR_8, VAR_11->rownum);
  VAR_10++;
  if (VAR_4 < VAR_11->cmax)
  {

   VAR_9[VAR_10].cmin = VAR_4 + 1;
   VAR_9[VAR_10].cmax = VAR_11->cmax;

   VAR_9[VAR_10].rownum =
    (VAR_4 > VAR_11->cmin) ? FUNC_6(VAR_8, VAR_11->rownum) :
    VAR_11->rownum;
   VAR_10++;
  }

  VAR_11++, VAR_12++;
 }


 FUNC_8(VAR_3, VAR_13, VAR_5, VAR_6, VAR_7);


 for (; VAR_12 < VAR_8->numcmranges; VAR_11++, VAR_12++)
 {
  VAR_9[VAR_10++] = *VAR_11;
 }


 FUNC_4(VAR_10 <= (VAR_8->numcmranges + 2));


 if (VAR_8->cmranges != ((void*)0))
  FUNC_1(VAR_8->cmranges);
 VAR_8->cmranges = VAR_9;
 VAR_8->numcmranges = VAR_10;
}
