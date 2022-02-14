
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_14__ {int startpos; int endpos; int curlen; int poslen; int in; int excluded; } ;
struct TYPE_13__ {int curwords; TYPE_1__* words; } ;
struct TYPE_12__ {int len; int type; int in; } ;
typedef int TSQuery ;
typedef TYPE_2__ HeadlineParsedText ;
typedef TYPE_3__ CoverPos ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,int*,int*,int*,int*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int*,int*) ;
 int FUNC_4 (TYPE_2__*,int,int,int) ;
 TYPE_3__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*) ;
 TYPE_3__* FUNC_7 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_8(HeadlineParsedText *VAR_1, TSQuery VAR_2, int VAR_3,
      int VAR_4, int VAR_5,
      int VAR_6, int VAR_7)
{
 int32 VAR_8,
    VAR_9,
    VAR_10,
    VAR_11,
    VAR_12 = 0;
 int32 VAR_13,
    VAR_14,
    VAR_15;

 int32 VAR_16 = 0,
    VAR_17 = 0,
    VAR_18 = 0,
    VAR_19 = 0;

 int32 VAR_20 = 0,
    VAR_21 = 32;

 int32 VAR_22,
    VAR_23,
    VAR_24;
 CoverPos *VAR_25;

 VAR_25 = FUNC_5(VAR_21 * sizeof(CoverPos));


 while (FUNC_3(VAR_1, VAR_2, &VAR_18, &VAR_19))
 {
  VAR_16 = VAR_18;
  VAR_17 = VAR_19;
  while (VAR_16 <= VAR_17)
  {
   FUNC_2(VAR_1, &VAR_16, &VAR_17, &VAR_9, &VAR_8, VAR_6);
   if (VAR_20 >= VAR_21)
   {
    VAR_21 *= 2;
    VAR_25 = FUNC_7(VAR_25, sizeof(CoverPos) * VAR_21);
   }
   VAR_25[VAR_20].startpos = VAR_16;
   VAR_25[VAR_20].endpos = VAR_17;
   VAR_25[VAR_20].curlen = VAR_9;
   VAR_25[VAR_20].poslen = VAR_8;
   VAR_25[VAR_20].in = 0;
   VAR_25[VAR_20].excluded = 0;
   VAR_20++;
   VAR_16 = VAR_17 + 1;
   VAR_17 = VAR_19;
  }

  VAR_18++;
 }


 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
 {
  VAR_24 = 0;
  VAR_23 = VAR_0;
  VAR_22 = -1;





  for (VAR_10 = 0; VAR_10 < VAR_20; VAR_10++)
  {
   if (!VAR_25[VAR_10].in && !VAR_25[VAR_10].excluded &&
    (VAR_24 < VAR_25[VAR_10].poslen || (VAR_24 == VAR_25[VAR_10].poslen
             && VAR_23 > VAR_25[VAR_10].curlen)))
   {
    VAR_24 = VAR_25[VAR_10].poslen;
    VAR_23 = VAR_25[VAR_10].curlen;
    VAR_22 = VAR_10;
   }
  }

  if (VAR_22 >= 0)
  {
   VAR_25[VAR_22].in = 1;

   VAR_16 = VAR_25[VAR_22].startpos;
   VAR_17 = VAR_25[VAR_22].endpos;
   VAR_9 = VAR_25[VAR_22].curlen;

   if (VAR_9 < VAR_6)
   {

    VAR_14 = (VAR_6 - VAR_9) / 2;






    VAR_13 = 0;
    VAR_15 = VAR_16;
    for (VAR_10 = VAR_16 - 1; VAR_10 >= 0 && VAR_13 < VAR_14 && !VAR_1->words[VAR_10].in; VAR_10--)
    {
     if (!FUNC_1(VAR_1->words[VAR_10].type))
     {
      VAR_9++;
      VAR_13++;
     }
     VAR_15 = VAR_10;
    }

    for (VAR_10 = VAR_15; VAR_10 < VAR_16 && (FUNC_0(VAR_1->words[VAR_10].type) || VAR_1->words[VAR_10].len <= VAR_4); VAR_10++)
    {
     if (!FUNC_1(VAR_1->words[VAR_10].type))
      VAR_9--;
    }
    VAR_16 = VAR_10;

    VAR_15 = VAR_17;
    for (VAR_10 = VAR_17 + 1; VAR_10 < VAR_1->curwords && VAR_9 < VAR_6 && !VAR_1->words[VAR_10].in; VAR_10++)
    {
     if (!FUNC_1(VAR_1->words[VAR_10].type))
      VAR_9++;
     VAR_15 = VAR_10;
    }

    for (VAR_10 = VAR_15; VAR_10 > VAR_17 && (FUNC_0(VAR_1->words[VAR_10].type) || VAR_1->words[VAR_10].len <= VAR_4); VAR_10--)
    {
     if (!FUNC_1(VAR_1->words[VAR_10].type))
      VAR_9--;
    }
    VAR_17 = VAR_10;
   }
   VAR_25[VAR_22].startpos = VAR_16;
   VAR_25[VAR_22].endpos = VAR_17;
   VAR_25[VAR_22].curlen = VAR_9;

   FUNC_4(VAR_1, VAR_3, VAR_16, VAR_17);
   VAR_12++;

   for (VAR_10 = 0; VAR_10 < VAR_20; VAR_10++)
   {
    if (VAR_10 != VAR_22 && ((VAR_25[VAR_10].startpos >= VAR_25[VAR_22].startpos && VAR_25[VAR_10].startpos <= VAR_25[VAR_22].endpos) || (VAR_25[VAR_10].endpos >= VAR_25[VAR_22].startpos && VAR_25[VAR_10].endpos <= VAR_25[VAR_22].endpos)))
     VAR_25[VAR_10].excluded = 1;
   }
  }
  else
   break;
 }


 if (VAR_12 <= 0)
 {
  VAR_16 = VAR_17 = VAR_9 = 0;
  for (VAR_10 = 0; VAR_10 < VAR_1->curwords && VAR_9 < VAR_5; VAR_10++)
  {
   if (!FUNC_1(VAR_1->words[VAR_10].type))
    VAR_9++;
   VAR_17 = VAR_10;
  }
  FUNC_4(VAR_1, VAR_3, VAR_16, VAR_17);
 }
 FUNC_6(VAR_25);
}
