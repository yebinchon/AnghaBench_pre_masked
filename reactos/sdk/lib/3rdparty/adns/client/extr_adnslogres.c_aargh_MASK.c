
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,char const*,int ) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const char *VAR_1) {
  const char *VAR_2 = FUNC_2(VAR_0);
  if (!VAR_2) VAR_2 = "Unknown error";
  FUNC_1("%s: %s (%d)", VAR_1, VAR_2, VAR_0);
  FUNC_0(1);
}
