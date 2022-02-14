
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_data {int map; int * ready; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct thread_data*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int*,int) ;

__attribute__((used)) static void *FUNC_5(void *VAR_2)
{
 struct thread_data *VAR_3 = VAR_2;
 ssize_t VAR_4;
 int VAR_5 = 0;

 if (FUNC_2(VAR_3))
  return ((void*)0);


 VAR_4 = FUNC_4(VAR_3->ready[1], &VAR_5, sizeof(int));
 if (VAR_4 != sizeof(int)) {
  FUNC_1("failed to notify\n");
  return ((void*)0);
 }

 while (!VAR_0) {

  FUNC_3(100);
 }

 FUNC_0(VAR_3->map, VAR_1);
 return ((void*)0);
}
