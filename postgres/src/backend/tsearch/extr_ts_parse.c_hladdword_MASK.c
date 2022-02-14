
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8 ;
struct TYPE_6__ {size_t curwords; size_t lenwords; TYPE_1__* words; } ;
struct TYPE_5__ {int len; int word; scalar_t__ type; } ;
typedef TYPE_1__ HeadlineWordEntry ;
typedef TYPE_2__ HeadlineParsedText ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (void*,int) ;

__attribute__((used)) static void
FUNC_4(HeadlineParsedText *VAR_0, char *VAR_1, int VAR_2, int VAR_3)
{
 while (VAR_0->curwords >= VAR_0->lenwords)
 {
  VAR_0->lenwords *= 2;
  VAR_0->words = (HeadlineWordEntry *) FUNC_3((void *) VAR_0->words, VAR_0->lenwords * sizeof(HeadlineWordEntry));
 }
 FUNC_1(&(VAR_0->words[VAR_0->curwords]), 0, sizeof(HeadlineWordEntry));
 VAR_0->words[VAR_0->curwords].type = (uint8) VAR_3;
 VAR_0->words[VAR_0->curwords].len = VAR_2;
 VAR_0->words[VAR_0->curwords].word = FUNC_2(VAR_2);
 FUNC_0(VAR_0->words[VAR_0->curwords].word, VAR_1, VAR_2);
 VAR_0->curwords++;
}
