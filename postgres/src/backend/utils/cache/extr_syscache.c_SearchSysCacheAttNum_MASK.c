
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_2__ {scalar_t__ attisdropped; } ;
typedef int Oid ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_attribute ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ,int ) ;

HeapTuple
FUNC_6(Oid VAR_1, int16 VAR_2)
{
 HeapTuple VAR_3;

 VAR_3 = FUNC_5(VAR_0,
       FUNC_3(VAR_1),
       FUNC_2(VAR_2));
 if (!FUNC_1(VAR_3))
  return ((void*)0);
 if (((Form_pg_attribute) FUNC_0(VAR_3))->attisdropped)
 {
  FUNC_4(VAR_3);
  return ((void*)0);
 }
 return VAR_3;
}
