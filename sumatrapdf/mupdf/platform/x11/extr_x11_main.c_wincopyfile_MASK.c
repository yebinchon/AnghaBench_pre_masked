
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdfapp_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 size_t FUNC_3 (char*,int,int,int *) ;
 int FUNC_4 (char*,int,size_t,int *) ;
 int FUNC_5 (int *,char*) ;

void FUNC_6(pdfapp_t *VAR_0, char *VAR_1, char *VAR_2)
{
 FILE *VAR_3, *VAR_4;
 char VAR_5[32 << 10];
 size_t VAR_6;

 VAR_3 = FUNC_2(VAR_1, "rb");
 if (!VAR_3)
 {
  FUNC_5(VAR_0, "cannot open source file for copying");
  return;
 }
 VAR_4 = FUNC_2(VAR_2, "wb");
 if (!VAR_4)
 {
  FUNC_5(VAR_0, "cannot open target file for copying");
  FUNC_0(VAR_3);
  return;
 }

 for (;;)
 {
  VAR_6 = FUNC_3(VAR_5, 1, sizeof VAR_5, VAR_3);
  FUNC_4(VAR_5, 1, VAR_6, VAR_4);
  if (VAR_6 < sizeof VAR_5)
  {
   if (FUNC_1(VAR_3))
    FUNC_5(VAR_0, "cannot read data from source file");
   break;
  }
 }

 FUNC_0(VAR_4);
 FUNC_0(VAR_3);
}
