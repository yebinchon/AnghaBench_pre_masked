
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int pd_lower; } ;
struct TYPE_10__ {scalar_t__ rd_amcache; } ;
struct TYPE_9__ {int lastUsedPages; } ;
struct TYPE_8__ {int lastUsedPages; } ;
typedef TYPE_1__ SpGistMetaPageData ;
typedef TYPE_2__ SpGistCache ;
typedef TYPE_3__* Relation ;
typedef TYPE_4__* PageHeader ;
typedef scalar_t__ Page ;
typedef int Buffer ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;

void
FUNC_7(Relation VAR_1)
{
 SpGistCache *VAR_2 = (SpGistCache *) VAR_1->rd_amcache;

 if (VAR_2 != ((void*)0))
 {
  Buffer VAR_3;

  VAR_3 = FUNC_3(VAR_1, VAR_0);

  if (FUNC_1(VAR_3))
  {
   Page VAR_4 = FUNC_0(VAR_3);
   SpGistMetaPageData *VAR_5 = FUNC_5(VAR_4);

   VAR_5->lastUsedPages = VAR_2->lastUsedPages;
   ((PageHeader) VAR_4)->pd_lower =
    ((char *) VAR_5 + sizeof(SpGistMetaPageData)) - (char *) VAR_4;

   FUNC_2(VAR_3);
   FUNC_6(VAR_3);
  }
  else
  {
   FUNC_4(VAR_3);
  }
 }
}
