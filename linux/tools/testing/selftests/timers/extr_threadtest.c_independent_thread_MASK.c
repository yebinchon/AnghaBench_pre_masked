
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timespec*,int) ;
 int FUNC_1 (int ,struct timespec*) ;
 int VAR_2 ;

void *FUNC_2(void *VAR_3)
{
 struct timespec VAR_4[VAR_1];
 int VAR_5;

 while (!VAR_2) {

  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
   FUNC_1(VAR_0, &VAR_4[VAR_5]);
  FUNC_0(VAR_4, VAR_1);
 }
 return ((void*)0);
}
