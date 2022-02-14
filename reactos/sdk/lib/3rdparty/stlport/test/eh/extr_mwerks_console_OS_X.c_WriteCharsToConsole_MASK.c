
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long (* theWrite ) (int,char*,long) ;} ;


 TYPE_1__ VAR_0 ;
 long FUNC_0 (int,char*,long) ;
 long FUNC_1 (int,char*,long) ;

long FUNC_2(char *VAR_1, long VAR_2)
{




  if (VAR_0.theWrite == ((void*)0))
    return -1;
  else
    return VAR_0.theWrite(1, VAR_1, VAR_2);

}
