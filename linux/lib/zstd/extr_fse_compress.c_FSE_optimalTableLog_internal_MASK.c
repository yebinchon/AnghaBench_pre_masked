
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ U32 ;


 unsigned int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (size_t,unsigned int) ;

unsigned FUNC_2(unsigned VAR_3, size_t VAR_4, unsigned VAR_5, unsigned VAR_6)
{
 U32 VAR_7 = FUNC_0((U32)(VAR_4 - 1)) - VAR_6;
 U32 VAR_8 = VAR_3;
 U32 VAR_9 = FUNC_1(VAR_4, VAR_5);
 if (VAR_8 == 0)
  VAR_8 = VAR_0;
 if (VAR_7 < VAR_8)
  VAR_8 = VAR_7;
 if (VAR_9 > VAR_8)
  VAR_8 = VAR_9;
 if (VAR_8 < VAR_2)
  VAR_8 = VAR_2;
 if (VAR_8 > VAR_1)
  VAR_8 = VAR_1;
 return VAR_8;
}
