
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {double tv_sec; int tv_nsec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (char*,int,double) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(char *VAR_2)
{
 struct timespec VAR_3, VAR_4;
 int VAR_5;

 FUNC_0(VAR_0, &VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_2(VAR_2);

 FUNC_0(VAR_0, &VAR_4);

 FUNC_1("len %3.3d : time = %.6f\n", FUNC_2(VAR_2), VAR_4.tv_sec - VAR_3.tv_sec + (VAR_4.tv_nsec - VAR_3.tv_nsec) / 1e9);
}
