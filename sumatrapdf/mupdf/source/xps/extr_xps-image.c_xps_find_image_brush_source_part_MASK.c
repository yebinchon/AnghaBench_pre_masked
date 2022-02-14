
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xps_part ;
typedef int xps_document ;
typedef int fz_xml ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int *,int ,char*) ;
 char* FUNC_2 (int *,char*) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char*,char*) ;
 int * FUNC_5 (int *,int *,char*) ;
 int FUNC_6 (int *,int *,char*,char*,char*,int) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_1, xps_document *VAR_2, char *VAR_3, fz_xml *VAR_4, xps_part **VAR_5, xps_part **VAR_6)
{
 char *VAR_7;
 char VAR_8[1024];
 char VAR_9[1024];
 char *VAR_10;
 char *VAR_11;
 char *VAR_12;

 VAR_7 = FUNC_2(VAR_4, "ImageSource");
 if (!VAR_7)
  FUNC_1(VAR_1, VAR_0, "cannot find image source attribute");


 if (FUNC_4(VAR_7, "{ColorConvertedBitmap") == VAR_7)
 {
  VAR_10 = ((void*)0);
  VAR_11 = ((void*)0);

  FUNC_0(VAR_8, VAR_7, sizeof VAR_8);
  VAR_12 = FUNC_3(VAR_8, ' ');
  if (VAR_12)
  {
   VAR_10 = VAR_12 + 1;
   VAR_12 = FUNC_3(VAR_12 + 1, ' ');
   if (VAR_12)
   {
    *VAR_12 = 0;
    VAR_11 = VAR_12 + 1;
    VAR_12 = FUNC_3(VAR_12 + 1, '}');
    if (VAR_12)
     *VAR_12 = 0;
   }
  }
 }
 else
 {
  VAR_10 = VAR_7;
  VAR_11 = ((void*)0);
 }

 if (!VAR_10)
  FUNC_1(VAR_1, VAR_0, "cannot find image source");

 if (VAR_5)
 {
  FUNC_6(VAR_1, VAR_2, VAR_9, VAR_3, VAR_10, sizeof VAR_9);
  *VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_9);
 }

 if (VAR_6)
 {
  if (VAR_11)
  {
   FUNC_6(VAR_1, VAR_2, VAR_9, VAR_3, VAR_11, sizeof VAR_9);
   *VAR_6 = FUNC_5(VAR_1, VAR_2, VAR_9);
  }
  else
   *VAR_6 = ((void*)0);
 }
}
