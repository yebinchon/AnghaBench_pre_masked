
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_11__ {int readonly_func; } ;
struct TYPE_10__ {int * nulls; int * values; int * types; int nargs; } ;
typedef TYPE_1__ PreparedParamsData ;
typedef int * Portal ;
typedef int PLpgSQL_expr ;
typedef TYPE_2__ PLpgSQL_execstate ;
typedef int Oid ;
typedef int MemoryContext ;
typedef int List ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int ,char*) ;
 int * FUNC_2 (char const*,char*,int ,int *,int *,int *,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (int ,char*,char*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int *,int*,int *,int *) ;
 TYPE_1__* FUNC_11 (TYPE_2__*,int *) ;
 int FUNC_12 (TYPE_2__*) ;

__attribute__((used)) static Portal
FUNC_13(PLpgSQL_execstate *VAR_3,
        PLpgSQL_expr *VAR_4,
        List *VAR_5,
        const char *VAR_6,
        int VAR_7)
{
 Portal VAR_8;
 Datum VAR_9;
 bool VAR_10;
 Oid VAR_11;
 int32 VAR_12;
 char *VAR_13;
 MemoryContext VAR_14 = FUNC_12(VAR_3);





 VAR_9 = FUNC_10(VAR_3, VAR_4, &VAR_10, &VAR_11, &VAR_12);
 if (VAR_10)
  FUNC_6(VAR_1,
    (FUNC_7(VAR_0),
     FUNC_8("query string argument of EXECUTE is null")));


 VAR_13 = FUNC_4(VAR_3, VAR_9, VAR_11);


 VAR_13 = FUNC_1(VAR_14, VAR_13);

 FUNC_9(VAR_3);






 if (VAR_5)
 {
  PreparedParamsData *VAR_15;

  VAR_15 = FUNC_11(VAR_3, VAR_5);
  VAR_8 = FUNC_2(VAR_6,
             VAR_13,
             VAR_15->nargs, VAR_15->types,
             VAR_15->values, VAR_15->nulls,
             VAR_3->readonly_func,
             VAR_7);
 }
 else
 {
  VAR_8 = FUNC_2(VAR_6,
             VAR_13,
             0, ((void*)0),
             ((void*)0), ((void*)0),
             VAR_3->readonly_func,
             VAR_7);
 }

 if (VAR_8 == ((void*)0))
  FUNC_5(VAR_1, "could not open implicit cursor for query \"%s\": %s",
    VAR_13, FUNC_3(VAR_2));


 FUNC_0(VAR_14);

 return VAR_8;
}
