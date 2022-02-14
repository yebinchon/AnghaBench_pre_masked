
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_17__ {int curwords; int lenwords; TYPE_4__* words; } ;
struct TYPE_16__ {int repeated; TYPE_1__* item; int pos; } ;
struct TYPE_13__ {int prefix; int length; scalar_t__ distance; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_1__ qoperand; } ;
struct TYPE_14__ {int size; } ;
typedef TYPE_2__* TSQuery ;
typedef TYPE_3__ QueryItem ;
typedef TYPE_4__ HeadlineWordEntry ;
typedef TYPE_5__ HeadlineParsedText ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_4__*,TYPE_4__*,int) ;
 scalar_t__ FUNC_4 (void*,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,char*,int,int ) ;

__attribute__((used)) static void
FUNC_6(HeadlineParsedText *VAR_1, TSQuery VAR_2, int32 VAR_3, char *VAR_4, int VAR_5)
{
 int VAR_6;
 QueryItem *VAR_7 = FUNC_1(VAR_2);
 HeadlineWordEntry *VAR_8;

 while (VAR_1->curwords + VAR_2->size >= VAR_1->lenwords)
 {
  VAR_1->lenwords *= 2;
  VAR_1->words = (HeadlineWordEntry *) FUNC_4((void *) VAR_1->words, VAR_1->lenwords * sizeof(HeadlineWordEntry));
 }

 VAR_8 = &(VAR_1->words[VAR_1->curwords - 1]);
 VAR_8->pos = FUNC_2(VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_2->size; VAR_6++)
 {
  if (VAR_7->type == VAR_0 &&
   FUNC_5(FUNC_0(VAR_2) + VAR_7->qoperand.distance, VAR_7->qoperand.length,
       VAR_4, VAR_5, VAR_7->qoperand.prefix) == 0)
  {
   if (VAR_8->item)
   {
    FUNC_3(&(VAR_1->words[VAR_1->curwords]), VAR_8, sizeof(HeadlineWordEntry));
    VAR_1->words[VAR_1->curwords].item = &VAR_7->qoperand;
    VAR_1->words[VAR_1->curwords].repeated = 1;
    VAR_1->curwords++;
   }
   else
    VAR_8->item = &VAR_7->qoperand;
  }
  VAR_7++;
 }
}
