
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*,char*,int *,int *,int ,char*) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (int ,char*) ;

int FUNC_6()
{
 char VAR_4[VAR_2];
 LPSTR VAR_5;

 FUNC_0(((void*)0));


 FUNC_4(0, VAR_4, VAR_1, VAR_3);
 VAR_5 = FUNC_3(VAR_4);

 FUNC_5(VAR_5, "start-cmd.lnk");
 FUNC_2(VAR_4, "cmd.exe", "", ((void*)0), ((void*)0), 0, "open console window");

 FUNC_5(VAR_5, "start-winhello.lnk");
 FUNC_2(VAR_4, "winhello.exe", "", ((void*)0), ((void*)0), 0, "launch winhello");



 FUNC_4(0, VAR_4, VAR_0, VAR_3);
 VAR_5 = FUNC_3(VAR_4);

 FUNC_5(VAR_5, "start-wcmd.lnk");
 FUNC_2(VAR_4, "cmd.exe", "", ((void*)0), ((void*)0), 0, "open console window");

 FUNC_5(VAR_5, "start-winemine.lnk");
 FUNC_2(VAR_4, "winemine.exe", "", ((void*)0), ((void*)0), 0, "launch winemine");

 FUNC_1();

 return 0;
}
