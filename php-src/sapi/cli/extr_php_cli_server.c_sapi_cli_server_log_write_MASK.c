
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(int VAR_3, char *VAR_4)
{
 char VAR_5[52];

 if (VAR_0 < VAR_3) {
  return;
 }

 if (FUNC_3(VAR_5) != 0) {
  FUNC_2(VAR_5, "unknown time, can't be fetched", sizeof("unknown time, can't be fetched"));
 } else {
  size_t VAR_6 = FUNC_4(VAR_5);
  if (VAR_6 > 0) {
   VAR_5[VAR_6 - 1] = '\0';
  } else {
   FUNC_2(VAR_5, "unknown", sizeof("unknown"));
  }
 }







 FUNC_0(VAR_2, "[%s] %s\n", VAR_5, VAR_4);

}
