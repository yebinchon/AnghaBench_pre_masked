
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* pszNextLastCDComponent; char* pszPD; char* pszPDPlusSlash; char* szCD; char* szCDPlusSlash; char* szCurDrive; char* pszLastCDComponent; char* szParentDir; char* szParentDirPlusSlash; char* szNextLastCDComponent; int szCurDriveSlash; } ;
typedef TYPE_1__ DirComponents ;
typedef int BOOLEAN ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*,size_t const) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 void* FUNC_9 (char*,char) ;

__attribute__((used)) static void FUNC_10(DirComponents* VAR_0)
{



 BOOLEAN VAR_1;

 VAR_0->pszNextLastCDComponent = 0;
 VAR_0->pszPD = 0;
 VAR_0->pszPDPlusSlash = 0;

 FUNC_0(sizeof(VAR_0->szCD) / sizeof(*VAR_0->szCD), VAR_0->szCD);

 VAR_1 = FUNC_8(VAR_0->szCD) >= 2 && VAR_0->szCD[1] == ':';
 FUNC_1(VAR_1, "Expected curdir to be a drive letter. It's not");

 if (!VAR_1) {
  FUNC_4("Curdir is \"%s\"\n", VAR_0->szCD);
  FUNC_2(1);
 }

 VAR_1 = VAR_0->szCD[2] == '\\';
 FUNC_1(VAR_1, "CD is missing a slash as its third character");
 if (!VAR_1) {
  FUNC_4("CD is \"%s\"\n", VAR_0->szCD);
  FUNC_2(1);
 }



 FUNC_7(VAR_0->szCDPlusSlash, VAR_0->szCD);
 if (FUNC_8(VAR_0->szCD) > 3) {

  FUNC_6(VAR_0->szCDPlusSlash, "\\");
 }

 FUNC_3(VAR_0->szCurDrive, VAR_0->szCD, 2);
 VAR_0->szCurDrive[2] = 0;
 FUNC_5(VAR_0->szCurDriveSlash, "%s\\", VAR_0->szCurDrive);

 VAR_0->pszLastCDComponent = FUNC_9(VAR_0->szCD, '\\');
 if (VAR_0->pszLastCDComponent)
 {

  FUNC_3(VAR_0->szParentDir, VAR_0->szCD, VAR_0->pszLastCDComponent - VAR_0->szCD);
  VAR_0->szParentDir[VAR_0->pszLastCDComponent - VAR_0->szCD] = 0;
  VAR_0->pszPD = VAR_0->szParentDir;
  if (FUNC_8(VAR_0->szParentDir) == 2 && VAR_0->szParentDir[1] == ':') {


   FUNC_6(VAR_0->szParentDir, "\\");
  }
  FUNC_7(VAR_0->szParentDirPlusSlash, VAR_0->szParentDir);
  if (VAR_0->szParentDirPlusSlash[FUNC_8(VAR_0->szParentDirPlusSlash)-1] != '\\') {
   FUNC_6(VAR_0->szParentDirPlusSlash, "\\");
  }
  VAR_0->pszPDPlusSlash = VAR_0->szParentDirPlusSlash;


  *VAR_0->pszLastCDComponent = 0;
  VAR_0->pszNextLastCDComponent = FUNC_9(VAR_0->szCD, '\\');
  *VAR_0->pszLastCDComponent = '\\';
  if (VAR_0->pszNextLastCDComponent) {
   ++VAR_0->pszNextLastCDComponent;
   if (VAR_0->pszNextLastCDComponent + 1 >= VAR_0->pszLastCDComponent) {
    VAR_0->pszNextLastCDComponent = 0;
   } else {
    const size_t VAR_2 = VAR_0->pszLastCDComponent - VAR_0->pszNextLastCDComponent;
    FUNC_3(VAR_0->szNextLastCDComponent, VAR_0->pszNextLastCDComponent, VAR_2);
    VAR_0->szNextLastCDComponent[VAR_2] = 0;
    VAR_0->pszNextLastCDComponent = VAR_0->szNextLastCDComponent;
   }
  }
 }
 if (VAR_0->pszLastCDComponent && VAR_0->pszLastCDComponent[1] == 0) {


  VAR_0->pszLastCDComponent = 0;
 } else {
  ++VAR_0->pszLastCDComponent;
 }
}
