
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_cache_entry {int spev; int pev; int tevlist; int node; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct probe_cache_entry*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct probe_cache_entry *VAR_0)
{
 if (VAR_0) {
  FUNC_0(!FUNC_3(&VAR_0->node));

  FUNC_4(VAR_0->tevlist);
  FUNC_1(&VAR_0->pev);
  FUNC_5(&VAR_0->spev);
  FUNC_2(VAR_0);
 }
}
