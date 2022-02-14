
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int nfa; struct colormap* cm; } ;
struct state {int dummy; } ;
struct cvec {scalar_t__* chrs; int nchrs; scalar_t__* ranges; int nranges; size_t cclasscode; } ;
struct colormap {int* classbits; int hiarraycols; int hiarrayrows; scalar_t__* hicolormap; } ;
typedef scalar_t__ color ;
typedef scalar_t__ chr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,scalar_t__,struct state*,struct state*) ;
 int FUNC_2 (struct colormap*) ;
 scalar_t__ FUNC_3 (struct colormap*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct colormap*,scalar_t__*) ;
 int FUNC_5 (struct vars*,scalar_t__,struct state*,struct state*,scalar_t__*) ;
 int FUNC_6 (struct vars*,scalar_t__,scalar_t__,struct state*,struct state*,scalar_t__*) ;

__attribute__((used)) static void
FUNC_7(struct vars *VAR_3,
    struct cvec *VAR_4,
    struct state *VAR_5,
    struct state *VAR_6)
{
 struct colormap *VAR_7 = VAR_3->cm;
 color VAR_8 = VAR_0;
 chr VAR_9,
    VAR_10,
    VAR_11;
 const chr *VAR_12;
 int VAR_13;


 for (VAR_12 = VAR_4->chrs, VAR_13 = VAR_4->nchrs; VAR_13 > 0; VAR_12++, VAR_13--)
 {
  VAR_9 = *VAR_12;
  FUNC_5(VAR_3, VAR_9, VAR_5, VAR_6, &VAR_8);
  FUNC_0();
 }


 for (VAR_12 = VAR_4->ranges, VAR_13 = VAR_4->nranges; VAR_13 > 0; VAR_12 += 2, VAR_13--)
 {
  VAR_10 = *VAR_12;
  VAR_11 = *(VAR_12 + 1);
  if (VAR_10 <= VAR_1)
  {

   chr VAR_14 = (VAR_11 <= VAR_1) ? VAR_11 : VAR_1;

   while (VAR_10 <= VAR_14)
   {
    color VAR_15 = FUNC_3(VAR_7, VAR_10);

    FUNC_0();
    if (VAR_15 != VAR_8)
    {
     FUNC_1(VAR_3->nfa, VAR_2, VAR_15, VAR_5, VAR_6);
     FUNC_0();
     VAR_8 = VAR_15;
    }
    VAR_10++;
   }
  }

  if (VAR_10 < VAR_11)
   FUNC_6(VAR_3, VAR_10, VAR_11, VAR_5, VAR_6, &VAR_8);
  else if (VAR_10 == VAR_11)
   FUNC_5(VAR_3, VAR_10, VAR_5, VAR_6, &VAR_8);
  FUNC_0();
 }


 if (VAR_4->cclasscode >= 0)
 {
  int VAR_16;
  color *VAR_17;
  int VAR_18,
     VAR_19;


  if (VAR_7->classbits[VAR_4->cclasscode] == 0)
  {
   VAR_7->classbits[VAR_4->cclasscode] = VAR_7->hiarraycols;
   FUNC_2(VAR_7);
   FUNC_0();
  }

  VAR_16 = VAR_7->classbits[VAR_4->cclasscode];
  VAR_17 = VAR_7->hicolormap;
  for (VAR_18 = 0; VAR_18 < VAR_7->hiarrayrows; VAR_18++)
  {
   for (VAR_19 = 0; VAR_19 < VAR_7->hiarraycols; VAR_19++)
   {
    if (VAR_19 & VAR_16)
    {
     color VAR_20 = FUNC_4(VAR_7, VAR_17);

     FUNC_0();

     if (VAR_20 != VAR_8)
     {
      FUNC_1(VAR_3->nfa, VAR_2, VAR_20, VAR_5, VAR_6);
      FUNC_0();
      VAR_8 = VAR_20;
     }
    }
    VAR_17++;
   }
  }
 }
}
