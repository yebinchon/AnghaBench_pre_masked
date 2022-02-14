
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (int) ;
 int * FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,char*,int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;

FUNC_5()
{
 int VAR_2;
 char VAR_3[128],
    VAR_4[128];
 char VAR_5[4096];
 int VAR_6,
    VAR_7;

 for (VAR_2 = 0; VAR_2 < 128; VAR_2++)
  VAR_3[VAR_2] = VAR_4[VAR_2] = 0;

 while (FUNC_1(VAR_5, sizeof(VAR_5), VAR_1) != ((void*)0))
 {
  if (*VAR_5 == '#')
   continue;
  FUNC_4(VAR_5, "%d %d", &VAR_6, &VAR_7);
  if (VAR_6 < 128 || VAR_6 > 255 || VAR_7 < 128 || VAR_7 > 255)
  {
   FUNC_2(VAR_0, "invalid value %d\n", VAR_6);
   FUNC_0(1);
  }
  VAR_3[VAR_6 - 128] = VAR_7;
  VAR_4[VAR_7 - 128] = VAR_6;
 }

 VAR_2 = 0;
 FUNC_3("static char koi2alt[] = {\n");
 while (VAR_2 < 128)
 {
  int VAR_8 = 0;

  while (VAR_8 < 8)
  {
   FUNC_3("0x%02x", VAR_3[VAR_2++]);
   VAR_8++;
   if (VAR_2 >= 128)
    break;
   FUNC_3(", ");
  }
  FUNC_3("\n");
 }
 FUNC_3("};\n");

 VAR_2 = 0;
 FUNC_3("static char alt2koi[] = {\n");
 while (VAR_2 < 128)
 {
  int VAR_9 = 0;

  while (VAR_9 < 8)
  {
   FUNC_3("0x%02x", VAR_4[VAR_2++]);
   VAR_9++;
   if (VAR_2 >= 128)
    break;
   FUNC_3(", ");
  }
  FUNC_3("\n");
 }
 FUNC_3("};\n");
}
