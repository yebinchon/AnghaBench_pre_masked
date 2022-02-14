
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ArrayType ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int FUNC_5 (int *,int) ;
 int * FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,int) ;

ArrayType *
FUNC_8(ArrayType *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4;


 if (VAR_2 <= 0)
 {
  FUNC_4(VAR_2 == 0);
  VAR_1 = FUNC_6(VAR_0);
  return VAR_1;
 }

 if (VAR_2 == FUNC_0(VAR_1))
  return VAR_1;

 VAR_3 = FUNC_1(VAR_1) + sizeof(int) * VAR_2;

 VAR_1 = (ArrayType *) FUNC_7(VAR_1, VAR_3);

 FUNC_5(VAR_1, VAR_3);

 for (VAR_4 = 0; VAR_4 < FUNC_3(VAR_1); VAR_4++)
 {
  FUNC_2(VAR_1)[VAR_4] = VAR_2;
  VAR_2 = 1;
 }
 return VAR_1;
}
