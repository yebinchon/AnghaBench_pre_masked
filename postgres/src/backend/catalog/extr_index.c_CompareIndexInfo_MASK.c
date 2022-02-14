
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ii_Unique; scalar_t__ ii_Am; int ii_NumIndexAttrs; int ii_NumIndexKeyAttrs; int* ii_IndexAttrNumbers; scalar_t__ ii_Expressions; scalar_t__ ii_Predicate; int * ii_ExclusionOps; } ;
typedef scalar_t__ Oid ;
typedef int Node ;
typedef TYPE_1__ IndexInfo ;
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int *) ;
 int * FUNC_2 (int *,int,int ,scalar_t__*,int,int ,int*) ;

bool
FUNC_3(IndexInfo *VAR_4, IndexInfo *VAR_5,
     Oid *VAR_6, Oid *VAR_7,
     Oid *VAR_8, Oid *VAR_9,
     AttrNumber *VAR_10, int VAR_11)
{
 int VAR_12;

 if (VAR_4->ii_Unique != VAR_5->ii_Unique)
  return 0;


 if (VAR_4->ii_Am != VAR_5->ii_Am)
  return 0;


 if (VAR_4->ii_NumIndexAttrs != VAR_5->ii_NumIndexAttrs)
  return 0;


 if (VAR_4->ii_NumIndexKeyAttrs != VAR_5->ii_NumIndexKeyAttrs)
  return 0;







 for (VAR_12 = 0; VAR_12 < VAR_4->ii_NumIndexAttrs; VAR_12++)
 {
  if (VAR_11 < VAR_5->ii_IndexAttrNumbers[VAR_12])
   FUNC_0(VAR_0, "incorrect attribute map");


  if ((VAR_4->ii_IndexAttrNumbers[VAR_12] != VAR_1) &&
   (VAR_10[VAR_5->ii_IndexAttrNumbers[VAR_12] - 1] !=
    VAR_4->ii_IndexAttrNumbers[VAR_12]))
   return 0;


  if (VAR_12 >= VAR_4->ii_NumIndexKeyAttrs)
   continue;

  if (VAR_6[VAR_12] != VAR_7[VAR_12])
   return 0;
  if (VAR_8[VAR_12] != VAR_9[VAR_12])
   return 0;
 }





 if ((VAR_4->ii_Expressions != VAR_3) != (VAR_5->ii_Expressions != VAR_3))
  return 0;
 if (VAR_4->ii_Expressions != VAR_3)
 {
  bool VAR_13;
  Node *VAR_14;

  VAR_14 = FUNC_2((Node *) VAR_5->ii_Expressions,
          1, 0, VAR_10, VAR_11,
          VAR_2, &VAR_13);
  if (VAR_13)
  {




   return 0;
  }

  if (!FUNC_1(VAR_4->ii_Expressions, VAR_14))
   return 0;
 }


 if ((VAR_4->ii_Predicate == ((void*)0)) != (VAR_5->ii_Predicate == ((void*)0)))
  return 0;
 if (VAR_4->ii_Predicate != ((void*)0))
 {
  bool VAR_15;
  Node *VAR_16;

  VAR_16 = FUNC_2((Node *) VAR_5->ii_Predicate,
          1, 0, VAR_10, VAR_11,
          VAR_2, &VAR_15);
  if (VAR_15)
  {




   return 0;
  }
  if (!FUNC_1(VAR_4->ii_Predicate, VAR_16))
   return 0;
 }


 if (VAR_4->ii_ExclusionOps != ((void*)0) || VAR_5->ii_ExclusionOps != ((void*)0))
  return 0;

 return 1;
}
