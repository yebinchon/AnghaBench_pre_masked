
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* cc_tupdesc; } ;
typedef int HeapTuple ;
typedef int Datum ;
typedef int AttrNumber ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ,TYPE_1__*,int*) ;

Datum
FUNC_5(int VAR_3, HeapTuple VAR_4,
    AttrNumber VAR_5,
    bool *VAR_6)
{






 if (VAR_3 < 0 || VAR_3 >= VAR_2 ||
  !FUNC_2(VAR_1[VAR_3]))
  FUNC_3(VAR_0, "invalid cache ID: %d", VAR_3);
 if (!FUNC_2(VAR_1[VAR_3]->cc_tupdesc))
 {
  FUNC_1(VAR_1[VAR_3], 0);
  FUNC_0(FUNC_2(VAR_1[VAR_3]->cc_tupdesc));
 }

 return FUNC_4(VAR_4, VAR_5,
      VAR_1[VAR_3]->cc_tupdesc,
      VAR_6);
}
