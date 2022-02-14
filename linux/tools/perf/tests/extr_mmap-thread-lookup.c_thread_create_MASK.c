
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_data {int * ready; int pt; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ,struct thread_data*) ;
 int FUNC_3 (int ,int*,int) ;
 int VAR_0 ;
 struct thread_data* VAR_1 ;

__attribute__((used)) static int FUNC_4(int VAR_2)
{
 struct thread_data *VAR_3 = &VAR_1[VAR_2];
 int VAR_4, VAR_5;

 if (FUNC_1(VAR_3->ready))
  return -1;

 VAR_4 = FUNC_2(&VAR_3->pt, ((void*)0), VAR_0, VAR_3);
 if (!VAR_4) {

  ssize_t VAR_6 = FUNC_3(VAR_3->ready[0], &VAR_5, sizeof(int));
  VAR_4 = VAR_6 != sizeof(int);
 }

 FUNC_0(VAR_3->ready[0]);
 FUNC_0(VAR_3->ready[1]);
 return VAR_4;
}
