
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_image ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int ,char*) ;
 int * FUNC_3 (int ,int ,int *) ;
 int * FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,int *,int ,int *) ;
 int FUNC_6 (int ,int *,char*,int *) ;
 int FUNC_7 (int ,int *) ;
 int * FUNC_8 (int ,int ,int) ;

__attribute__((used)) static void FUNC_9(pdf_obj *VAR_3, char *VAR_4, char *VAR_5)
{
 fz_image *VAR_6;
 pdf_obj *VAR_7, *VAR_8;

 VAR_6 = FUNC_2(VAR_1, VAR_5);

 VAR_7 = FUNC_4(VAR_1, VAR_3, FUNC_0(VAR_0));
 if (!VAR_7)
 {
  VAR_7 = FUNC_8(VAR_1, VAR_2, 10);
  FUNC_5(VAR_1, VAR_3, FUNC_0(VAR_0), VAR_7);
 }

 VAR_8 = FUNC_3(VAR_1, VAR_2, VAR_6);
 FUNC_6(VAR_1, VAR_7, VAR_4, VAR_8);
 FUNC_7(VAR_1, VAR_8);

 FUNC_1(VAR_1, VAR_6);
}
