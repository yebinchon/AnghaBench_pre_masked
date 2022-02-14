
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*,int ) ;
 int VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 size_t FUNC_4 (char const*) ;
 int VAR_4 ;
 int FUNC_5 (char*,char*,int ,char const*,char*,char const*) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char const*,...) ;

BOOL FUNC_10(const char* VAR_5, int VAR_6, const char* VAR_7, const char* VAR_8)
{
 int VAR_9;
 size_t VAR_10;
 char VAR_11[VAR_1];
 char VAR_12[VAR_1];
 char VAR_13[] = "#\\";

 FUNC_9("Opening: %s:[%d] (7-Zip)", VAR_5, VAR_6);

 if ((VAR_5 == ((void*)0)) || (VAR_7 == ((void*)0)) || (VAR_8 == ((void*)0)))
  return VAR_0;



 VAR_13[0] = '0' + VAR_6;

 FUNC_9("Extracting: %s (From %s)", VAR_8, VAR_7);






 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
  FUNC_7(VAR_12, VAR_8);
  for (VAR_10 = FUNC_8(VAR_12) - 1; (VAR_10 > 0) && (VAR_12[VAR_10] != '\\') && (VAR_12[VAR_10] != '/'); VAR_10--);
  VAR_12[VAR_10] = 0;

  FUNC_5(VAR_11, "\"%s\" -y e \"%s\" %s%s", VAR_4,
   VAR_5, (VAR_9 == 0) ? VAR_13 : "", VAR_7);
  if (FUNC_0(VAR_11, VAR_12, VAR_0) != 0) {
   FUNC_9("  Could not launch 7z.exe: %s", FUNC_1());
   return VAR_0;
  }

  for (VAR_10 = FUNC_4(VAR_7); (VAR_10 > 0) && (VAR_7[VAR_10] != '\\') && (VAR_7[VAR_10] != '/'); VAR_10--);
  if (VAR_10 == 0)
   FUNC_6(VAR_12, "\\");
  FUNC_6(VAR_12, &VAR_7[VAR_10]);
  if (FUNC_2(VAR_12, 0) == 0)

   break;
 }

 if (VAR_9 >= 2) {
  FUNC_9("  7z.exe did not extract %s", VAR_12);
  return VAR_0;
 }


 if (FUNC_3(VAR_12, VAR_8) != 0) {
  FUNC_9("  Could not rename %s to %s: errno %d", VAR_12, VAR_8, VAR_3);
  return VAR_0;
 }

 return VAR_2;
}
