
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;





 int VAR_0 ;

const char *
FUNC_0(uint8 VAR_1)
{
 const char *VAR_2 = ((void*)0);

 switch (VAR_1 & ~VAR_0)
 {
  case 128:
   VAR_2 = "LOCK";
   break;
  case 129:
   VAR_2 = "RUNNING_XACTS";
   break;
  case 130:
   VAR_2 = "INVALIDATIONS";
   break;
 }

 return VAR_2;
}
