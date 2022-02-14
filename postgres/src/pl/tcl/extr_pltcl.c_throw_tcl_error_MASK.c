
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Tcl_Interp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,char const*) ;
 int FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*) ;
 char* FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(Tcl_Interp *VAR_3, const char *VAR_4)
{







 char *VAR_5;
 char *VAR_6;

 VAR_5 = FUNC_6(FUNC_7(FUNC_0(VAR_3)));
 VAR_6 = FUNC_7(FUNC_1(VAR_3, "errorInfo", VAR_2));
 FUNC_2(VAR_1,
   (FUNC_3(VAR_0),
    FUNC_5("%s", VAR_5),
    FUNC_4("%s\nin PL/Tcl function \"%s\"",
      VAR_6, VAR_4)));
}
