
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_annot ;
typedef int fz_context ;
typedef int fz_buffer ;


 int FUNC_0 (int *,int *,char*,float) ;
 float FUNC_1 (int *,int *) ;

__attribute__((used)) static float FUNC_2(fz_context *VAR_0, pdf_annot *VAR_1, fz_buffer *VAR_2)
{
 float VAR_3 = FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_0, VAR_2, "%g w\n", VAR_3);
 return VAR_3;
}
