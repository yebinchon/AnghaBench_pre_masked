
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct timespec {long tv_sec; scalar_t__ tv_nsec; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 int FUNC_0 (int,struct timespec*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct timespec,struct timespec) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ) ;

int FUNC_6(int VAR_2, unsigned long VAR_3)
{
 struct timespec VAR_4[VAR_0];
 int VAR_5, VAR_6;
 long VAR_7, VAR_8;
 time_t VAR_9;
 char *VAR_10;

 FUNC_0(VAR_2, &VAR_4[0]);
 VAR_7 = VAR_8 = VAR_4[0].tv_sec;


 VAR_9 = FUNC_5(0);
 VAR_10 = FUNC_1(&VAR_9);

 while (VAR_3 == -1 || VAR_7 - VAR_8 < VAR_3) {
  VAR_6 = -1;


  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   FUNC_0(VAR_2, &VAR_4[VAR_5]);


  for (VAR_5 = 0; VAR_5 < VAR_0 - 1; VAR_5++)
   if (!FUNC_3(VAR_4[VAR_5], VAR_4[VAR_5+1]))
    VAR_6 = VAR_5;


  if (VAR_6 >= 0) {
   unsigned long long VAR_11;

   FUNC_4("\%s\n", VAR_10);
   for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
    if (VAR_5 == VAR_6)
     FUNC_4("--------------------\n");
    FUNC_4("%lu:%lu\n", VAR_4[VAR_5].tv_sec,
       VAR_4[VAR_5].tv_nsec);
    if (VAR_5 == VAR_6 + 1)
     FUNC_4("--------------------\n");
   }
   VAR_11 = VAR_4[VAR_6].tv_sec * VAR_1;
   VAR_11 += VAR_4[VAR_6].tv_nsec;
   VAR_11 -= VAR_4[VAR_6+1].tv_sec * VAR_1;
   VAR_11 -= VAR_4[VAR_6+1].tv_nsec;
   FUNC_4("Delta: %llu ns\n", VAR_11);
   FUNC_2(0);

   VAR_9 = FUNC_5(0);
   FUNC_4("%s\n", FUNC_1(&VAR_9));
   FUNC_4("[FAILED]\n");
   return -1;
  }
  VAR_7 = VAR_4[0].tv_sec;
 }
 FUNC_4("[OK]\n");
 return 0;
}
