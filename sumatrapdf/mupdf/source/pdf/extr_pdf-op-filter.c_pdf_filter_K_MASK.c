
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_processor ;
typedef int fz_context ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,char*,int ) ;
 int FUNC_2 (int *,int *,int,float*) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, pdf_processor *VAR_1, float VAR_2, float VAR_3, float VAR_4, float VAR_5)
{
 float VAR_6[4] = { VAR_2, VAR_3, VAR_4, VAR_5 };
 FUNC_1(VAR_0, VAR_1, "DeviceCMYK", FUNC_0(VAR_0));
 FUNC_2(VAR_0, VAR_1, 4, VAR_6);
}
