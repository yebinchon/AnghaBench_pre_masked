
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_17__ {scalar_t__* datums; } ;
struct TYPE_16__ {int paramnos; } ;
struct TYPE_15__ {int refname; } ;
struct TYPE_14__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ PLpgSQL_var ;
typedef TYPE_3__ PLpgSQL_expr ;
typedef TYPE_4__ PLpgSQL_execstate ;
typedef int PLpgSQL_datum ;
typedef int Oid ;
typedef int MemoryContext ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*,char*,int ) ;
 int FUNC_2 (TYPE_1__*,char) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int ,int) ;
 char* FUNC_5 (TYPE_4__*,int ,int ) ;
 int FUNC_6 (TYPE_4__*,int *,int *,int *,int *,int*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static char *
FUNC_9(PLpgSQL_execstate *VAR_0,
       const PLpgSQL_expr *VAR_1)
{
 int VAR_2;
 int VAR_3;
 StringInfoData VAR_4;
 MemoryContext VAR_5;

 if (!VAR_1->paramnos)
  return ((void*)0);

 VAR_5 = FUNC_0(FUNC_7(VAR_0));

 FUNC_8(&VAR_4);
 VAR_2 = 0;
 VAR_3 = -1;
 while ((VAR_3 = FUNC_4(VAR_1->paramnos, VAR_3)) >= 0)
 {
  Datum VAR_6;
  Oid VAR_7;
  bool VAR_8;
  int32 VAR_9;
  PLpgSQL_var *VAR_10;

  VAR_10 = (PLpgSQL_var *) VAR_0->datums[VAR_3];

  FUNC_6(VAR_0, (PLpgSQL_datum *) VAR_10,
      &VAR_7, &VAR_9,
      &VAR_6, &VAR_8);

  FUNC_1(&VAR_4, "%s%s = ",
       VAR_2 > 0 ? ", " : "",
       VAR_10->refname);

  if (VAR_8)
   FUNC_3(&VAR_4, "NULL");
  else
  {
   char *VAR_11 = FUNC_5(VAR_0, VAR_6, VAR_7);
   char *VAR_12;

   FUNC_2(&VAR_4, '\'');
   for (VAR_12 = VAR_11; *VAR_12; VAR_12++)
   {
    if (*VAR_12 == '\'')
     FUNC_2(&VAR_4, *VAR_12);
    FUNC_2(&VAR_4, *VAR_12);
   }
   FUNC_2(&VAR_4, '\'');
  }

  VAR_2++;
 }

 FUNC_0(VAR_5);

 return VAR_4.data;
}
