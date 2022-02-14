
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef size_t int32 ;
typedef int int16 ;
struct TYPE_11__ {int qoperator; int cfg_id; } ;
struct TYPE_10__ {int lenwords; size_t curwords; TYPE_2__* words; scalar_t__ pos; } ;
struct TYPE_8__ {scalar_t__ pos; } ;
struct TYPE_9__ {scalar_t__ nvariant; int flags; struct TYPE_9__* word; int len; TYPE_1__ pos; } ;
typedef int TSQueryParserState ;
typedef TYPE_2__ ParsedWord ;
typedef TYPE_3__ ParsedText ;
typedef TYPE_4__ MorphOpaque ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,TYPE_3__*,char*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_2__*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_7(Datum VAR_3, TSQueryParserState VAR_4, char *VAR_5, int VAR_6, int16 VAR_7, bool VAR_8)
{
 int32 VAR_9 = 0;
 ParsedText VAR_10;
 uint32 VAR_11,
    VAR_12 = 0,
    VAR_13 = 0,
    VAR_14 = 0,
    VAR_15 = 0;
 MorphOpaque *VAR_16 = (MorphOpaque *) FUNC_0(VAR_3);

 VAR_10.lenwords = 4;
 VAR_10.curwords = 0;
 VAR_10.pos = 0;
 VAR_10.words = (ParsedWord *) FUNC_1(sizeof(ParsedWord) * VAR_10.lenwords);

 FUNC_2(VAR_16->cfg_id, &VAR_10, VAR_5, VAR_6);

 if (VAR_10.curwords > 0)
 {
  while (VAR_9 < VAR_10.curwords)
  {




   if (VAR_12 > 0 && VAR_12 + 1 < VAR_10.words[VAR_9].pos.pos)
   {
    while (VAR_12 + 1 < VAR_10.words[VAR_9].pos.pos)
    {

     FUNC_5(VAR_4);
     if (VAR_14)
      FUNC_4(VAR_4, VAR_16->qoperator, 1);
     VAR_14++;
     VAR_12++;
    }
   }


   VAR_12 = VAR_10.words[VAR_9].pos.pos;


   VAR_13 = 0;
   while (VAR_9 < VAR_10.curwords && VAR_12 == VAR_10.words[VAR_9].pos.pos)
   {
    VAR_11 = VAR_10.words[VAR_9].nvariant;


    VAR_15 = 0;
    while (VAR_9 < VAR_10.curwords &&
        VAR_12 == VAR_10.words[VAR_9].pos.pos &&
        VAR_11 == VAR_10.words[VAR_9].nvariant)
    {
     FUNC_6(VAR_4,
         VAR_10.words[VAR_9].word,
         VAR_10.words[VAR_9].len,
         VAR_7,
         ((VAR_10.words[VAR_9].flags & VAR_2) || VAR_8));
     FUNC_3(VAR_10.words[VAR_9].word);
     if (VAR_15)
      FUNC_4(VAR_4, VAR_0, 0);
     VAR_15++;
     VAR_9++;
    }

    if (VAR_13)
     FUNC_4(VAR_4, VAR_1, 0);
    VAR_13++;
   }

   if (VAR_14)
   {

    FUNC_4(VAR_4, VAR_16->qoperator, 1);
   }

   VAR_14++;
  }

  FUNC_3(VAR_10.words);

 }
 else
  FUNC_5(VAR_4);
}
