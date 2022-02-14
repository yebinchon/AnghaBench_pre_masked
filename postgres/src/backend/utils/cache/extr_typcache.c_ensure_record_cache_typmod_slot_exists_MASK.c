
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int int32 ;
typedef int TupleDesc ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int * VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (int *,int) ;

__attribute__((used)) static void
FUNC_3(int32 VAR_4)
{
 if (VAR_1 == ((void*)0))
 {
  VAR_1 = (TupleDesc *)
   FUNC_0(VAR_0, 64 * sizeof(TupleDesc));
  VAR_3 = (uint64 *)
   FUNC_0(VAR_0, 64 * sizeof(uint64));
  VAR_2 = 64;
 }

 if (VAR_4 >= VAR_2)
 {
  int32 VAR_5 = VAR_2 * 2;

  while (VAR_4 >= VAR_5)
   VAR_5 *= 2;

  VAR_1 = (TupleDesc *) FUNC_2(VAR_1,
              VAR_5 * sizeof(TupleDesc));
  FUNC_1(VAR_1 + VAR_2, 0,
      (VAR_5 - VAR_2) * sizeof(TupleDesc));
  VAR_3 = (uint64 *) FUNC_2(VAR_3,
             VAR_5 * sizeof(uint64));
  FUNC_1(VAR_3 + VAR_2, 0,
      (VAR_5 - VAR_2) * sizeof(uint64));
  VAR_2 = VAR_5;
 }
}
