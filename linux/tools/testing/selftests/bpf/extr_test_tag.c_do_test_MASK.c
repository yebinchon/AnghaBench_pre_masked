
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int ftag ;
typedef int atag ;


 int VAR_0 ;
 int FUNC_0 (int,int,void (*) (unsigned int,int)) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int,int *,int *,int) ;
 int FUNC_5 (int,int *,int) ;
 int FUNC_6 (int,int *,int) ;

__attribute__((used)) static void FUNC_7(uint32_t *VAR_1, int VAR_2, int VAR_3,
      void (*VAR_4)(unsigned int VAR_5, int VAR_6))
{
 int VAR_7, VAR_8;

 for (VAR_7 = VAR_2; VAR_7 <= VAR_0; VAR_7++) {
  uint8_t VAR_9[8], VAR_10[sizeof(VAR_9)];

  VAR_8 = FUNC_0(VAR_7, VAR_3, VAR_4);
  FUNC_6(VAR_8, VAR_9, sizeof(VAR_9));
  FUNC_5(VAR_7, VAR_10, sizeof(VAR_10));
  if (FUNC_2(VAR_9, VAR_10, sizeof(VAR_9)))
   FUNC_4(VAR_7, VAR_3, VAR_9, VAR_10, sizeof(VAR_9));

  FUNC_1(VAR_8);
  FUNC_3();
  (*VAR_1)++;
 }
}
