
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef char TCHAR ;
typedef scalar_t__ HINSTANCE ;
typedef int HANDLE ;


 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (scalar_t__,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*,int) ;
 int VAR_2 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,char*,...) ;
 int FUNC_9 (char*,char*) ;
 int VAR_3 ;

int
FUNC_10(
 int VAR_4,
 char * VAR_5 []
 )
{
 HINSTANCE VAR_6;
 TCHAR VAR_7 [VAR_2];

 if (VAR_4 < 2)
 {
  FUNC_8(
   VAR_3,
   "ReactOS System Tools\nCheck a Dynamic Link Library (DLL) for loading\nCopyright (c) 1998, 1999 Emanuele Aliberti\n\nusage: %s module [symbol [, ...]]\n",




   VAR_5[0]
   );
  FUNC_7(VAR_0);
 }
 VAR_6 = FUNC_5(VAR_5[1]);
 if (!VAR_6)
 {
  UINT VAR_8;

  VAR_8 = FUNC_3();
  FUNC_6(L"LoadLibrary",VAR_8);
  FUNC_8(
   VAR_3,
   "%s: loading %s failed (%d).\n",
   VAR_5[0],
   VAR_5[1],
   VAR_8
   );
  FUNC_7(VAR_0);
 }
 FUNC_4(
  (HANDLE) VAR_6,
  VAR_7,
  sizeof VAR_7
  );
 FUNC_9(
  "%s loaded.\n",
  VAR_7
  );



 if (VAR_4 > 2)
 {
  int VAR_9;

  for ( VAR_9 = 2;
   (VAR_9 < VAR_4);
   ++VAR_9
   )
  {
   FUNC_0( VAR_6, VAR_5[VAR_9] );
  }
 }
 FUNC_2(VAR_6);
 FUNC_9(
  "%s unloaded.\n",
  VAR_7
  );
 return VAR_1;
}
