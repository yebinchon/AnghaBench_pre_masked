
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 float FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int *,int ,char*,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,char const*,char const**,float*,float*) ;
 int FUNC_8 (int *,char*,int,char const*,float,float*) ;
 char* FUNC_9 (int *,int ) ;
 int FUNC_10 (char*) ;

void FUNC_11(fz_context *VAR_1, pdf_obj *VAR_2, pdf_obj *VAR_3)
{
 char VAR_4[100];
 const char *VAR_5;
 float VAR_6, VAR_7[3], VAR_8;
 const char *VAR_9 = FUNC_9(VAR_1, FUNC_4(VAR_1, VAR_2, FUNC_0(VAR_0)));

 FUNC_7(VAR_1, VAR_9, &VAR_5, &VAR_6, VAR_7);

 switch (FUNC_3(VAR_1, VAR_3))
 {
 default:
  VAR_7[0] = VAR_7[1] = VAR_7[2] = 0;
  break;
 case 1:
  VAR_7[0] = VAR_7[1] = VAR_7[2] = FUNC_2(VAR_1, VAR_3, 0);
  break;
 case 3:
  VAR_7[0] = FUNC_2(VAR_1, VAR_3, 0);
  VAR_7[1] = FUNC_2(VAR_1, VAR_3, 1);
  VAR_7[2] = FUNC_2(VAR_1, VAR_3, 2);
  break;
 case 4:
  VAR_8 = FUNC_2(VAR_1, VAR_3, 3);
  VAR_7[0] = 1 - FUNC_1(1, FUNC_2(VAR_1, VAR_3, 0) + VAR_8);
  VAR_7[1] = 1 - FUNC_1(1, FUNC_2(VAR_1, VAR_3, 1) + VAR_8);
  VAR_7[2] = 1 - FUNC_1(1, FUNC_2(VAR_1, VAR_3, 2) + VAR_8);
  break;
 }

 FUNC_8(VAR_1, VAR_4, sizeof VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_5(VAR_1, VAR_2, FUNC_0(VAR_0), VAR_4, FUNC_10(VAR_4));
 FUNC_6(VAR_1, VAR_2);
}
