
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_annot ;
typedef int fz_context ;
typedef int fz_buffer ;


 int FUNC_0 (int *,int *,char*,float,...) ;
 int FUNC_1 (int *,int *,int*,float*) ;

__attribute__((used)) static int FUNC_2(fz_context *VAR_0, pdf_annot *VAR_1, fz_buffer *VAR_2)
{
 float VAR_3[4];
 int VAR_4;
 FUNC_1(VAR_0, VAR_1, &VAR_4, VAR_3);
 switch (VAR_4)
 {
 default: return 0;
 case 1: FUNC_0(VAR_0, VAR_2, "%g G\n", VAR_3[0]); break;
 case 3: FUNC_0(VAR_0, VAR_2, "%g %g %g RG\n", VAR_3[0], VAR_3[1], VAR_3[2]); break;
 case 4: FUNC_0(VAR_0, VAR_2, "%g %g %g %g K\n", VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3]); break;
 }
 return 1;
}
