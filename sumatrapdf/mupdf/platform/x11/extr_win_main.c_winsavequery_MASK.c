
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdfapp_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ,char*,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_1(pdfapp_t *VAR_5)
{
 switch(FUNC_0(VAR_4, "File has unsaved changes. Do you want to save", "MuPDF", VAR_2))
 {
 case 128: return VAR_3;
 case 129: return VAR_1;
 default: return VAR_0;
 }
}
