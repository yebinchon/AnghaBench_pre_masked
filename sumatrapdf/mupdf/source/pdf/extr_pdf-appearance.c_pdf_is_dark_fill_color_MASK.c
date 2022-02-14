
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_annot ;
typedef int fz_context ;


 int FUNC_0 (float,int) ;
 int FUNC_1 (int *,int *,int*,float*) ;

__attribute__((used)) static int FUNC_2(fz_context *VAR_0, pdf_annot *VAR_1)
{
 float VAR_2[4], VAR_3;
 int VAR_4;
 FUNC_1(VAR_0, VAR_1, &VAR_4, VAR_2);
 switch (VAR_4)
 {
 default:
  VAR_3 = 1;
  break;
 case 1:
  VAR_3 = VAR_2[0];
  break;
 case 3:
  VAR_3 = VAR_2[0] * 0.3f + VAR_2[1] * 0.59f + VAR_2[2] * 0.11f;
  break;
 case 4:
  VAR_3 = VAR_2[0] * 0.3f + VAR_2[1] * 0.59f + VAR_2[2] * 0.11f + VAR_2[3];
  VAR_3 = 1 - FUNC_0(VAR_3, 1);
  break;
 }
 return VAR_3 < 0.25f;
}
