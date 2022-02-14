
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16 ;
typedef int int32 ;
struct TYPE_4__ {int* apos; int pos; } ;
struct TYPE_5__ {int alen; scalar_t__ len; TYPE_1__ pos; int word; } ;
typedef TYPE_2__ ParsedWord ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*,int,int,int ) ;
 scalar_t__ FUNC_4 (int*,int) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(ParsedWord *VAR_3, int32 VAR_4)
{
 ParsedWord *VAR_5,
      *VAR_6;
 int VAR_7;

 if (VAR_4 == 1)
 {
  VAR_7 = FUNC_0(VAR_3->pos.pos);
  VAR_3->alen = 2;
  VAR_3->pos.apos = (uint16 *) FUNC_1(sizeof(uint16) * VAR_3->alen);
  VAR_3->pos.apos[0] = 1;
  VAR_3->pos.apos[1] = VAR_7;
  return VAR_4;
 }

 VAR_6 = VAR_3;
 VAR_5 = VAR_3 + 1;




 FUNC_3((void *) VAR_3, VAR_4, sizeof(ParsedWord), VAR_2);




 VAR_7 = FUNC_0(VAR_3->pos.pos);
 VAR_3->alen = 2;
 VAR_3->pos.apos = (uint16 *) FUNC_1(sizeof(uint16) * VAR_3->alen);
 VAR_3->pos.apos[0] = 1;
 VAR_3->pos.apos[1] = VAR_7;




 while (VAR_5 - VAR_3 < VAR_4)
 {
  if (!(VAR_5->len == VAR_6->len &&
     FUNC_5(VAR_5->word, VAR_6->word, VAR_6->len) == 0))
  {



   VAR_6++;
   VAR_6->len = VAR_5->len;
   VAR_6->word = VAR_5->word;
   VAR_7 = FUNC_0(VAR_5->pos.pos);
   VAR_6->alen = 2;
   VAR_6->pos.apos = (uint16 *) FUNC_1(sizeof(uint16) * VAR_6->alen);
   VAR_6->pos.apos[0] = 1;
   VAR_6->pos.apos[1] = VAR_7;
  }
  else
  {





   FUNC_2(VAR_5->word);
   if (VAR_6->pos.apos[0] < VAR_1 - 1 && VAR_6->pos.apos[VAR_6->pos.apos[0]] != VAR_0 - 1 &&
    VAR_6->pos.apos[VAR_6->pos.apos[0]] != FUNC_0(VAR_5->pos.pos))
   {
    if (VAR_6->pos.apos[0] + 1 >= VAR_6->alen)
    {
     VAR_6->alen *= 2;
     VAR_6->pos.apos = (uint16 *) FUNC_4(VAR_6->pos.apos, sizeof(uint16) * VAR_6->alen);
    }
    if (VAR_6->pos.apos[0] == 0 || VAR_6->pos.apos[VAR_6->pos.apos[0]] != FUNC_0(VAR_5->pos.pos))
    {
     VAR_6->pos.apos[VAR_6->pos.apos[0] + 1] = FUNC_0(VAR_5->pos.pos);
     VAR_6->pos.apos[0]++;
    }
   }
  }
  VAR_5++;
 }

 return VAR_6 + 1 - VAR_3;
}
