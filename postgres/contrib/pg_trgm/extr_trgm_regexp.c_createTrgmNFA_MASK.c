
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int regex_t ;
typedef int TrgmPackedGraph ;
typedef int TRGM ;
typedef int Oid ;
typedef int MemoryContext ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *,int *,int,int ) ;
 int * FUNC_7 (int *,int **,int ) ;
 int FUNC_8 (int *) ;

TRGM *
FUNC_9(text *VAR_4, Oid VAR_5,
     TrgmPackedGraph **VAR_6, MemoryContext VAR_7)
{
 TRGM *VAR_8;
 regex_t VAR_9;
 MemoryContext VAR_10;
 MemoryContext VAR_11;







 VAR_10 = FUNC_0(VAR_1,
            "createTrgmNFA temporary context",
            VAR_0);
 VAR_11 = FUNC_2(VAR_10);







 FUNC_6(&VAR_9, VAR_4, VAR_2, VAR_5);







 FUNC_5();
 {
  VAR_8 = FUNC_7(&VAR_9, VAR_6, VAR_7);
 }
 FUNC_4();
 {
  FUNC_8(&VAR_9);
 }
 FUNC_3();


 FUNC_2(VAR_11);
 FUNC_1(VAR_10);

 return VAR_8;
}
