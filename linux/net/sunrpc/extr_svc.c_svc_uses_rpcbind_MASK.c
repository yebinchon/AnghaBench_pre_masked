
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_serv {struct svc_program* sv_program; } ;
struct svc_program {unsigned int pg_nvers; TYPE_1__** pg_vers; struct svc_program* pg_next; } ;
struct TYPE_2__ {int vs_hidden; } ;



__attribute__((used)) static int FUNC_0(struct svc_serv *VAR_0)
{
 struct svc_program *VAR_1;
 unsigned int VAR_2;

 for (VAR_1 = VAR_0->sv_program; VAR_1; VAR_1 = VAR_1->pg_next) {
  for (VAR_2 = 0; VAR_2 < VAR_1->pg_nvers; VAR_2++) {
   if (VAR_1->pg_vers[VAR_2] == ((void*)0))
    continue;
   if (!VAR_1->pg_vers[VAR_2]->vs_hidden)
    return 1;
  }
 }

 return 0;
}
