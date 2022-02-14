
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,char,int ) ;
 int VAR_1 ;
 int FUNC_4 (int,char*,int ) ;

void FUNC_5(int VAR_2)
{
 int VAR_3;
 char *VAR_4 = FUNC_2(VAR_1);

 FUNC_3(VAR_4, 'z', VAR_1);
 VAR_3 = FUNC_4(VAR_2, VAR_4, VAR_1);
 if (VAR_3 < 0)
  FUNC_0(1, VAR_0, "Failed to sendmsg");

 FUNC_1(VAR_4);
}
