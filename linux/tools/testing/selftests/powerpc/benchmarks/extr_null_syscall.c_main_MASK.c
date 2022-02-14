
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {unsigned long long tv_sec; unsigned long long tv_nsec; } ;


 int VAR_0 ;
 float VAR_1 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (float) ;
 int FUNC_2 () ;
 unsigned long FUNC_3 () ;
 int FUNC_4 (char*,float,float) ;
 float VAR_2 ;

int FUNC_5(void)
{
 unsigned long VAR_3, VAR_4;
 struct timespec VAR_5, VAR_6;
 unsigned long long VAR_7, VAR_8;

 FUNC_2();

 FUNC_0(VAR_0, &VAR_5);
 VAR_3 = FUNC_3();

 FUNC_1(VAR_1);

 FUNC_0(VAR_0, &VAR_6);
 VAR_4 = FUNC_3();

 VAR_7 = (VAR_6.tv_sec - VAR_5.tv_sec) * 1000000000ULL +
   (VAR_6.tv_nsec - VAR_5.tv_nsec);
 VAR_8 = VAR_4 - VAR_3;

 FUNC_4("%10.2f ns %10.2f cycles\n", (float)VAR_7 / VAR_1,
   (float)VAR_8 * VAR_2 / VAR_1);

 return 0;
}
