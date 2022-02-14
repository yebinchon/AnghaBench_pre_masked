
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlist_head {scalar_t__ bytes; } ;


 size_t VAR_0 ;
 struct qlist_head VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int * VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (size_t,int) ;
 size_t FUNC_4 () ;
 int FUNC_5 (struct qlist_head*,int *) ;
 int FUNC_6 (int *,struct qlist_head*) ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int VAR_11 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 size_t FUNC_11 () ;

void FUNC_12(void)
{
 size_t VAR_12, VAR_13, VAR_14;
 unsigned long VAR_15;
 int VAR_16;
 struct qlist_head VAR_17 = VAR_1;

 if (FUNC_2(FUNC_0(VAR_10) <=
     FUNC_0(VAR_9)))
  return;
 VAR_16 = FUNC_9(&VAR_11);
 FUNC_7(&VAR_8, VAR_15);





 VAR_12 = (FUNC_11() << VAR_0) /
  VAR_3;
 VAR_14 = VAR_4 * FUNC_4();
 VAR_13 = (VAR_12 < VAR_14) ?
  0 : VAR_12 - VAR_14;
 FUNC_1(VAR_9, VAR_13);

 FUNC_1(VAR_6, FUNC_3((size_t)VAR_4,
  2 * VAR_12 / VAR_2));

 if (FUNC_2(VAR_10 > VAR_9)) {
  FUNC_6(&VAR_5[VAR_7], &VAR_17);
  FUNC_1(VAR_10, VAR_10 - VAR_17.bytes);
  VAR_7++;
  if (VAR_7 == VAR_2)
   VAR_7 = 0;
 }

 FUNC_8(&VAR_8, VAR_15);

 FUNC_5(&VAR_17, ((void*)0));
 FUNC_10(&VAR_11, VAR_16);
}
