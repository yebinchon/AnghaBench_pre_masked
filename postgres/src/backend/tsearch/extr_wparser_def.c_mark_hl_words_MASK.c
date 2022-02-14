
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int curwords; TYPE_1__* words; } ;
struct TYPE_5__ {int len; int selected; int replace; int skip; int in; scalar_t__ repeated; int type; scalar_t__ item; } ;
typedef int TSQuery ;
typedef TYPE_2__ HeadlineParsedText ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ,int*,int*) ;

__attribute__((used)) static void
FUNC_6(HeadlineParsedText *VAR_0, TSQuery VAR_1, int VAR_2,
     int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = 0,
    VAR_7 = 0;
 int VAR_8 = -1,
    VAR_9 = -1;
 int VAR_10 = -1;
 int VAR_11 = 0,
    VAR_12,
    VAR_13,
    VAR_14;

 int VAR_15;

 if (VAR_2 == 0)
 {
  while (FUNC_5(VAR_0, VAR_1, &VAR_6, &VAR_7))
  {

   VAR_14 = 0;
   VAR_13 = 0;
   for (VAR_15 = VAR_6; VAR_15 <= VAR_7 && VAR_14 < VAR_5; VAR_15++)
   {
    if (!FUNC_3(VAR_0->words[VAR_15].type))
     VAR_14++;
    if (VAR_0->words[VAR_15].item && !VAR_0->words[VAR_15].repeated)
     VAR_13++;
    VAR_11 = VAR_15;
   }

   if (VAR_13 < VAR_10 && !(FUNC_2(VAR_0->words[VAR_9].type) || VAR_0->words[VAR_9].len <= VAR_3))
   {

    VAR_6++;
    continue;
   }

   VAR_12 = VAR_6;
   if (VAR_14 < VAR_5)
   {
    for (VAR_15 = VAR_15 - 1; VAR_15 < VAR_0->curwords && VAR_14 < VAR_5; VAR_15++)
    {
     if (VAR_15 != VAR_7)
     {
      if (!FUNC_3(VAR_0->words[VAR_15].type))
       VAR_14++;
      if (VAR_0->words[VAR_15].item && !VAR_0->words[VAR_15].repeated)
       VAR_13++;
     }
     VAR_11 = VAR_15;
     if (FUNC_2(VAR_0->words[VAR_15].type) || VAR_0->words[VAR_15].len <= VAR_3)
      continue;
     if (VAR_14 >= VAR_4)
      break;
    }
    if (VAR_14 < VAR_4 && VAR_15 >= VAR_0->curwords)
    {

     for (VAR_15 = VAR_6 - 1; VAR_15 >= 0; VAR_15--)
     {
      if (!FUNC_3(VAR_0->words[VAR_15].type))
       VAR_14++;
      if (VAR_0->words[VAR_15].item && !VAR_0->words[VAR_15].repeated)
       VAR_13++;
      if (VAR_14 >= VAR_5)
       break;
      if (FUNC_2(VAR_0->words[VAR_15].type) || VAR_0->words[VAR_15].len <= VAR_3)
       continue;
      if (VAR_14 >= VAR_4)
       break;
     }
     VAR_12 = (VAR_15 >= 0) ? VAR_15 : 0;
    }
   }
   else
   {
    if (VAR_15 > VAR_7)
     VAR_15 = VAR_7;
    for (; VAR_14 > VAR_4; VAR_15--)
    {
     if (!FUNC_3(VAR_0->words[VAR_15].type))
      VAR_14--;
     if (VAR_0->words[VAR_15].item && !VAR_0->words[VAR_15].repeated)
      VAR_13--;
     VAR_11 = VAR_15;
     if (FUNC_2(VAR_0->words[VAR_15].type) || VAR_0->words[VAR_15].len <= VAR_3)
      continue;
     break;
    }
   }

   if (VAR_10 < 0 || (VAR_13 > VAR_10 && !(FUNC_2(VAR_0->words[VAR_11].type) || VAR_0->words[VAR_11].len <= VAR_3)) ||
    (VAR_10 >= 0 && !(FUNC_2(VAR_0->words[VAR_11].type) || VAR_0->words[VAR_11].len <= VAR_3) &&
     (FUNC_2(VAR_0->words[VAR_9].type) || VAR_0->words[VAR_9].len <= VAR_3)))
   {
    VAR_8 = VAR_12;
    VAR_9 = VAR_11;
    VAR_10 = VAR_13;
   }

   VAR_6++;
  }

  if (VAR_10 < 0)
  {
   VAR_14 = 0;
   for (VAR_15 = 0; VAR_15 < VAR_0->curwords && VAR_14 < VAR_4; VAR_15++)
   {
    if (!FUNC_3(VAR_0->words[VAR_15].type))
     VAR_14++;
    VAR_11 = VAR_15;
   }
   VAR_8 = 0;
   VAR_9 = VAR_11;
  }
 }
 else
 {
  VAR_8 = 0;
  VAR_9 = VAR_0->curwords - 1;
 }

 for (VAR_15 = VAR_8; VAR_15 <= VAR_9; VAR_15++)
 {
  if (VAR_0->words[VAR_15].item)
   VAR_0->words[VAR_15].selected = 1;
  if (VAR_2 == 0)
  {
   if (FUNC_0(VAR_0->words[VAR_15].type))
    VAR_0->words[VAR_15].replace = 1;
   else if (FUNC_1(VAR_0->words[VAR_15].type))
    VAR_0->words[VAR_15].skip = 1;
  }
  else
  {
   if (FUNC_4(VAR_0->words[VAR_15].type))
    VAR_0->words[VAR_15].skip = 1;
  }

  VAR_0->words[VAR_15].in = (VAR_0->words[VAR_15].repeated) ? 0 : 1;
 }

}
