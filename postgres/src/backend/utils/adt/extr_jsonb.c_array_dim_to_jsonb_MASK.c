
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int parseState; void* res; } ;
typedef int Oid ;
typedef int JsonbTypeCategory ;
typedef TYPE_1__ JsonbInState ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,TYPE_1__*,int ,int ,int) ;
 void* FUNC_2 (int *,int ,int *) ;

__attribute__((used)) static void
FUNC_3(JsonbInState *VAR_2, int VAR_3, int VAR_4, int *VAR_5, Datum *VAR_6,
       bool *VAR_7, int *VAR_8, JsonbTypeCategory VAR_9,
       Oid VAR_10)
{
 int VAR_11;

 FUNC_0(VAR_3 < VAR_4);

 VAR_2->res = FUNC_2(&VAR_2->parseState, VAR_0, ((void*)0));

 for (VAR_11 = 1; VAR_11 <= VAR_5[VAR_3]; VAR_11++)
 {
  if (VAR_3 + 1 == VAR_4)
  {
   FUNC_1(VAR_6[*VAR_8], VAR_7[*VAR_8], VAR_2, VAR_9,
         VAR_10, 0);
   (*VAR_8)++;
  }
  else
  {
   FUNC_3(VAR_2, VAR_3 + 1, VAR_4, VAR_5, VAR_6, VAR_7,
          VAR_8, VAR_9, VAR_10);
  }
 }

 VAR_2->res = FUNC_2(&VAR_2->parseState, VAR_1, ((void*)0));
}
