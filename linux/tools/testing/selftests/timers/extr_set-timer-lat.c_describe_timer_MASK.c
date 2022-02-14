
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,char*,char*) ;

void FUNC_2(int VAR_1, int VAR_2)
{
 FUNC_1("%-22s %s %s ",
   FUNC_0(VAR_0),
   VAR_1 ? "ABSTIME":"RELTIME",
   VAR_2 ? "PERIODIC":"ONE-SHOT");
}
