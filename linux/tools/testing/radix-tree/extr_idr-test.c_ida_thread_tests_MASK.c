
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,int *,int ,int *) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(void)
{
 pthread_t VAR_1[20];
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
  if (FUNC_3(&VAR_1[VAR_2], ((void*)0), VAR_0, ((void*)0))) {
   FUNC_2("creating ida thread");
   FUNC_1(1);
  }

 while (VAR_2--)
  FUNC_4(VAR_1[VAR_2], ((void*)0));
}
