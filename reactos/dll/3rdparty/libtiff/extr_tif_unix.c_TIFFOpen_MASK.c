
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TIFF ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,char*,char const*,...) ;
 int * FUNC_1 (int,char const*,char const*) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char const*,int,int) ;
 int * FUNC_5 (scalar_t__) ;

TIFF*
FUNC_6(const char* VAR_2, const char* VAR_3)
{
 static const char VAR_4[] = "TIFFOpen";
 int VAR_5, VAR_6;
 TIFF* VAR_7;

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5 == -1)
  return ((TIFF*)0);






 VAR_6 = FUNC_4(VAR_2, VAR_5, 0666);
 if (VAR_6 < 0) {
  if (VAR_1 > 0 && FUNC_5(VAR_1) != ((void*)0) ) {
   FUNC_0(0, VAR_4, "%s: %s", VAR_2, FUNC_5(VAR_1) );
  } else {
   FUNC_0(0, VAR_4, "%s: Cannot open", VAR_2);
  }
  return ((TIFF *)0);
 }

 VAR_7 = FUNC_1((int)VAR_6, VAR_2, VAR_3);
 if(!VAR_7)
  FUNC_3(VAR_6);
 return VAR_7;
}
