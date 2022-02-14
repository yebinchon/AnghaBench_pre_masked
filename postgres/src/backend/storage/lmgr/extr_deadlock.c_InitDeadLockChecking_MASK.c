
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WAIT_ORDER ;
typedef int PGPROC ;
typedef int MemoryContext ;
typedef int EDGE ;
typedef int DEADLOCK_INFO ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 int * VAR_8 ;
 int ** VAR_9 ;
 int ** VAR_10 ;
 int ** VAR_11 ;
 int * VAR_12 ;

void
FUNC_2(void)
{
 MemoryContext VAR_13;


 VAR_13 = FUNC_0(VAR_1);





 VAR_10 = (PGPROC **) FUNC_1(VAR_0 * sizeof(PGPROC *));
 VAR_5 = (DEADLOCK_INFO *) FUNC_1(VAR_0 * sizeof(DEADLOCK_INFO));





 VAR_9 = VAR_10;
 VAR_3 = (int *) FUNC_1(VAR_0 * sizeof(int));
 VAR_2 = (int *) FUNC_1(VAR_0 * sizeof(int));







 VAR_12 = (WAIT_ORDER *)
  FUNC_1((VAR_0 / 2) * sizeof(WAIT_ORDER));
 VAR_11 = (PGPROC **) FUNC_1(VAR_0 * sizeof(PGPROC *));
 VAR_6 = VAR_0;
 VAR_4 = (EDGE *) FUNC_1(VAR_6 * sizeof(EDGE));
 VAR_7 = VAR_0 * 4;
 VAR_8 =
  (EDGE *) FUNC_1(VAR_7 * sizeof(EDGE));

 FUNC_0(VAR_13);
}
