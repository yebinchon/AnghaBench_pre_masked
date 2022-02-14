
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_token ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static pdf_token
FUNC_2(char *VAR_13)
{
 switch (*VAR_13)
 {
 case 'R':
  if (!FUNC_1(VAR_13, "R")) return VAR_7;
  break;
 case 't':
  if (!FUNC_1(VAR_13, "true")) return VAR_11;
  if (!FUNC_1(VAR_13, "trailer")) return VAR_10;
  break;
 case 'f':
  if (!FUNC_1(VAR_13, "false")) return VAR_3;
  break;
 case 'n':
  if (!FUNC_1(VAR_13, "null")) return VAR_5;
  break;
 case 'o':
  if (!FUNC_1(VAR_13, "obj")) return VAR_6;
  break;
 case 'e':
  if (!FUNC_1(VAR_13, "endobj")) return VAR_0;
  if (!FUNC_1(VAR_13, "endstream")) return VAR_1;
  break;
 case 's':
  if (!FUNC_1(VAR_13, "stream")) return VAR_9;
  if (!FUNC_1(VAR_13, "startxref")) return VAR_8;
  break;
 case 'x':
  if (!FUNC_1(VAR_13, "xref")) return VAR_12;
  break;
 }

 while (*VAR_13)
 {
  if (!FUNC_0(*VAR_13))
   return VAR_2;
  ++VAR_13;
 }

 return VAR_4;
}
