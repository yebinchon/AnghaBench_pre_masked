
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RIODesc ;
typedef int RIO ;


 scalar_t__ FUNC_0 (int *,char const*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int * FUNC_3 (int *,int *,char const*,int,int,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,char*,int) ;
 char* FUNC_6 (char*,char const*) ;
 char* FUNC_7 (int *) ;

__attribute__((used)) static RIODesc *FUNC_8(RIO *VAR_2, const char *VAR_3, int VAR_4, int VAR_5) {
 if (FUNC_0 (VAR_2, VAR_3, 0)) {
  if (VAR_0) {
   return ((void*)0);
  }
  VAR_0 = FUNC_4 (0);
  char *VAR_6 = FUNC_6 ("winedbg '%s'", VAR_3 + 10);
  int VAR_7 = FUNC_5 (VAR_0, VAR_6, 1000);
  FUNC_2 (VAR_6);
  if (!VAR_7) {
   return ((void*)0);
  }
  char *VAR_8 = FUNC_7 (((void*)0));
  if (VAR_8) {
   int VAR_9 = 7;
   FUNC_2 (VAR_8);
   FUNC_1 ("Wine-dbg is ready to go!\n");
   return FUNC_3 (VAR_2, &VAR_1, VAR_3, VAR_9, VAR_5, VAR_0);
  }
  FUNC_1 ("Can't find the Wine-dbg prompt\n");
 }
 return ((void*)0);
}
