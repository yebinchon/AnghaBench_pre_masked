
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(int VAR_3)
{
 const char *VAR_4 = (VAR_3 == 0) ? "Unparked" : "Parked";

 FUNC_1(VAR_2, VAR_3*1000);
 FUNC_0(VAR_0, "%s %s disk head\n", VAR_4, VAR_1);
}
