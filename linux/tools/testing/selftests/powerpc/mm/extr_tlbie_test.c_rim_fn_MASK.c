
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ chunk_start ;


 int VAR_0 ;
 char* FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int*,unsigned int) ;
 int VAR_1 ;
 int FUNC_2 (unsigned int volatile*) ;
 int FUNC_3 () ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (unsigned int,unsigned int*,unsigned int,unsigned int) ;

__attribute__((used)) static void *FUNC_5(void *VAR_3)
{
 unsigned int VAR_4 = *((unsigned int *)VAR_3);

 int VAR_5 = VAR_0;
 char *VAR_6 = FUNC_0(VAR_4);

 unsigned int VAR_7;
 unsigned int VAR_8 = 0;


 unsigned int VAR_9 = VAR_8;
 unsigned int *VAR_10 = &VAR_9;
 unsigned int *VAR_11, VAR_12;

 FUNC_3();
 for (VAR_11 = (unsigned int *)VAR_6;
      (unsigned long)VAR_11 < (unsigned long)(VAR_6) + VAR_5;
      VAR_11++) {

  *VAR_10 = FUNC_1(VAR_4, VAR_11, VAR_8);
  *VAR_11 = *VAR_10;
 }

 while (!VAR_1 && !VAR_2) {
  VAR_7 = VAR_8;
  VAR_8 = VAR_8 + 1;

  for (VAR_11 = (unsigned int *)VAR_6;
       (unsigned long)VAR_11 < (unsigned long)(VAR_6) + VAR_5;
       VAR_11++) {
   unsigned int VAR_13;






   VAR_13 = FUNC_1(VAR_4, VAR_11, VAR_7);





   FUNC_2((volatile unsigned int*)VAR_11);


   VAR_12 = *VAR_11;





   if (VAR_12 != VAR_13) {

    VAR_1 = 1;
   }





   if (VAR_1 || VAR_2) {
    FUNC_4(VAR_4, VAR_11, VAR_8, VAR_7);

    return 0;
   }





   *VAR_10 = FUNC_1(VAR_4, VAR_11, VAR_8);





   *VAR_11 = *VAR_10;
  }
 }

 return ((void*)0);
}
