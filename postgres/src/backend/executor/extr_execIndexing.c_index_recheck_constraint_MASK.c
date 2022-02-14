
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * rd_indcollation; } ;
typedef TYPE_1__* Relation ;
typedef int Oid ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_3(Relation VAR_0, Oid *VAR_1,
       Datum *VAR_2, bool *VAR_3,
       Datum *VAR_4)
{
 int VAR_5 = FUNC_1(VAR_0);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {

  if (VAR_3[VAR_6])
   return 0;

  if (!FUNC_0(FUNC_2(VAR_1[VAR_6],
              VAR_0->rd_indcollation[VAR_6],
              VAR_2[VAR_6],
              VAR_4[VAR_6])))
   return 0;
 }

 return 1;
}
