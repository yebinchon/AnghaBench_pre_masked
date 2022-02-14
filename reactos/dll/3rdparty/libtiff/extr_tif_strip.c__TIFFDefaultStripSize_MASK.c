
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef scalar_t__ uint32 ;
typedef int int32 ;
typedef int TIFF ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

uint32
FUNC_1(TIFF* VAR_1, uint32 VAR_2)
{
 if ((int32) VAR_2 < 1) {





  uint64 VAR_3;
  uint64 VAR_4;
  VAR_3=FUNC_0(VAR_1);
  if (VAR_3==0)
   VAR_3=1;
  VAR_4=(uint64)VAR_0/VAR_3;
  if (VAR_4==0)
   VAR_4=1;
  else if (VAR_4>0xFFFFFFFF)
   VAR_4=0xFFFFFFFF;
  VAR_2=(uint32)VAR_4;
 }
 return (VAR_2);
}
