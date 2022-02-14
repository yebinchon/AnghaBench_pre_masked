
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int nargs; char* nulls; int * types; int * values; } ;
struct TYPE_8__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ PreparedParamsData ;
typedef int PLpgSQL_execstate ;
typedef int MemoryContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*,char*,int) ;
 int FUNC_2 (TYPE_1__*,char) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 char* FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static char *
FUNC_7(PLpgSQL_execstate *VAR_0,
        const PreparedParamsData *VAR_1)
{
 int VAR_2;
 StringInfoData VAR_3;
 MemoryContext VAR_4;

 if (!VAR_1)
  return ((void*)0);

 VAR_4 = FUNC_0(FUNC_5(VAR_0));

 FUNC_6(&VAR_3);
 for (VAR_2 = 0; VAR_2 < VAR_1->nargs; VAR_2++)
 {
  FUNC_1(&VAR_3, "%s$%d = ",
       VAR_2 > 0 ? ", " : "",
       VAR_2 + 1);

  if (VAR_1->nulls[VAR_2] == 'n')
   FUNC_3(&VAR_3, "NULL");
  else
  {
   char *VAR_5 = FUNC_4(VAR_0, VAR_1->values[VAR_2], VAR_1->types[VAR_2]);
   char *VAR_6;

   FUNC_2(&VAR_3, '\'');
   for (VAR_6 = VAR_5; *VAR_6; VAR_6++)
   {
    if (*VAR_6 == '\'')
     FUNC_2(&VAR_3, *VAR_6);
    FUNC_2(&VAR_3, *VAR_6);
   }
   FUNC_2(&VAR_3, '\'');
  }
 }

 FUNC_0(VAR_4);

 return VAR_3.data;
}
