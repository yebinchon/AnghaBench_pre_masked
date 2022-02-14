
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rgbSystemCredUser ;
typedef int rgbSystemCredMachine ;
typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__*,int,int *) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,char*) ;
 int FUNC_4 (scalar_t__*,int,int ) ;

void FUNC_5()
{
 ULONG_PTR VAR_3, VAR_4, VAR_5;
 ULONG_PTR VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 BOOL VAR_12;
 BYTE VAR_13[VAR_2], VAR_14[VAR_2];

 if(VAR_1 < VAR_0)
 {
  VAR_6 = FUNC_0("lsasrv!g_guidPreferredKey");
  VAR_7 = FUNC_0("lsasrv!g_pbPreferredKey");
  VAR_8 = FUNC_0("lsasrv!g_cbPreferredKey");
  VAR_9 = FUNC_0("lsasrv!g_guidW2KPreferredKey");
  VAR_10 = FUNC_0("lsasrv!g_pbW2KPreferredKey");
  VAR_11 = FUNC_0("lsasrv!g_cbW2KPreferredKey");

  VAR_3 = FUNC_0("lsasrv!g_fSystemCredsInitialized");
  VAR_4 = FUNC_0("lsasrv!g_rgbSystemCredMachine");
  VAR_5 = FUNC_0("lsasrv!g_rgbSystemCredUser");
 }
 else
 {
  VAR_6 = FUNC_0("dpapisrv!g_guidPreferredKey");
  VAR_7 = FUNC_0("dpapisrv!g_pbPreferredKey");
  VAR_8 = FUNC_0("dpapisrv!g_cbPreferredKey");
  VAR_9 = FUNC_0("dpapisrv!g_guidW2KPreferredKey");
  VAR_10 = FUNC_0("dpapisrv!g_pbW2KPreferredKey");
  VAR_11 = FUNC_0("dpapisrv!g_cbW2KPreferredKey");

  VAR_3 = FUNC_0("dpapisrv!g_fSystemCredsInitialized");
  VAR_4 = FUNC_0("dpapisrv!g_rgbSystemCredMachine");
  VAR_5 = FUNC_0("dpapisrv!g_rgbSystemCredUser");
 }

 if((VAR_6 && VAR_7 && VAR_8) || (VAR_9 && VAR_10 && VAR_11))
 {
  FUNC_2("\nDPAPI Backup keys\n=================\n");
  FUNC_3(VAR_6, VAR_7, VAR_8, "Current prefered key:       ");
  FUNC_3(VAR_9, VAR_10, VAR_11, "Compatibility prefered key: ");
 }

 if(VAR_3 && VAR_4 && VAR_5)
 {
  if(FUNC_1(VAR_3, &VAR_12, sizeof(BOOL), ((void*)0)))
  {
   FUNC_2("\nDPAPI System\n============\n");
   if(VAR_12)
   {
    if(
     FUNC_1(VAR_4, VAR_13, sizeof(VAR_13), ((void*)0)) &&
     FUNC_1(VAR_5, VAR_14, sizeof(VAR_14), ((void*)0))
     )
    {
     FUNC_2("full: ");
     FUNC_4(VAR_13, sizeof(VAR_13), 0);
     FUNC_4(VAR_14, sizeof(VAR_14), 0);
     FUNC_2("\nm/u : ");
     FUNC_4(VAR_13, sizeof(VAR_13), 0);
     FUNC_2(" / ");
     FUNC_4(VAR_14, sizeof(VAR_14), 0);
     FUNC_2("\n");
    }
   }
  }
 }
}
