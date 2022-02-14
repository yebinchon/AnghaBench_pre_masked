
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int t_self; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,int *,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int FUNC_6 (int *,int,int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* FUNC_7 (int ,int *,int*) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (TYPE_1__*,int ,int *,int*,int*) ;
 scalar_t__ FUNC_10 (char const*) ;
 int FUNC_11 (int ,int ,int,int *,int,int *) ;
 int FUNC_12 (int ) ;
 TYPE_1__* FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;

void
FUNC_16(Oid VAR_10, Oid VAR_11, const char *VAR_12)
{
 Relation VAR_13;
 ScanKeyData VAR_14[2];
 SysScanDesc VAR_15;
 HeapTuple VAR_16;
 HeapTuple VAR_17 = ((void*)0);
 Datum VAR_18[VAR_5];
 bool VAR_19[VAR_5];
 bool VAR_20[VAR_5];
 int VAR_21;


 if (VAR_12 != ((void*)0) && FUNC_10(VAR_12) == 0)
  VAR_12 = ((void*)0);


 if (VAR_12 != ((void*)0))
 {
  for (VAR_21 = 0; VAR_21 < VAR_5; VAR_21++)
  {
   VAR_19[VAR_21] = 0;
   VAR_20[VAR_21] = 1;
  }
  VAR_18[VAR_2 - 1] = FUNC_4(VAR_10);
  VAR_18[VAR_0 - 1] = FUNC_4(VAR_11);
  VAR_18[VAR_1 - 1] = FUNC_0(VAR_12);
 }



 FUNC_6(&VAR_14[0],
    VAR_2,
    VAR_3, VAR_4,
    FUNC_4(VAR_10));
 FUNC_6(&VAR_14[1],
    VAR_0,
    VAR_3, VAR_4,
    FUNC_4(VAR_11));

 VAR_13 = FUNC_15(VAR_9, VAR_7);

 VAR_15 = FUNC_11(VAR_13, VAR_8, 1,
       ((void*)0), 2, VAR_14);

 while ((VAR_16 = FUNC_13(VAR_15)) != ((void*)0))
 {


  if (VAR_12 == ((void*)0))
   FUNC_1(VAR_13, &VAR_16->t_self);
  else
  {
   VAR_17 = FUNC_9(VAR_16, FUNC_5(VAR_13),
           VAR_18, VAR_19, VAR_20);
   FUNC_3(VAR_13, &VAR_16->t_self, VAR_17);
  }

  break;
 }

 FUNC_12(VAR_15);



 if (VAR_17 == ((void*)0) && VAR_12 != ((void*)0))
 {
  VAR_17 = FUNC_7(FUNC_5(VAR_13),
           VAR_18, VAR_19);
  FUNC_2(VAR_13, VAR_17);
 }

 if (VAR_17 != ((void*)0))
  FUNC_8(VAR_17);



 FUNC_14(VAR_13, VAR_6);
}
