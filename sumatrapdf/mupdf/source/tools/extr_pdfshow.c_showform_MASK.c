
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 pdf_obj *VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = FUNC_2(VAR_0, FUNC_3(VAR_0, VAR_1), "Root/AcroForm/Fields");
 VAR_4 = FUNC_1(VAR_0, VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3)
  FUNC_4(FUNC_0(VAR_0, VAR_2, VAR_3));
}
