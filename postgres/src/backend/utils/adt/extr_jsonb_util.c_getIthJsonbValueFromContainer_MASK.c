
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_7__ {int * children; } ;
typedef int JsonbValue ;
typedef TYPE_1__ JsonbContainer ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*,size_t,char*,int ,int *) ;
 int FUNC_4 (TYPE_1__*,size_t) ;
 int * FUNC_5 (int) ;

JsonbValue *
FUNC_6(JsonbContainer *VAR_1, uint32 VAR_2)
{
 JsonbValue *VAR_3;
 char *VAR_4;
 uint32 VAR_5;

 if (!FUNC_0(VAR_1))
  FUNC_2(VAR_0, "not a jsonb array");

 VAR_5 = FUNC_1(VAR_1);
 VAR_4 = (char *) &VAR_1->children[VAR_5];

 if (VAR_2 >= VAR_5)
  return ((void*)0);

 VAR_3 = FUNC_5(sizeof(JsonbValue));

 FUNC_3(VAR_1, VAR_2, VAR_4,
       FUNC_4(VAR_1, VAR_2),
       VAR_3);

 return VAR_3;
}
