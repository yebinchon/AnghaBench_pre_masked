
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int value; int ptype; scalar_t__ isnull; } ;
struct TYPE_10__ {scalar_t__ numParams; TYPE_3__* params; int * paramFetch; } ;
struct TYPE_9__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__* ParamListInfo ;
typedef TYPE_3__ ParamExternData ;
typedef int Oid ;
typedef int MemoryContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*,char*,char*,int) ;
 int FUNC_6 (TYPE_1__*,char) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int ,int *,int*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int
FUNC_12(ParamListInfo VAR_1)
{

 if (VAR_1 && VAR_1->numParams > 0 && !FUNC_1())
 {
  StringInfoData VAR_2;
  MemoryContext VAR_3;


  FUNC_0(VAR_1->paramFetch == ((void*)0));


  VAR_3 = FUNC_2(VAR_0);

  FUNC_10(&VAR_2);

  for (int VAR_4 = 0; VAR_4 < VAR_1->numParams; VAR_4++)
  {
   ParamExternData *VAR_5 = &VAR_1->params[VAR_4];
   Oid VAR_6;
   bool VAR_7;
   char *VAR_8;
   char *VAR_9;

   FUNC_5(&VAR_2, "%s$%d = ",
        VAR_4 > 0 ? ", " : "",
        VAR_4 + 1);

   if (VAR_5->isnull || !FUNC_3(VAR_5->ptype))
   {
    FUNC_7(&VAR_2, "NULL");
    continue;
   }

   FUNC_9(VAR_5->ptype, &VAR_6, &VAR_7);

   VAR_8 = FUNC_4(VAR_6, VAR_5->value);

   FUNC_6(&VAR_2, '\'');
   for (VAR_9 = VAR_8; *VAR_9; VAR_9++)
   {
    if (*VAR_9 == '\'')
     FUNC_6(&VAR_2, *VAR_9);
    FUNC_6(&VAR_2, *VAR_9);
   }
   FUNC_6(&VAR_2, '\'');

   FUNC_11(VAR_8);
  }

  FUNC_8("parameters: %s", VAR_2.data);

  FUNC_11(VAR_2.data);

  FUNC_2(VAR_3);
 }

 return 0;
}
