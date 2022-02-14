
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char const*,int) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,char const*,char const*) ;
 int FUNC_3 (char*,char const*,...) ;
 int FUNC_4 (char const*,char**,int ) ;

__attribute__((used)) static void FUNC_5(const char *VAR_3, const char *VAR_4)
{
 char *VAR_5;
 int VAR_6;



 if (VAR_1) {
  if (!VAR_4) {
   FUNC_1(VAR_2, VAR_3);
   return;
  }
  VAR_0 = 0;
  VAR_6 = FUNC_4(VAR_4, &VAR_5, 0);
  if (!VAR_0 && *VAR_5 == '\n')
   FUNC_0(VAR_2, VAR_3, VAR_6);
  else
   FUNC_2(VAR_2, VAR_3, VAR_4);
 } else {
  if (VAR_4)
   FUNC_3("%s is set to %s\n", VAR_3, VAR_4);
  else
   FUNC_3("%s is not set\n", VAR_3);
 }
}
