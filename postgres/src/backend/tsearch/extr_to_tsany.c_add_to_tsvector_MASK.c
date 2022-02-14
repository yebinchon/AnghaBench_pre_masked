
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_5__ {int lenwords; scalar_t__ curwords; scalar_t__ pos; int * words; } ;
struct TYPE_4__ {int cfgId; TYPE_2__* prs; } ;
typedef TYPE_1__ TSVectorBuildState ;
typedef int ParsedWord ;
typedef TYPE_2__ ParsedText ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_2__*,char*,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, char *VAR_1, int VAR_2)
{
 TSVectorBuildState *VAR_3 = (TSVectorBuildState *) VAR_0;
 ParsedText *VAR_4 = VAR_3->prs;
 int32 VAR_5;

 if (VAR_4->words == ((void*)0))
 {




  VAR_4->lenwords = 16;
  VAR_4->words = (ParsedWord *) FUNC_0(sizeof(ParsedWord) * VAR_4->lenwords);
  VAR_4->curwords = 0;
  VAR_4->pos = 0;
 }

 VAR_5 = VAR_4->curwords;

 FUNC_1(VAR_3->cfgId, VAR_4, VAR_1, VAR_2);







 if (VAR_4->curwords > VAR_5)
  VAR_4->pos += 1;
}
