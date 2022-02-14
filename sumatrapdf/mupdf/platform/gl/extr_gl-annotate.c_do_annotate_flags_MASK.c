
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_11 ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
 char VAR_12[4096];
 int VAR_13 = FUNC_2(VAR_10, VAR_11);
 FUNC_1(VAR_12, "Flags:", sizeof VAR_12);
 if (VAR_13 & VAR_1) FUNC_0(VAR_12, " inv", sizeof VAR_12);
 if (VAR_13 & VAR_0) FUNC_0(VAR_12, " hidden", sizeof VAR_12);
 if (VAR_13 & VAR_7) FUNC_0(VAR_12, " print", sizeof VAR_12);
 if (VAR_13 & VAR_6) FUNC_0(VAR_12, " nz", sizeof VAR_12);
 if (VAR_13 & VAR_4) FUNC_0(VAR_12, " nr", sizeof VAR_12);
 if (VAR_13 & VAR_5) FUNC_0(VAR_12, " nv", sizeof VAR_12);
 if (VAR_13 & VAR_8) FUNC_0(VAR_12, " ro", sizeof VAR_12);
 if (VAR_13 & VAR_2) FUNC_0(VAR_12, " lock", sizeof VAR_12);
 if (VAR_13 & VAR_9) FUNC_0(VAR_12, " tnv", sizeof VAR_12);
 if (VAR_13 & VAR_3) FUNC_0(VAR_12, " lc", sizeof VAR_12);
 if (!VAR_13) FUNC_0(VAR_12, " none", sizeof VAR_12);
 FUNC_3("%s", VAR_12);
}
