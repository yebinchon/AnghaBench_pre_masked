
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (char*,char,char) ;
 int FUNC_2 (int,char*,int) ;

__attribute__((used)) static int FUNC_3(int VAR_1, char VAR_2)
{
 char VAR_3[100];
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_3, sizeof(VAR_3));
 if (VAR_4 != sizeof(VAR_3))
  FUNC_0(1, VAR_0, "read");

 if (VAR_3[60] != VAR_2) {
  FUNC_1("wrong pattern: 0x%x != 0x%x\n", VAR_3[60], VAR_2);
  return 1;
 }

 FUNC_1("read: %c (0x%x)\n", VAR_3[60], VAR_3[60]);
 return 0;
}
