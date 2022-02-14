
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_key_t ;
typedef int mutex_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int,void*) ;

__attribute__((used)) static int *
FUNC_7()
{
 extern mutex_t VAR_1;
 extern thread_key_t VAR_2;
 static int VAR_3 = 0;
 int VAR_4, *VAR_5;






 if (VAR_2 == -1) {
  VAR_4 = 0;
  FUNC_3(&VAR_1);
  if (VAR_2 == -1)
   VAR_4 = VAR_2 = FUNC_0();
  FUNC_4(&VAR_1);
  if (VAR_4 == VAR_0)
   return (&VAR_3);
 }
 if ((VAR_5 = (int *)FUNC_5(VAR_2)) == ((void*)0)) {
  VAR_5 = (int *)FUNC_2(sizeof (int *));
  if (FUNC_6(VAR_2, (void *) VAR_5) == 0) {
   if (VAR_5)
    FUNC_1(VAR_5);
   return (&VAR_3);
  }
  *VAR_5 = 0;
 }
 return (VAR_5);
}
