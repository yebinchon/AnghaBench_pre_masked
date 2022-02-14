
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int len; char* value; } ;
struct TYPE_8__ {int ntups; int numAttributes; char* null_field; int noticeHooks; TYPE_2__** tuples; } ;
typedef TYPE_1__ PGresult ;
typedef TYPE_2__ PGresAttValue ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,char const**) ;
 int FUNC_4 (int *,char*,...) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int,int) ;

int
FUNC_6(PGresult *VAR_1, int VAR_2, int VAR_3, char *VAR_4, int VAR_5)
{
 PGresAttValue *VAR_6;
 const char *VAR_7 = ((void*)0);


 if (!FUNC_0(VAR_1, VAR_3))
  return 0;


 if (VAR_2 < 0 || VAR_2 > VAR_1->ntups)
 {
  FUNC_4(&VAR_1->noticeHooks,
       "row number %d is out of range 0..%d",
       VAR_2, VAR_1->ntups);
  return 0;
 }


 if (VAR_2 == VAR_1->ntups)
 {
  PGresAttValue *VAR_8;
  int VAR_9;

  VAR_8 = (PGresAttValue *)
   FUNC_5(VAR_1, VAR_1->numAttributes * sizeof(PGresAttValue),
        1);

  if (!VAR_8)
   goto fail;


  for (VAR_9 = 0; VAR_9 < VAR_1->numAttributes; VAR_9++)
  {
   VAR_8[VAR_9].len = VAR_0;
   VAR_8[VAR_9].value = VAR_1->null_field;
  }


  if (!FUNC_3(VAR_1, VAR_8, &VAR_7))
   goto fail;
 }

 VAR_6 = &VAR_1->tuples[VAR_2][VAR_3];


 if (VAR_5 == VAR_0 || VAR_4 == ((void*)0))
 {
  VAR_6->len = VAR_0;
  VAR_6->value = VAR_1->null_field;
 }
 else if (VAR_5 <= 0)
 {
  VAR_6->len = 0;
  VAR_6->value = VAR_1->null_field;
 }
 else
 {
  VAR_6->value = (char *) FUNC_5(VAR_1, VAR_5 + 1, 1);
  if (!VAR_6->value)
   goto fail;
  VAR_6->len = VAR_5;
  FUNC_2(VAR_6->value, VAR_4, VAR_5);
  VAR_6->value[VAR_5] = '\0';
 }

 return 1;





fail:
 if (!VAR_7)
  VAR_7 = FUNC_1("out of memory");
 FUNC_4(&VAR_1->noticeHooks, "%s", VAR_7);

 return 0;
}
