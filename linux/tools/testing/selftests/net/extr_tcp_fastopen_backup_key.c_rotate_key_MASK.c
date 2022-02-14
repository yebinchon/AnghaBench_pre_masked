
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static void FUNC_5(int VAR_2)
{
 static int VAR_3;
 static uint32_t VAR_4[4];
 uint32_t VAR_5[8];
 uint32_t VAR_6[4];
 int VAR_7;

 if (VAR_3 < VAR_1) {

  if (VAR_3 == 0) {
   for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4); VAR_7++)
    VAR_4[VAR_7] = FUNC_3();
  }
  FUNC_1(VAR_2, VAR_5);
  FUNC_2(VAR_5 + 4, VAR_4, VAR_0);
  FUNC_4(VAR_2, VAR_5);
 } else {

  FUNC_1(VAR_2, VAR_5);
  FUNC_2(VAR_6, VAR_5 + 4, VAR_0);
  FUNC_2(VAR_5 + 4, VAR_5, VAR_0);
  FUNC_2(VAR_5, VAR_6, VAR_0);
  FUNC_4(VAR_2, VAR_5);
 }
 if (++VAR_3 >= (VAR_1 * 2))
  VAR_3 = 0;
}
