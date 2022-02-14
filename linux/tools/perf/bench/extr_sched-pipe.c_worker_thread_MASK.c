
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_data {int pipe_read; int pipe_write; int nr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int ,int*,int) ;

__attribute__((used)) static void *FUNC_3(void *VAR_1)
{
 struct thread_data *VAR_2 = VAR_1;
 int VAR_3 = 0, VAR_4;
 int VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!VAR_2->nr) {
   VAR_5 = FUNC_1(VAR_2->pipe_read, &VAR_3, sizeof(int));
   FUNC_0(VAR_5 != sizeof(int));
   VAR_5 = FUNC_2(VAR_2->pipe_write, &VAR_3, sizeof(int));
   FUNC_0(VAR_5 != sizeof(int));
  } else {
   VAR_5 = FUNC_2(VAR_2->pipe_write, &VAR_3, sizeof(int));
   FUNC_0(VAR_5 != sizeof(int));
   VAR_5 = FUNC_1(VAR_2->pipe_read, &VAR_3, sizeof(int));
   FUNC_0(VAR_5 != sizeof(int));
  }
 }

 return ((void*)0);
}
