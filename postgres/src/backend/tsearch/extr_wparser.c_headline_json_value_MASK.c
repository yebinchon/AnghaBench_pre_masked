
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int text ;
struct TYPE_14__ {int transformed; TYPE_1__* prsoptions; TYPE_1__* query; TYPE_2__* prsobj; TYPE_3__* cfg; TYPE_1__* prs; } ;
struct TYPE_13__ {int cfgId; } ;
struct TYPE_12__ {int prsheadline; } ;
struct TYPE_11__ {scalar_t__ curwords; } ;
typedef TYPE_1__* TSQuery ;
typedef TYPE_2__ TSParserCacheEntry ;
typedef TYPE_3__ TSConfigCacheEntry ;
typedef TYPE_1__ List ;
typedef TYPE_1__ HeadlineParsedText ;
typedef TYPE_6__ HeadlineJsonState ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*,TYPE_1__*,char*,int) ;

__attribute__((used)) static text *
FUNC_4(void *VAR_0, char *VAR_1, int VAR_2)
{
 HeadlineJsonState *VAR_3 = (HeadlineJsonState *) VAR_0;

 HeadlineParsedText *VAR_4 = VAR_3->prs;
 TSConfigCacheEntry *VAR_5 = VAR_3->cfg;
 TSParserCacheEntry *VAR_6 = VAR_3->prsobj;
 TSQuery VAR_7 = VAR_3->query;
 List *VAR_8 = VAR_3->prsoptions;

 VAR_4->curwords = 0;
 FUNC_3(VAR_5->cfgId, VAR_4, VAR_7, VAR_1, VAR_2);
 FUNC_0(&(VAR_6->prsheadline),
      FUNC_1(VAR_4),
      FUNC_1(VAR_8),
      FUNC_1(VAR_7));

 VAR_3->transformed = 1;
 return FUNC_2(VAR_4);
}
