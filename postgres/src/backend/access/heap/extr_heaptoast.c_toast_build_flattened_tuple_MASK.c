
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct varlena {int dummy; } ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_7__ {int attlen; } ;
struct TYPE_6__ {int natts; } ;
typedef scalar_t__ Pointer ;
typedef int HeapTuple ;
typedef int Datum ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct varlena*) ;
 TYPE_4__* FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (struct varlena*) ;
 struct varlena* FUNC_5 (struct varlena*) ;
 int FUNC_6 (TYPE_1__*,int *,int*) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (scalar_t__) ;

HeapTuple
FUNC_9(TupleDesc VAR_1,
       Datum *VAR_2,
       bool *VAR_3)
{
 HeapTuple VAR_4;
 int VAR_5 = VAR_1->natts;
 int VAR_6;
 int VAR_7;
 Datum VAR_8[VAR_0];
 Pointer VAR_9[VAR_0];





 FUNC_0(VAR_5 <= VAR_0);
 FUNC_7(VAR_8, VAR_2, VAR_5 * sizeof(Datum));

 VAR_6 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
 {



  if (!VAR_3[VAR_7] && FUNC_3(VAR_1, VAR_7)->attlen == -1)
  {
   struct varlena *VAR_10;

   VAR_10 = (struct varlena *) FUNC_1(VAR_8[VAR_7]);
   if (FUNC_4(VAR_10))
   {
    VAR_10 = FUNC_5(VAR_10);
    VAR_8[VAR_7] = FUNC_2(VAR_10);
    VAR_9[VAR_6++] = (Pointer) VAR_10;
   }
  }
 }




 VAR_4 = FUNC_6(VAR_1, VAR_8, VAR_3);




 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  FUNC_8(VAR_9[VAR_7]);

 return VAR_4;
}
