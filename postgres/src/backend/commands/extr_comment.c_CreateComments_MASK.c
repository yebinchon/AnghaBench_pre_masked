
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32 ;
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
 int VAR_4 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,int *,TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_11 ;
 int FUNC_7 (int *,int,int ,int ,int ) ;
 TYPE_1__* FUNC_8 (int ,int *,int*) ;
 int FUNC_9 (TYPE_1__*) ;
 TYPE_1__* FUNC_10 (TYPE_1__*,int ,int *,int*,int*) ;
 scalar_t__ FUNC_11 (char const*) ;
 int FUNC_12 (int ,int ,int,int *,int,int *) ;
 int FUNC_13 (int ) ;
 TYPE_1__* FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;

void
FUNC_17(Oid VAR_12, Oid VAR_13, int32 VAR_14, const char *VAR_15)
{
 Relation VAR_16;
 ScanKeyData VAR_17[3];
 SysScanDesc VAR_18;
 HeapTuple VAR_19;
 HeapTuple VAR_20 = ((void*)0);
 Datum VAR_21[VAR_9];
 bool VAR_22[VAR_9];
 bool VAR_23[VAR_9];
 int VAR_24;


 if (VAR_15 != ((void*)0) && FUNC_11(VAR_15) == 0)
  VAR_15 = ((void*)0);


 if (VAR_15 != ((void*)0))
 {
  for (VAR_24 = 0; VAR_24 < VAR_9; VAR_24++)
  {
   VAR_22[VAR_24] = 0;
   VAR_23[VAR_24] = 1;
  }
  VAR_21[VAR_2 - 1] = FUNC_5(VAR_12);
  VAR_21[VAR_0 - 1] = FUNC_5(VAR_13);
  VAR_21[VAR_3 - 1] = FUNC_4(VAR_14);
  VAR_21[VAR_1 - 1] = FUNC_0(VAR_15);
 }



 FUNC_7(&VAR_17[0],
    VAR_2,
    VAR_4, VAR_8,
    FUNC_5(VAR_12));
 FUNC_7(&VAR_17[1],
    VAR_0,
    VAR_4, VAR_8,
    FUNC_5(VAR_13));
 FUNC_7(&VAR_17[2],
    VAR_3,
    VAR_4, VAR_7,
    FUNC_4(VAR_14));

 VAR_16 = FUNC_16(VAR_6, VAR_11);

 VAR_18 = FUNC_12(VAR_16, VAR_5, 1,
       ((void*)0), 3, VAR_17);

 while ((VAR_19 = FUNC_14(VAR_18)) != ((void*)0))
 {


  if (VAR_15 == ((void*)0))
   FUNC_1(VAR_16, &VAR_19->t_self);
  else
  {
   VAR_20 = FUNC_10(VAR_19, FUNC_6(VAR_16), VAR_21,
           VAR_22, VAR_23);
   FUNC_3(VAR_16, &VAR_19->t_self, VAR_20);
  }

  break;
 }

 FUNC_13(VAR_18);



 if (VAR_20 == ((void*)0) && VAR_15 != ((void*)0))
 {
  VAR_20 = FUNC_8(FUNC_6(VAR_16),
           VAR_21, VAR_22);
  FUNC_2(VAR_16, VAR_20);
 }

 if (VAR_20 != ((void*)0))
  FUNC_9(VAR_20);



 FUNC_15(VAR_16, VAR_10);
}
