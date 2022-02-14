
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SpGistState ;
typedef int Relation ;
typedef int MemoryContext ;
typedef int ItemPointer ;
typedef int IndexUniqueCheck ;
typedef int IndexInfo ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int *,int ,int ,int) ;

bool
FUNC_7(Relation VAR_2, Datum *VAR_3, bool *VAR_4,
    ItemPointer VAR_5, Relation VAR_6,
    IndexUniqueCheck VAR_7,
    IndexInfo *VAR_8)
{
 SpGistState VAR_9;
 MemoryContext VAR_10;
 MemoryContext VAR_11;

 VAR_11 = FUNC_0(VAR_1,
           "SP-GiST insert temporary context",
           VAR_0);
 VAR_10 = FUNC_3(VAR_11);

 FUNC_5(&VAR_9, VAR_2);







 while (!FUNC_6(VAR_2, &VAR_9, VAR_5, *VAR_3, *VAR_4))
 {
  FUNC_2(VAR_11);
  FUNC_5(&VAR_9, VAR_2);
 }

 FUNC_4(VAR_2);

 FUNC_3(VAR_10);
 FUNC_1(VAR_11);


 return 0;
}
