
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (char*,int,char*) ;
 size_t FUNC_3 (char*,char*) ;
 scalar_t__ VAR_12 ;
 char* VAR_13 ;

__attribute__((used)) static void
FUNC_4(bool VAR_14)
{
 if (VAR_12)
  return;
 if (VAR_14 ^ VAR_3) {
  bool VAR_15 = VAR_13[FUNC_3(VAR_13, " \t\r\n")] == '\0';
  if (VAR_15 && VAR_2 && VAR_0 != VAR_1) {
   VAR_5 += 1;
   VAR_0 += 1;
  } else {
   if (VAR_9 && VAR_5 > 0)
    FUNC_2("#line %d%s", VAR_7, VAR_10);
   FUNC_1(VAR_13, VAR_11);
   VAR_5 = 0;
   VAR_1 = VAR_0 = VAR_15 ? VAR_0 + 1 : 0;
  }
 } else {
  if (VAR_8)
   FUNC_1(VAR_10, VAR_11);
  VAR_6 = 1;
  VAR_5 += 1;
  VAR_0 = 0;
 }
 if (VAR_4)
  FUNC_0(VAR_11);
}
