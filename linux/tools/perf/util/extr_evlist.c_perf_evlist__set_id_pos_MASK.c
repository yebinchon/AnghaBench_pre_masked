
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evsel {int is_pos; int id_pos; } ;
struct evlist {int is_pos; int id_pos; } ;


 struct evsel* FUNC_0 (struct evlist*) ;

void FUNC_1(struct evlist *VAR_0)
{
 struct evsel *VAR_1 = FUNC_0(VAR_0);

 VAR_0->id_pos = VAR_1->id_pos;
 VAR_0->is_pos = VAR_1->is_pos;
}
