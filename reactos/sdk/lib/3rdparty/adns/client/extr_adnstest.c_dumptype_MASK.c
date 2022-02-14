
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ adns_status ;


 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,char*,char*,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(adns_status VAR_1, const char *VAR_2, const char *VAR_3) {
  FUNC_1(VAR_0, "%s(%s)%s%s",
   VAR_1 ? "?" : VAR_2, VAR_1 ? "?" : VAR_3 ? VAR_3 : "-",
   VAR_1 ? " " : "", VAR_1 ? FUNC_0(VAR_1) : "");
}
