
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 long VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char**,int ,int ,int *) ;
 int FUNC_5 () ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 long VAR_12 ;
 int FUNC_6 (int *,int *,int ,char*) ;
 int FUNC_7 (int ,void**) ;
 int VAR_13 ;
 long VAR_14 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_11 (char*,char**,int ) ;

int FUNC_12(int VAR_17, char **VAR_18)
{
 int VAR_19;
 pthread_t VAR_20, VAR_21;
 void *VAR_22;
 char *VAR_23 = ((void*)0);
 char *VAR_24 = ((void*)0);
 char *VAR_25;
 long int VAR_26;

 VAR_6 = FUNC_2(0, 0);
 FUNC_1(VAR_6 >= 0);
 VAR_2 = FUNC_2(0, 0);
 FUNC_1(VAR_2 >= 0);

 for (;;) {
  int VAR_27 = FUNC_4(VAR_17, VAR_18, VAR_11, VAR_7, ((void*)0));
  switch (VAR_27) {
  case -1:
   goto done;
  case '?':
   FUNC_5();
   FUNC_3(2);
  case 'H':
   VAR_23 = VAR_9;
   break;
  case 'G':
   VAR_24 = VAR_9;
   break;
  case 'R':
   VAR_13 = FUNC_11(VAR_9, &VAR_25, 0);
   FUNC_1(VAR_13 && !(VAR_13 & (VAR_13 - 1)));
   FUNC_1(!*VAR_25);
   break;
  case 'C':
   VAR_26 = FUNC_11(VAR_9, &VAR_25, 0);
   FUNC_1(!*VAR_25);
   FUNC_1(VAR_26 > 0 && VAR_26 < VAR_0);
   VAR_14 = VAR_26;
   break;
  case 'o':
   VAR_26 = FUNC_11(VAR_9, &VAR_25, 0);
   FUNC_1(!*VAR_25);
   FUNC_1(VAR_26 > 0 && VAR_26 < VAR_0);
   VAR_8 = VAR_26;
   break;
  case 'p':
   VAR_26 = FUNC_11(VAR_9, &VAR_25, 0);
   FUNC_1(!*VAR_25);
   FUNC_1(VAR_26 > 0 && VAR_26 < VAR_0);
   VAR_12 = VAR_26;
   break;
  case 'b':
   VAR_26 = FUNC_11(VAR_9, &VAR_25, 0);
   FUNC_1(!*VAR_25);
   FUNC_1(VAR_26 > 0 && VAR_26 < VAR_0);
   VAR_1 = VAR_26;
   break;
  case 's':
   VAR_5 = 1;
   break;
  case 'x':
   VAR_4 = 1;
   break;
  case 'e':
   VAR_3 = 1;
   break;
  default:
   FUNC_5();
   FUNC_3(4);
   break;
  }
 }


 FUNC_8();
 FUNC_10();
 FUNC_9();
done:

 if (VAR_1 > VAR_8)
  VAR_1 = VAR_8;

 if (VAR_10 < VAR_17) {
  FUNC_5();
  FUNC_3(4);
 }
 FUNC_0();

 VAR_19 = FUNC_6(&VAR_20, ((void*)0), VAR_16, VAR_23);
 FUNC_1(!VAR_19);
 VAR_19 = FUNC_6(&VAR_21, ((void*)0), VAR_15, VAR_24);
 FUNC_1(!VAR_19);

 VAR_19 = FUNC_7(VAR_21, &VAR_22);
 FUNC_1(!VAR_19);
 VAR_19 = FUNC_7(VAR_20, &VAR_22);
 FUNC_1(!VAR_19);
 return 0;
}
