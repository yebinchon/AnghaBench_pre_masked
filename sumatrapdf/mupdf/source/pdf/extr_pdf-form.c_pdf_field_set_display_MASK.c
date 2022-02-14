
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int *,int ,int *) ;
 int * FUNC_6 (int *,int) ;

void FUNC_7(fz_context *VAR_5, pdf_obj *VAR_6, int VAR_7)
{
 pdf_obj *VAR_8 = FUNC_3(VAR_5, VAR_6, FUNC_0(VAR_1));

 if (!VAR_8)
 {
  int VAR_9 = (VAR_2|VAR_4|VAR_3);
  int VAR_10 = FUNC_4(VAR_5, VAR_6, FUNC_0(VAR_0)) & ~VAR_9;
  pdf_obj *VAR_11;

  switch (VAR_7)
  {
  case 128:
   VAR_10 |= VAR_4;
   break;
  case 131:
   VAR_10 |= VAR_2;
   break;
  case 129:
   VAR_10 |= (VAR_4|VAR_3);
   break;
  case 130:
   break;
  }

  VAR_11 = FUNC_6(VAR_5, VAR_10);
  FUNC_5(VAR_5, VAR_6, FUNC_0(VAR_0), VAR_11);
 }
 else
 {
  int VAR_12, VAR_13 = FUNC_2(VAR_5, VAR_8);

  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
   FUNC_7(VAR_5, FUNC_1(VAR_5, VAR_8, VAR_12), VAR_7);
 }
}
