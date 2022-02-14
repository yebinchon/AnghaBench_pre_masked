
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MSV1_0_PRIMARY_HELPER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;

const MSV1_0_PRIMARY_HELPER * FUNC_0()
{
 const MSV1_0_PRIMARY_HELPER * VAR_5;
 if(VAR_3 < VAR_0)
  VAR_5 = &VAR_4[0];
 else if(VAR_3 < VAR_1)
  VAR_5 = &VAR_4[1];
 else if(VAR_3 < VAR_2)
  VAR_5 = &VAR_4[2];
 else
  VAR_5 = &VAR_4[3];
 return VAR_5;
}
