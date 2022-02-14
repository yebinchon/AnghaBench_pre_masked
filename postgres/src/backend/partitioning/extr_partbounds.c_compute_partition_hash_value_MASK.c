
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_4__ {int fn_oid; } ;
typedef int Oid ;
typedef TYPE_1__ FmgrInfo ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

uint64
FUNC_6(int VAR_1, FmgrInfo *VAR_2, Oid *VAR_3,
        Datum *VAR_4, bool *VAR_5)
{
 int VAR_6;
 uint64 VAR_7 = 0;
 Datum VAR_8 = FUNC_4(VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
 {

  if (!VAR_5[VAR_6])
  {
   Datum VAR_9;

   FUNC_0(FUNC_3(VAR_2[VAR_6].fn_oid));






   VAR_9 = FUNC_2(&VAR_2[VAR_6], VAR_3[VAR_6],
          VAR_4[VAR_6], VAR_8);


   VAR_7 = FUNC_5(VAR_7, FUNC_1(VAR_9));
  }
 }

 return VAR_7;
}
