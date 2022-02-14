
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_8__ {int opaque; } ;
typedef int TIDBitmap ;
typedef int ItemPointerData ;
typedef TYPE_1__* IndexScanDesc ;
typedef int GinScanOpaque ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,int *,int*) ;
 int FUNC_8 (TYPE_1__*,int *,scalar_t__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int *,int,int) ;

int64
FUNC_12(IndexScanDesc VAR_0, TIDBitmap *VAR_1)
{
 GinScanOpaque VAR_2 = (GinScanOpaque) VAR_0->opaque;
 int64 VAR_3;
 ItemPointerData VAR_4;
 bool VAR_5;




 FUNC_5(VAR_2);

 FUNC_6(VAR_0);

 if (FUNC_1(VAR_0))
  return 0;

 VAR_3 = 0;
 FUNC_8(VAR_0, VAR_1, &VAR_3);




 FUNC_9(VAR_0);

 FUNC_4(&VAR_4);

 for (;;)
 {
  FUNC_0();

  if (!FUNC_7(VAR_0, VAR_4, &VAR_4, &VAR_5))
   break;

  if (FUNC_3(&VAR_4))
   FUNC_10(VAR_1, FUNC_2(&VAR_4));
  else
   FUNC_11(VAR_1, &VAR_4, 1, VAR_5);
  VAR_3++;
 }

 return VAR_3;
}
