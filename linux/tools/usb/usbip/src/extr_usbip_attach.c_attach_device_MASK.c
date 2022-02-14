
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*,int ,char*,int) ;
 int FUNC_4 (char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(char *VAR_1, char *VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_3 = FUNC_4(VAR_1, VAR_0);
 if (VAR_3 < 0) {
  FUNC_1("tcp connect");
  return -1;
 }

 VAR_5 = FUNC_2(VAR_3, VAR_2);
 if (VAR_5 < 0)
  return -1;

 FUNC_0(VAR_3);

 VAR_4 = FUNC_3(VAR_1, VAR_0, VAR_2, VAR_5);
 if (VAR_4 < 0) {
  FUNC_1("record connection");
  return -1;
 }

 return 0;
}
