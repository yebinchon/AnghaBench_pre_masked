
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_2, FUNC_1(VAR_0));
 if (VAR_4 == -1)
  FUNC_0(1, VAR_3, "socket r");

 return VAR_4;
}
