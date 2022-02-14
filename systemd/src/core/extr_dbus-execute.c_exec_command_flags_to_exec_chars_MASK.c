
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ExecCommandFlags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 char* FUNC_1 (char*,char*,char*,char*,char*) ;

__attribute__((used)) static char *FUNC_2(ExecCommandFlags VAR_5) {
        return FUNC_1(FUNC_0(VAR_5, VAR_2) ? "-" : "",
                       FUNC_0(VAR_5, VAR_3) ? ":" : "",
                       FUNC_0(VAR_5, VAR_1) ? "+" : "",
                       FUNC_0(VAR_5, VAR_4) ? "!" : "",
                       FUNC_0(VAR_5, VAR_0) ? "!!" : "");
}
