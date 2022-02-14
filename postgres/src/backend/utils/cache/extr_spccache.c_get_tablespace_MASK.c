
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bytea ;
typedef int TableSpaceOpts ;
struct TYPE_3__ {int * opts; } ;
typedef TYPE_1__ TableSpaceCacheEntry ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_4 ;
 int * FUNC_2 (int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,void*,int ,int *) ;
 int FUNC_9 (int *,int *,int ) ;
 int * FUNC_10 (int ,int) ;

__attribute__((used)) static TableSpaceCacheEntry *
FUNC_11(Oid VAR_8)
{
 TableSpaceCacheEntry *VAR_9;
 HeapTuple VAR_10;
 TableSpaceOpts *VAR_11;





 if (VAR_8 == VAR_4)
  VAR_8 = VAR_5;


 if (!VAR_7)
  FUNC_1();
 VAR_9 = (TableSpaceCacheEntry *) FUNC_8(VAR_7,
              (void *) &VAR_8,
              VAR_3,
              ((void*)0));
 if (VAR_9)
  return VAR_9;







 VAR_10 = FUNC_5(VAR_6, FUNC_3(VAR_8));
 if (!FUNC_0(VAR_10))
  VAR_11 = ((void*)0);
 else
 {
  Datum VAR_12;
  bool VAR_13;

  VAR_12 = FUNC_6(VAR_6,
        VAR_10,
        VAR_0,
        &VAR_13);
  if (VAR_13)
   VAR_11 = ((void*)0);
  else
  {
   bytea *VAR_14 = FUNC_10(VAR_12, 0);

   VAR_11 = FUNC_2(VAR_1, FUNC_7(VAR_14));
   FUNC_9(VAR_11, VAR_14, FUNC_7(VAR_14));
  }
  FUNC_4(VAR_10);
 }






 VAR_9 = (TableSpaceCacheEntry *) FUNC_8(VAR_7,
              (void *) &VAR_8,
              VAR_2,
              ((void*)0));
 VAR_9->opts = VAR_11;
 return VAR_9;
}
