
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 char* FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int*,unsigned int) ;
 int FUNC_2 (unsigned int volatile*) ;
 int FUNC_3 (unsigned int,int) ;
 int FUNC_4 (unsigned int,unsigned int*,unsigned int,unsigned int) ;
 int FUNC_5 (unsigned int,unsigned int*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_1, unsigned int *VAR_2,
    unsigned int VAR_3,
    unsigned int VAR_4)
{
 unsigned int *VAR_5;
 unsigned int VAR_6 = VAR_0;
 unsigned int VAR_7;
 unsigned int VAR_8;
 char *VAR_9 = FUNC_0(VAR_1);

 int VAR_10 = 0;

 FUNC_5(VAR_1, VAR_2,
          VAR_3, VAR_4);

 for (VAR_5 = (unsigned int *)VAR_9;
      (unsigned long)VAR_5 < (unsigned long)VAR_9 + VAR_6;
      VAR_5++) {
  unsigned int VAR_11;

  if (VAR_5 < VAR_2) {
   VAR_11 = VAR_3;
  } else {
   VAR_11 = VAR_4;
  }

  VAR_7 = FUNC_1(VAR_1, VAR_5, VAR_11);

  FUNC_2((volatile unsigned int*)VAR_5);
  VAR_8 = *VAR_5;

         if (VAR_8 != VAR_7) {
   VAR_10++;
   FUNC_4(VAR_1, VAR_5, VAR_7, VAR_8);
  }
 }

 FUNC_3(VAR_1, VAR_10);
}
