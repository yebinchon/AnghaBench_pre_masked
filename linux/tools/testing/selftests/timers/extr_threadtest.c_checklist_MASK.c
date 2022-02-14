
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct timespec *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 struct timespec *VAR_6, *VAR_7;


 for (VAR_4 = 0; VAR_4 < VAR_3-1; VAR_4++) {
  VAR_6 = &VAR_2[VAR_4];
  VAR_7 = &VAR_2[VAR_4+1];


  if ((VAR_7->tv_sec <= VAR_6->tv_sec) &&
   (VAR_7->tv_nsec < VAR_6->tv_nsec)) {


   VAR_0 = 1;


   FUNC_1(&VAR_1);


   FUNC_0("\n");
   for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
    if (VAR_5 == VAR_4)
     FUNC_0("---------------\n");
    FUNC_0("%lu:%lu\n", VAR_2[VAR_5].tv_sec, VAR_2[VAR_5].tv_nsec);
    if (VAR_5 == VAR_4+1)
     FUNC_0("---------------\n");
   }
   FUNC_0("[FAILED]\n");

   FUNC_2(&VAR_1);
  }
 }
}
