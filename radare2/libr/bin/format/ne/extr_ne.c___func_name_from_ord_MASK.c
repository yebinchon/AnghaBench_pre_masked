
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut16 ;
typedef char Sdb ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 char* FUNC_3 (char*,int ,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,char*,int *) ;
 char* FUNC_7 (int *,char*,int ) ;

__attribute__((used)) static char *FUNC_8(char *VAR_1, ut16 VAR_2) {
 char *VAR_3 = FUNC_3 (FUNC_0 ("%s", VAR_0, "dll", "%s.sdb"), FUNC_4 (((void*)0)), VAR_1);
 char *VAR_4 = FUNC_3 ("%d", VAR_2);
 char *VAR_5;
 if (FUNC_2 (VAR_3)) {
  Sdb *VAR_6 = FUNC_7 (((void*)0), VAR_3, 0);
  VAR_5 = FUNC_6 (VAR_6, VAR_4, ((void*)0));
  if (!VAR_5) {
   VAR_5 = VAR_4;
  } else {
   FUNC_1 (VAR_4);
  }
  FUNC_5 (VAR_6);
  FUNC_1 (VAR_6);
 } else {
  VAR_5 = VAR_4;
 }
 return VAR_5;
}
