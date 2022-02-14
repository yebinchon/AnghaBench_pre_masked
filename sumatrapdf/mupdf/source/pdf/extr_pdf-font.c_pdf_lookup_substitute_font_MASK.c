
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;


 unsigned char const* FUNC_0 (int *,char*,int*) ;

const unsigned char *
FUNC_1(fz_context *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int *VAR_5)
{
 if (VAR_1) {
  if (VAR_3) {
   if (VAR_4) return FUNC_0(VAR_0, "Courier-BoldOblique", VAR_5);
   else return FUNC_0(VAR_0, "Courier-Bold", VAR_5);
  } else {
   if (VAR_4) return FUNC_0(VAR_0, "Courier-Oblique", VAR_5);
   else return FUNC_0(VAR_0, "Courier", VAR_5);
  }
 } else if (VAR_2) {
  if (VAR_3) {
   if (VAR_4) return FUNC_0(VAR_0, "Times-BoldItalic", VAR_5);
   else return FUNC_0(VAR_0, "Times-Bold", VAR_5);
  } else {
   if (VAR_4) return FUNC_0(VAR_0, "Times-Italic", VAR_5);
   else return FUNC_0(VAR_0, "Times-Roman", VAR_5);
  }
 } else {
  if (VAR_3) {
   if (VAR_4) return FUNC_0(VAR_0, "Helvetica-BoldOblique", VAR_5);
   else return FUNC_0(VAR_0, "Helvetica-Bold", VAR_5);
  } else {
   if (VAR_4) return FUNC_0(VAR_0, "Helvetica-Oblique", VAR_5);
   else return FUNC_0(VAR_0, "Helvetica", VAR_5);
  }
 }
}
