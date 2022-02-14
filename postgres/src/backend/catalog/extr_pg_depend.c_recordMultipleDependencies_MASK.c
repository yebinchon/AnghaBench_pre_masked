
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int nulls ;
struct TYPE_12__ {int objectSubId; int objectId; int classId; } ;
struct TYPE_11__ {int rd_att; } ;
typedef TYPE_1__* Relation ;
typedef TYPE_2__ ObjectAddress ;
typedef int HeapTuple ;
typedef scalar_t__ DependencyType ;
typedef int Datum ;
typedef int * CatalogIndexState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;
 int FUNC_3 (char) ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 int VAR_9 ;
 int FUNC_7 (int ,int *,int*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__ const*,TYPE_1__*) ;
 int FUNC_10 (int*,int,int) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_12 (int ,int ) ;

void
FUNC_13(const ObjectAddress *VAR_10,
         const ObjectAddress *VAR_11,
         int VAR_12,
         DependencyType VAR_13)
{
 Relation VAR_14;
 CatalogIndexState VAR_15;
 HeapTuple VAR_16;
 int VAR_17;
 bool VAR_18[VAR_8];
 Datum VAR_19[VAR_8];

 if (VAR_12 <= 0)
  return;





 if (FUNC_5())
  return;

 VAR_14 = FUNC_12(VAR_7, VAR_9);


 VAR_15 = ((void*)0);

 FUNC_10(VAR_18, 0, sizeof(VAR_18));

 for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++, VAR_11++)
 {





  if (!FUNC_9(VAR_11, VAR_14))
  {




   VAR_19[VAR_0 - 1] = FUNC_6(VAR_10->classId);
   VAR_19[VAR_2 - 1] = FUNC_6(VAR_10->objectId);
   VAR_19[VAR_3 - 1] = FUNC_4(VAR_10->objectSubId);

   VAR_19[VAR_4 - 1] = FUNC_6(VAR_11->classId);
   VAR_19[VAR_5 - 1] = FUNC_6(VAR_11->objectId);
   VAR_19[VAR_6 - 1] = FUNC_4(VAR_11->objectSubId);

   VAR_19[VAR_1 - 1] = FUNC_3((char) VAR_13);

   VAR_16 = FUNC_7(VAR_14->rd_att, VAR_19, VAR_18);


   if (VAR_15 == ((void*)0))
    VAR_15 = FUNC_1(VAR_14);

   FUNC_2(VAR_14, VAR_16, VAR_15);

   FUNC_8(VAR_16);
  }
 }

 if (VAR_15 != ((void*)0))
  FUNC_0(VAR_15);

 FUNC_11(VAR_14, VAR_9);
}
