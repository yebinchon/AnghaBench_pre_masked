
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARTYPE ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static inline HRESULT FUNC_0(VARTYPE VAR_12)
{
  VARTYPE VAR_13 = VAR_12 & VAR_5;

  VAR_12 &= VAR_9;

  if (!(VAR_13 & (VAR_10|VAR_8)))
  {
    if (VAR_12 < VAR_11 || VAR_12 == VAR_7 || VAR_12 == VAR_4)
    {
      if ((VAR_13 & (VAR_3|VAR_2)) && VAR_12 <= VAR_6)
        return VAR_0;
      if (VAR_12 != (VARTYPE)15)
        return VAR_1;
    }
  }
  return VAR_0;
}
