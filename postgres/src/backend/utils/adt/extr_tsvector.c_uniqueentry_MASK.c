
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_10__ {scalar_t__ len; size_t pos; int haspos; } ;
struct TYPE_11__ {int poslen; struct TYPE_11__* pos; TYPE_1__ entry; } ;
typedef TYPE_2__ WordEntryPos ;
typedef TYPE_2__ WordEntryIN ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (void*,int,int,int ,void*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int) ;
 scalar_t__ FUNC_6 (char*,char*,scalar_t__) ;
 void* FUNC_7 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_8(WordEntryIN *VAR_1, int VAR_2, char *VAR_3, int *VAR_4)
{
 int VAR_5;
 WordEntryIN *VAR_6,
      *VAR_7;

 FUNC_0(VAR_2 >= 1);

 if (VAR_2 > 1)
  FUNC_4((void *) VAR_1, VAR_2, sizeof(WordEntryIN), VAR_0,
      (void *) VAR_3);

 VAR_5 = 0;
 VAR_7 = VAR_1;
 VAR_6 = VAR_1 + 1;
 while (VAR_6 - VAR_1 < VAR_2)
 {
  if (!(VAR_6->entry.len == VAR_7->entry.len &&
     FUNC_6(&VAR_3[VAR_6->entry.pos], &VAR_3[VAR_7->entry.pos],
       VAR_7->entry.len) == 0))
  {

   VAR_5 += VAR_7->entry.len;
   if (VAR_7->entry.haspos)
   {
    VAR_7->poslen = FUNC_7(VAR_7->pos, VAR_7->poslen);
    VAR_5 = FUNC_1(VAR_5);
    VAR_5 += VAR_7->poslen * sizeof(WordEntryPos) + sizeof(uint16);
   }
   VAR_7++;
   if (VAR_7 != VAR_6)
    FUNC_2(VAR_7, VAR_6, sizeof(WordEntryIN));
  }
  else if (VAR_6->entry.haspos)
  {
   if (VAR_7->entry.haspos)
   {

    int VAR_8 = VAR_6->poslen + VAR_7->poslen;

    VAR_7->pos = (WordEntryPos *)
     FUNC_5(VAR_7->pos, VAR_8 * sizeof(WordEntryPos));
    FUNC_2(&VAR_7->pos[VAR_7->poslen], VAR_6->pos,
        VAR_6->poslen * sizeof(WordEntryPos));
    VAR_7->poslen = VAR_8;
    FUNC_3(VAR_6->pos);
   }
   else
   {

    VAR_7->entry.haspos = 1;
    VAR_7->pos = VAR_6->pos;
    VAR_7->poslen = VAR_6->poslen;
   }
  }
  VAR_6++;
 }


 VAR_5 += VAR_7->entry.len;
 if (VAR_7->entry.haspos)
 {
  VAR_7->poslen = FUNC_7(VAR_7->pos, VAR_7->poslen);
  VAR_5 = FUNC_1(VAR_5);
  VAR_5 += VAR_7->poslen * sizeof(WordEntryPos) + sizeof(uint16);
 }

 *VAR_4 = VAR_5;
 return VAR_7 + 1 - VAR_1;
}
