
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32 ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (scalar_t__) ;

char *
FUNC_1(uint32 VAR_1)
{
 char *VAR_2 = ((void*)0);

 if (VAR_1 == VAR_0)
  VAR_2 = "NoSymbol";
 else if (!(VAR_2 = FUNC_0(VAR_1)))
  VAR_2 = "(no name)";

 return VAR_2;
}
