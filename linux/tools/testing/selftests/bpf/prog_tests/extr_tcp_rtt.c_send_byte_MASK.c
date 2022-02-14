
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int b ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,int) ;

__attribute__((used)) static void FUNC_3(int VAR_0)
{
 char VAR_1 = 0x55;

 if (FUNC_0(FUNC_2(VAR_0, &VAR_1, sizeof(VAR_1)) != 1))
  FUNC_1("Failed to send single byte");
}
