
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {long long tv_sec; long long tv_nsec; } ;


 long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,struct timespec*) ;
 scalar_t__ FUNC_1 (int,int ,struct timespec*,int *) ;
 int FUNC_2 (char*,long long) ;
 struct timespec FUNC_3 (struct timespec,long long) ;
 long long FUNC_4 (struct timespec,struct timespec) ;

int FUNC_5(int VAR_4, long long VAR_5)
{
 struct timespec VAR_6, VAR_7, VAR_8;
 long long VAR_9 = 0;
 int VAR_10, VAR_11;

 VAR_8.tv_sec = VAR_5/VAR_0;
 VAR_8.tv_nsec = VAR_5%VAR_0;

 if (FUNC_0(VAR_4, &VAR_6))
  return VAR_3;
 if (FUNC_1(VAR_4, 0, &VAR_8, ((void*)0)))
  return VAR_3;

 VAR_11 = 10;


 FUNC_0(VAR_4, &VAR_6);
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
  FUNC_1(VAR_4, 0, &VAR_8, ((void*)0));
 FUNC_0(VAR_4, &VAR_7);

 if (((FUNC_4(VAR_6, VAR_7)/VAR_11)-VAR_5) > VAR_2) {
  FUNC_2("Large rel latency: %lld ns :", (FUNC_4(VAR_6, VAR_7)/VAR_11)-VAR_5);
  return -1;
 }


 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  FUNC_0(VAR_4, &VAR_6);
  VAR_8 = FUNC_3(VAR_6, VAR_5);
  FUNC_1(VAR_4, VAR_1, &VAR_8, ((void*)0));
  FUNC_0(VAR_4, &VAR_7);
  VAR_9 += FUNC_4(VAR_8, VAR_7);
 }

 if (VAR_9/VAR_11 > VAR_2) {
  FUNC_2("Large abs latency: %lld ns :", VAR_9/VAR_11);
  return -1;
 }

 return 0;
}
