
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {double tv_sec; int tv_nsec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,struct timespec*) ;
 unsigned long VAR_8 ;
 char* FUNC_2 (int *,int ,int,int,int,int ) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (char*,double) ;

int FUNC_5(void)
{
 struct timespec VAR_10, VAR_11;
 unsigned long VAR_12 = VAR_8;

 FUNC_1(VAR_1, &VAR_10);

 while (VAR_12--) {
  char *VAR_13 = FUNC_2(((void*)0), VAR_5, VAR_6|VAR_7,
          VAR_4|VAR_2, -1, 0);
  FUNC_0(VAR_13 == VAR_3);
  if (VAR_9) {
   int VAR_14;
   for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++)
    VAR_13[VAR_14 << 16] = 'c';
  }
  FUNC_3(VAR_13, VAR_5);
 }

 FUNC_1(VAR_1, &VAR_11);

 FUNC_4("time = %.6f\n", VAR_11.tv_sec - VAR_10.tv_sec + (VAR_11.tv_nsec - VAR_10.tv_nsec) / 1e9);

 return 0;
}
