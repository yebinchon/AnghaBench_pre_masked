
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s64 ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,long) ;
 int VAR_6 ;

__attribute__((used)) static inline s64 FUNC_1(s64 VAR_7, long VAR_8)
{
 VAR_6 &= ~VAR_5;

 if (VAR_8 < VAR_1)
  return 0;

 if (!(VAR_6 & VAR_4) && (VAR_8 <= VAR_0))
  return 0;

 VAR_6 |= VAR_5;

 return FUNC_0(VAR_7 << (VAR_2 - VAR_3), VAR_8);
}
