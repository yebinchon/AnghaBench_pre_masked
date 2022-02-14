
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int pdfapp_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,char*,int,int *,int) ;
 int VAR_2 ;
 int FUNC_2 (int *,char*) ;

void FUNC_3(pdfapp_t *VAR_3, char *VAR_4, char *VAR_5)
{
 wchar_t VAR_6[VAR_2];
 wchar_t VAR_7[VAR_2];

 int VAR_8 = FUNC_1(VAR_0, 0, VAR_4, -1, VAR_6, VAR_2);
 if (VAR_8 == 0)
 {
  FUNC_2(VAR_3, "cannot convert filename to Unicode");
  return;
 }

 VAR_8 = FUNC_1(VAR_0, 0, VAR_5, -1, VAR_7, VAR_2);
 if (VAR_8 == 0)
 {
  FUNC_2(VAR_3, "cannot convert filename to Unicode");
  return;
 }

 FUNC_0(VAR_6, VAR_7, VAR_1);
}
