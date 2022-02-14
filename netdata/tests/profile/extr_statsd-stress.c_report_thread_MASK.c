
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_data {scalar_t__ counter; } ;


 int FUNC_0 (char*,...) ;
 size_t VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void *FUNC_2(void *VAR_1) {
 struct thread_data *VAR_2 = (struct thread_data *)VAR_1;

 size_t VAR_3 = 0;
 for (;;) {
  size_t VAR_4;
  size_t VAR_5 = 0;
  for(VAR_4 = 0; VAR_4 < VAR_0 ;VAR_4++)
   VAR_5 += VAR_2[VAR_4].counter;

  FUNC_0("%zu metrics/s\n", VAR_5-VAR_3);
  VAR_3 = VAR_5;

  FUNC_1(1);
  FUNC_0("\033[F\033[J");
 }

 return ((void*)0);
}
