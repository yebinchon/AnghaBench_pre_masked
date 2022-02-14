
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleTableSlot ;
typedef int Oid ;
typedef int MemoryContext ;
typedef int FmgrInfo ;
typedef int Datum ;
typedef int AttrNumber ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int const,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int*) ;

__attribute__((used)) static bool
FUNC_5(TupleTableSlot *VAR_0,
      TupleTableSlot *VAR_1,
      int VAR_2,
      AttrNumber *VAR_3,
      FmgrInfo *VAR_4,
      const Oid *VAR_5,
      MemoryContext VAR_6)
{
 MemoryContext VAR_7;
 bool VAR_8;
 int VAR_9;


 FUNC_2(VAR_6);
 VAR_7 = FUNC_3(VAR_6);







 VAR_8 = 0;

 for (VAR_9 = VAR_2; --VAR_9 >= 0;)
 {
  AttrNumber VAR_10 = VAR_3[VAR_9];
  Datum VAR_11,
     VAR_12;
  bool VAR_13,
     VAR_14;

  VAR_11 = FUNC_4(VAR_0, VAR_10, &VAR_13);

  if (VAR_13)
   continue;

  VAR_12 = FUNC_4(VAR_1, VAR_10, &VAR_14);

  if (VAR_14)
   continue;


  if (!FUNC_0(FUNC_1(&VAR_4[VAR_9],
           VAR_5[VAR_9],
           VAR_11, VAR_12)))
  {
   VAR_8 = 1;
   break;
  }
 }

 FUNC_3(VAR_7);

 return VAR_8;
}
