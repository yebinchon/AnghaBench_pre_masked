
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_state {int depth; unsigned long ip; } ;
struct _Unwind_Context {int dummy; } ;
typedef int _Unwind_Reason_Code ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (struct _Unwind_Context*,int) ;
 unsigned long FUNC_1 (struct _Unwind_Context*) ;
 unsigned long FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (char*,...) ;
 unsigned long VAR_4 ;

_Unwind_Reason_Code FUNC_4(struct _Unwind_Context * VAR_5, void *VAR_6)
{
 struct unwind_state *VAR_7 = VAR_6;
 unsigned long VAR_8 = FUNC_1(VAR_5);

 if (VAR_7->depth == -1) {
  if (VAR_8 == VAR_7->ip)
   VAR_7->depth = 0;
  else
   return VAR_2;
 }
 FUNC_3("\t  0x%lx\n", VAR_8);

 if (VAR_8 == VAR_4) {

  unsigned long VAR_9 = FUNC_0(VAR_5, 0);
  unsigned long VAR_10 = FUNC_0(VAR_5, 1);
  unsigned long VAR_11 = FUNC_0(VAR_5, 2);
  unsigned long VAR_12 = FUNC_0(VAR_5, 3);
  unsigned long VAR_13 = FUNC_0(VAR_5, 5);
  unsigned long VAR_14 = FUNC_0(VAR_5, 6);
  unsigned long VAR_15 = FUNC_0(VAR_5, 7);
  bool VAR_16 = (VAR_9 == VAR_0 || VAR_9 == FUNC_2()) &&
   VAR_12 == 1 && VAR_10 == 2 && VAR_11 == 3 &&
   VAR_14 == 4 && VAR_15 == 5 && VAR_13 == 6;

  if (!VAR_16)
   VAR_3++;
  FUNC_3("[%s]\t  NR = %ld, args = %ld, %ld, %ld, %ld, %ld, %ld\n",
         (VAR_16 ? "OK" : "FAIL"),
         VAR_9, VAR_12, VAR_10, VAR_11, VAR_14, VAR_15, VAR_13);

  return VAR_1;
 } else {
  VAR_7->depth++;
  return VAR_2;
 }
}
