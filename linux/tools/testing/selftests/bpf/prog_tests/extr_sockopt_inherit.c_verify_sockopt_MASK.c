
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int,char*,int*) ;
 int FUNC_1 (char*,char const*,...) ;
 int FUNC_2 (char*,char const*,int,char,char) ;

__attribute__((used)) static int FUNC_3(int VAR_1, int VAR_2, const char *VAR_3, char VAR_4)
{
 socklen_t VAR_5 = 1;
 char VAR_6 = 0;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_0, VAR_2, &VAR_6, &VAR_5);
 if (VAR_7) {
  FUNC_1("%s: failed to call getsockopt", VAR_3);
  return 1;
 }

 FUNC_2("%s %d: got=0x%x ? expected=0x%x\n", VAR_3, VAR_2, VAR_6, VAR_4);

 if (VAR_6 != VAR_4) {
  FUNC_1("%s: unexpected getsockopt value %d != %d", VAR_3,
   VAR_6, VAR_4);
  return 1;
 }

 return 0;
}
