
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int,void*,int) ;
 int VAR_2 ;
 char* FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(int VAR_3, void *VAR_4, int VAR_5) {
 for (;;) {
  int VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_5);
  if (VAR_6<0) {
   if (VAR_1 == VAR_0)
    continue;
   FUNC_1(VAR_2, "socket-server : read pipe error %s.\n",FUNC_3(VAR_1));
   return;
  }

  FUNC_0(VAR_6 == VAR_5);
  return;
 }
}
