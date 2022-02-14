
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(void)
{
 pdf_obj *VAR_3;
 int VAR_4, VAR_5 = FUNC_1(VAR_0, VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4)
 {
  VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_4);
  FUNC_0(VAR_0, VAR_2, "page %d = %d 0 R\n", VAR_4 + 1, FUNC_3(VAR_0, VAR_3));
 }
}
