
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int next; int npages; } ;
typedef int StringInfo ;
typedef int Size ;
typedef TYPE_1__ FreePageSpanLeader ;
typedef int FreePageManager ;


 int FUNC_0 (int ,char*,int ,...) ;
 int FUNC_1 (int ,char) ;
 int FUNC_2 (char*,TYPE_1__*) ;
 char* FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (char*,int ) ;

__attribute__((used)) static void
FUNC_5(FreePageManager *VAR_0, FreePageSpanLeader *VAR_1,
       Size VAR_2, StringInfo VAR_3)
{
 char *VAR_4 = FUNC_3(VAR_0);

 while (VAR_1 != ((void*)0))
 {
  if (VAR_1->npages != VAR_2)
   FUNC_0(VAR_3, " %zu(%zu)", FUNC_2(VAR_4, VAR_1),
        VAR_1->npages);
  else
   FUNC_0(VAR_3, " %zu", FUNC_2(VAR_4, VAR_1));
  VAR_1 = FUNC_4(VAR_4, VAR_1->next);
 }

 FUNC_1(VAR_3, '\n');
}
