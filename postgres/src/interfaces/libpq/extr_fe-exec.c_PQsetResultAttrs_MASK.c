
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ format; scalar_t__ name; } ;
struct TYPE_9__ {int numAttributes; int binary; TYPE_2__* attDescs; scalar_t__ null_field; } ;
typedef TYPE_1__ PGresult ;
typedef TYPE_2__ PGresAttDesc ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__) ;

int
FUNC_3(PGresult *VAR_0, int VAR_1, PGresAttDesc *VAR_2)
{
 int VAR_3;


 if (!VAR_0 || VAR_0->numAttributes > 0)
  return 0;


 if (VAR_1 <= 0 || !VAR_2)
  return 1;

 VAR_0->attDescs = (PGresAttDesc *)
  FUNC_0(VAR_0, VAR_1 * sizeof(PGresAttDesc));

 if (!VAR_0->attDescs)
  return 0;

 VAR_0->numAttributes = VAR_1;
 FUNC_1(VAR_0->attDescs, VAR_2, VAR_1 * sizeof(PGresAttDesc));


 VAR_0->binary = 1;
 for (VAR_3 = 0; VAR_3 < VAR_0->numAttributes; VAR_3++)
 {
  if (VAR_0->attDescs[VAR_3].name)
   VAR_0->attDescs[VAR_3].name = FUNC_2(VAR_0, VAR_0->attDescs[VAR_3].name);
  else
   VAR_0->attDescs[VAR_3].name = VAR_0->null_field;

  if (!VAR_0->attDescs[VAR_3].name)
   return 0;

  if (VAR_0->attDescs[VAR_3].format == 0)
   VAR_0->binary = 0;
 }

 return 1;
}
