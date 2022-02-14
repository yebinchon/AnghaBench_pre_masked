
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,char*,int) ;
 unsigned int FUNC_2 (int) ;
 unsigned int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,char*,unsigned int,unsigned int) ;
 int FUNC_6 (int,int ,int) ;

__attribute__((used)) static int FUNC_7(int VAR_1)
{
 unsigned int VAR_2, VAR_3;
 char VAR_4[16];
 int VAR_5;

 VAR_5 = FUNC_6(VAR_1, VAR_0, 17);
 if (VAR_5 < 0) {
  FUNC_4("socket");
  return 1;
 }

 if (FUNC_1(VAR_5, VAR_4, sizeof(VAR_4)) < 0)
  return 1;

 VAR_2 = FUNC_3(VAR_5);
 VAR_3 = FUNC_2(VAR_5);

 FUNC_0(VAR_5);

 FUNC_5("sd %d: dev %s, mark %u, priority %u\n", VAR_5, VAR_4, VAR_2, VAR_3);

 return 0;
}
