
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int memtupcount; int comparetup; int memtuples; int * onlyKey; } ;
typedef TYPE_1__ Tuplesortstate ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ,int,int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(Tuplesortstate *VAR_0)
{
 FUNC_0(!FUNC_1(VAR_0));

 if (VAR_0->memtupcount > 1)
 {

  if (VAR_0->onlyKey != ((void*)0))
   FUNC_2(VAR_0->memtuples, VAR_0->memtupcount,
        VAR_0->onlyKey);
  else
   FUNC_3(VAR_0->memtuples,
      VAR_0->memtupcount,
      VAR_0->comparetup,
      VAR_0);
 }
}
