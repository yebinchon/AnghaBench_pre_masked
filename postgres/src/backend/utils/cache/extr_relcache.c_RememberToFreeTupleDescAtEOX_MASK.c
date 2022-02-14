
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int TupleDesc ;
typedef int MemoryContext ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int) ;

__attribute__((used)) static void
FUNC_4(TupleDesc VAR_4)
{
 if (VAR_1 == ((void*)0))
 {
  MemoryContext VAR_5;

  VAR_5 = FUNC_1(VAR_0);

  VAR_1 = (TupleDesc *) FUNC_2(16 * sizeof(TupleDesc));
  VAR_2 = 16;
  VAR_3 = 0;
  FUNC_1(VAR_5);
 }
 else if (VAR_3 >= VAR_2)
 {
  int32 VAR_6 = VAR_2 * 2;

  FUNC_0(VAR_2 > 0);

  VAR_1 = (TupleDesc *) FUNC_3(VAR_1,
               VAR_6 * sizeof(TupleDesc));
  VAR_2 = VAR_6;
 }

 VAR_1[VAR_3++] = VAR_4;
}
