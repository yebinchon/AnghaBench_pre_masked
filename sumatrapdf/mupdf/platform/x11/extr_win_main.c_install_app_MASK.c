
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HKEY ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char*,char*,char*) ;

__attribute__((used)) static void FUNC_4(char *VAR_1)
{
 char VAR_2[512];
 HKEY VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 HKEY VAR_10, VAR_11, VAR_12, VAR_13;
 HKEY VAR_14, VAR_15, VAR_16, VAR_17;

 FUNC_0(VAR_0, "Software", VAR_3);
 FUNC_0(VAR_3, "Classes", VAR_4);
 FUNC_0(VAR_4, ".pdf", VAR_6);
 FUNC_0(VAR_6, "OpenWithProgids", VAR_14);
 FUNC_0(VAR_4, ".xps", VAR_7);
 FUNC_0(VAR_7, "OpenWithProgids", VAR_15);
 FUNC_0(VAR_4, ".epub", VAR_8);
 FUNC_0(VAR_8, "OpenWithProgids", VAR_16);
 FUNC_0(VAR_4, ".fb2", VAR_9);
 FUNC_0(VAR_9, "OpenWithProgids", VAR_17);
 FUNC_0(VAR_4, "MuPDF", VAR_5);
 FUNC_0(VAR_5, "SupportedTypes", VAR_13);
 FUNC_0(VAR_5, "shell", VAR_10);
 FUNC_0(VAR_10, "open", VAR_11);
 FUNC_0(VAR_11, "command", VAR_12);

 FUNC_3(VAR_2, "\"%s\" \"%%1\"", VAR_1);

 FUNC_2(VAR_11, "FriendlyAppName", "MuPDF");
 FUNC_2(VAR_12, "", VAR_2);
 FUNC_2(VAR_13, ".pdf", "");
 FUNC_2(VAR_13, ".xps", "");
 FUNC_2(VAR_13, ".epub", "");
 FUNC_2(VAR_14, "MuPDF", "");
 FUNC_2(VAR_15, "MuPDF", "");
 FUNC_2(VAR_16, "MuPDF", "");
 FUNC_2(VAR_17, "MuPDF", "");

 FUNC_1(VAR_9);
 FUNC_1(VAR_8);
 FUNC_1(VAR_7);
 FUNC_1(VAR_6);
 FUNC_1(VAR_5);
 FUNC_1(VAR_4);
 FUNC_1(VAR_3);
}
