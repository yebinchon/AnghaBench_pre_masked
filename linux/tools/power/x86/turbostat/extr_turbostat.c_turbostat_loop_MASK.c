
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timezone {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 int FUNC_8 (int *,struct timezone*) ;
 int VAR_7 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int *,int *,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_13()
{
 int VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 0;

 FUNC_10();

restart:
 VAR_12++;

 FUNC_11();
 VAR_11 = FUNC_4(VAR_6, VAR_0);
 VAR_5 = 0;
 if (VAR_11 < -1) {
  FUNC_2(VAR_11);
 } else if (VAR_11 == -1) {
  if (VAR_12 > 1) {
   FUNC_2(VAR_11);
  }
  FUNC_9();
  goto restart;
 }
 VAR_12 = 0;
 VAR_13 = 0;
 FUNC_8(&VAR_9, (struct timezone *)((void*)0));

 while (1) {
  if (FUNC_6(VAR_2)) {
   FUNC_9();
   goto restart;
  }
  FUNC_1();
  if (FUNC_11())
   goto restart;
  VAR_11 = FUNC_4(VAR_6, VAR_1);
  if (VAR_11 < -1) {
   FUNC_2(VAR_11);
  } else if (VAR_11 == -1) {
   FUNC_9();
   goto restart;
  }
  FUNC_8(&VAR_10, (struct timezone *)((void*)0));
  FUNC_12(&VAR_10, &VAR_9, &VAR_8);
  if (FUNC_5(VAR_3, VAR_1, VAR_0)) {
   FUNC_9();
   goto restart;
  }
  FUNC_0(VAR_0);
  FUNC_7(VAR_0);
  FUNC_3();
  if (VAR_4)
   break;
  if (VAR_7 && ++VAR_13 >= VAR_7)
   break;
  FUNC_1();
  if (FUNC_11())
   goto restart;
  VAR_11 = FUNC_4(VAR_6, VAR_0);
  if (VAR_11 < -1) {
   FUNC_2(VAR_11);
  } else if (VAR_11 == -1) {
   FUNC_9();
   goto restart;
  }
  FUNC_8(&VAR_9, (struct timezone *)((void*)0));
  FUNC_12(&VAR_9, &VAR_10, &VAR_8);
  if (FUNC_5(VAR_3, VAR_0, VAR_1)) {
   FUNC_9();
   goto restart;
  }
  FUNC_0(VAR_1);
  FUNC_7(VAR_1);
  FUNC_3();
  if (VAR_4)
   break;
  if (VAR_7 && ++VAR_13 >= VAR_7)
   break;
 }
}
