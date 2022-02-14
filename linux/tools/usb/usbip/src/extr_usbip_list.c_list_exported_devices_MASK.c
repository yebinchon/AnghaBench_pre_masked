
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(char *VAR_1)
{
 int VAR_2;
 int VAR_3;

 VAR_3 = FUNC_5(VAR_1, VAR_0);
 if (VAR_3 < 0) {
  FUNC_2("could not connect to %s:%s: %s", VAR_1,
      VAR_0, FUNC_3(VAR_3));
  return -1;
 }
 FUNC_1("connected to %s:%s", VAR_1, VAR_0);

 VAR_2 = FUNC_4(VAR_1, VAR_3);
 if (VAR_2 < 0) {
  FUNC_2("failed to get device list from %s", VAR_1);
  return -1;
 }

 FUNC_0(VAR_3);

 return 0;
}
