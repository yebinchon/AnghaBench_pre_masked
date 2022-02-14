
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ fsec_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int,...) ;

__attribute__((used)) static void
FUNC_4(char *VAR_0, int VAR_1, fsec_t VAR_2, int VAR_3, bool VAR_4)
{
 if (VAR_2 == 0)
 {
  if (VAR_4)
   FUNC_3(VAR_0, "%02d", FUNC_2(VAR_1));
  else
   FUNC_3(VAR_0, "%d", FUNC_2(VAR_1));
 }
 else
 {
  if (VAR_4)
   FUNC_3(VAR_0, "%02d.%0*d", FUNC_2(VAR_1), VAR_3, (int) FUNC_0(VAR_2));
  else
   FUNC_3(VAR_0, "%d.%0*d", FUNC_2(VAR_1), VAR_3, (int) FUNC_0(VAR_2));
  FUNC_1(VAR_0);
 }
}
