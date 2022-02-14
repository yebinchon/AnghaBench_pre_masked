
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int key ;
typedef int bytea ;
struct TYPE_5__ {int * opts; } ;
struct TYPE_4__ {int attnum; int attrelid; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef int Datum ;
typedef int AttributeOpts ;
typedef TYPE_1__ AttoptCacheKey ;
typedef TYPE_2__ AttoptCacheEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (int ,void*,int ,int *) ;
 int FUNC_11 (int *,int *,int ) ;
 int FUNC_12 (TYPE_1__*,int ,int) ;
 int * FUNC_13 (int ) ;

AttributeOpts *
FUNC_14(Oid VAR_6, int VAR_7)
{
 AttoptCacheKey VAR_8;
 AttoptCacheEntry *VAR_9;
 AttributeOpts *VAR_10;
 HeapTuple VAR_11;


 if (!VAR_2)
  FUNC_1();
 FUNC_12(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.attrelid = VAR_6;
 VAR_8.attnum = VAR_7;
 VAR_9 =
  (AttoptCacheEntry *) FUNC_10(VAR_2,
           (void *) &VAR_8,
           VAR_5,
           ((void*)0));


 if (!VAR_9)
 {
  AttributeOpts *VAR_12;

  VAR_11 = FUNC_6(VAR_0,
        FUNC_4(VAR_6),
        FUNC_2(VAR_7));






  if (!FUNC_0(VAR_11))
   VAR_12 = ((void*)0);
  else
  {
   Datum VAR_13;
   bool VAR_14;

   VAR_13 = FUNC_7(VAR_0,
         VAR_11,
         VAR_1,
         &VAR_14);
   if (VAR_14)
    VAR_12 = ((void*)0);
   else
   {
    bytea *VAR_15 = FUNC_9(VAR_13, 0);

    VAR_12 = FUNC_3(VAR_3,
            FUNC_8(VAR_15));
    FUNC_11(VAR_12, VAR_15, FUNC_8(VAR_15));
   }
   FUNC_5(VAR_11);
  }





  VAR_9 = (AttoptCacheEntry *) FUNC_10(VAR_2,
              (void *) &VAR_8,
              VAR_4,
              ((void*)0));
  VAR_9->opts = VAR_12;
 }


 if (VAR_9->opts == ((void*)0))
  return ((void*)0);
 VAR_10 = FUNC_13(FUNC_8(VAR_9->opts));
 FUNC_11(VAR_10, VAR_9->opts, FUNC_8(VAR_9->opts));
 return VAR_10;
}
