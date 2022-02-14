
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rbuf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ,char*,int,scalar_t__) ;
 int FUNC_1 (int,char*,int,int ) ;

__attribute__((used)) static void FUNC_2(int VAR_2)
{
 char VAR_3[1];
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3, sizeof(VAR_3), 0);
 if (VAR_4 != -1 || VAR_1 != VAR_0)
  FUNC_0(1, 0, "recv: not empty as expected (%d, %d)", VAR_4, VAR_1);
}
