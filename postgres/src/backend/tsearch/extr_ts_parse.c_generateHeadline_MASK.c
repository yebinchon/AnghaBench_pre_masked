
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int text ;
typedef int int16 ;
struct TYPE_5__ {int curwords; int stopsellen; int startsellen; int fragdelimlen; int stopsel; int startsel; int fragdelim; TYPE_1__* words; } ;
struct TYPE_4__ {int len; int word; int repeated; scalar_t__ selected; int skip; scalar_t__ replace; scalar_t__ in; } ;
typedef TYPE_1__ HeadlineWordEntry ;
typedef TYPE_2__ HeadlineParsedText ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int) ;

text *
FUNC_5(HeadlineParsedText *VAR_1)
{
 text *VAR_2;
 char *VAR_3;
 int VAR_4 = 128;
 int VAR_5 = 0;
 int16 VAR_6 = 0;

 HeadlineWordEntry *VAR_7 = VAR_1->words;

 VAR_2 = (text *) FUNC_2(VAR_4);
 VAR_3 = ((char *) VAR_2) + VAR_0;

 while (VAR_7 - VAR_1->words < VAR_1->curwords)
 {
  while (VAR_7->len + VAR_1->stopsellen + VAR_1->startsellen + VAR_1->fragdelimlen + (VAR_3 - ((char *) VAR_2)) >= VAR_4)
  {
   int VAR_8 = VAR_3 - ((char *) VAR_2);

   VAR_4 *= 2;
   VAR_2 = (text *) FUNC_4(VAR_2, VAR_4);
   VAR_3 = ((char *) VAR_2) + VAR_8;
  }

  if (VAR_7->in && !VAR_7->repeated)
  {
   if (!VAR_6)
   {


    VAR_6 = 1;
    VAR_5++;

    if (VAR_5 > 1)
    {
     FUNC_1(VAR_3, VAR_1->fragdelim, VAR_1->fragdelimlen);
     VAR_3 += VAR_1->fragdelimlen;
    }

   }
   if (VAR_7->replace)
   {
    *VAR_3 = ' ';
    VAR_3++;
   }
   else if (!VAR_7->skip)
   {
    if (VAR_7->selected)
    {
     FUNC_1(VAR_3, VAR_1->startsel, VAR_1->startsellen);
     VAR_3 += VAR_1->startsellen;
    }
    FUNC_1(VAR_3, VAR_7->word, VAR_7->len);
    VAR_3 += VAR_7->len;
    if (VAR_7->selected)
    {
     FUNC_1(VAR_3, VAR_1->stopsel, VAR_1->stopsellen);
     VAR_3 += VAR_1->stopsellen;
    }
   }
  }
  else if (!VAR_7->repeated)
  {
   if (VAR_6)
    VAR_6 = 0;
   FUNC_3(VAR_7->word);
  }

  VAR_7++;
 }

 FUNC_0(VAR_2, VAR_3 - ((char *) VAR_2));
 return VAR_2;
}
