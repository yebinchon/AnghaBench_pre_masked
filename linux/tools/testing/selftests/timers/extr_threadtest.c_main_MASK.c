
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int pthread_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char**,char*) ;
 void* FUNC_3 (void*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__*) ;
 int VAR_4 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int *,int ,void* (*) (void*),int ) ;
 int FUNC_9 (int ,void**) ;
 int FUNC_10 (int ,int *) ;
 void* FUNC_11 (void*) ;
 int FUNC_12 (int) ;
 int VAR_5 ;
 int FUNC_13 (char*,int,char*,int ) ;
 scalar_t__ FUNC_14 (scalar_t__*) ;

int FUNC_15(int VAR_6, char **VAR_7)
{
 int VAR_8, VAR_9;
 time_t VAR_10, VAR_11, VAR_12;
 char VAR_13[255];
 pthread_t VAR_14[VAR_2];
 int VAR_15;
 void *VAR_16;
 int VAR_17 = 0;
 void *(*VAR_18)(void *) = FUNC_11;

 VAR_8 = VAR_1;
 VAR_12 = VAR_0;


 while ((VAR_15 = FUNC_2(VAR_6, VAR_7, "t:n:i")) != -1) {
  switch (VAR_15) {
  case 't':
   VAR_12 = FUNC_0(VAR_4);
   break;
  case 'n':
   VAR_8 = FUNC_0(VAR_4);
   break;
  case 'i':
   VAR_18 = FUNC_3;
   FUNC_7("using independent threads\n");
   break;
  default:
   FUNC_7("Usage: %s [-t <secs>] [-n <numthreads>] [-i]\n", VAR_7[0]);
   FUNC_7("	-t: time to run\n");
   FUNC_7("	-n: number of threads\n");
   FUNC_7("	-i: use independent threads\n");
   return -1;
  }
 }

 if (VAR_8 > VAR_2)
  VAR_8 = VAR_2;


 FUNC_10(VAR_5, ((void*)0));

 VAR_10 = FUNC_14(0);
 FUNC_13(VAR_13, 255, "%a, %d %b %Y %T %z", FUNC_6(&VAR_10));
 FUNC_7("%s\n", VAR_13);
 FUNC_7("Testing consistency with %i threads for %ld seconds: ", VAR_8, VAR_12);
 FUNC_1(VAR_5);


 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
  FUNC_8(&VAR_14[VAR_9], 0, VAR_18, 0);

 while (FUNC_14(&VAR_11) < VAR_10 + VAR_12) {
  FUNC_12(1);
  if (VAR_3) {
   VAR_17 = 1;
   FUNC_13(VAR_13, 255, "%a, %d %b %Y %T %z", FUNC_6(&VAR_11));
   FUNC_7("%s\n", VAR_13);
   goto out;
  }
 }
 FUNC_7("[OK]\n");
 VAR_3 = 1;

out:

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
  FUNC_9(VAR_14[VAR_9], &VAR_16);


 if (VAR_17)
  FUNC_4();
 return FUNC_5();
}
