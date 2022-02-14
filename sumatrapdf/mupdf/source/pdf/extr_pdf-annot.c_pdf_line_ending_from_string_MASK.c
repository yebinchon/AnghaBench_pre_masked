
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;
typedef enum pdf_line_ending { ____Placeholder_pdf_line_ending } pdf_line_ending ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char const*,char*) ;

enum pdf_line_ending FUNC_1(fz_context *VAR_10, const char *VAR_11)
{
 if (!FUNC_0(VAR_11, "None")) return VAR_4;
 else if (!FUNC_0(VAR_11, "Square")) return VAR_9;
 else if (!FUNC_0(VAR_11, "Circle")) return VAR_1;
 else if (!FUNC_0(VAR_11, "Diamond")) return VAR_3;
 else if (!FUNC_0(VAR_11, "OpenArrow")) return VAR_5;
 else if (!FUNC_0(VAR_11, "ClosedArrow")) return VAR_2;
 else if (!FUNC_0(VAR_11, "Butt")) return VAR_0;
 else if (!FUNC_0(VAR_11, "ROpenArrow")) return VAR_7;
 else if (!FUNC_0(VAR_11, "RClosedArrow")) return VAR_6;
 else if (!FUNC_0(VAR_11, "Slash")) return VAR_8;
 else return VAR_4;
}
