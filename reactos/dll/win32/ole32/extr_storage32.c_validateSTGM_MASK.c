
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HRESULT ;
typedef int DWORD ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;

 int FUNC_2 (int) ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;

__attribute__((used)) static HRESULT FUNC_4(DWORD VAR_8)
{
  DWORD VAR_9 = FUNC_1(VAR_8);
  DWORD VAR_10 = FUNC_3(VAR_8);
  DWORD VAR_11 = FUNC_2(VAR_8);

  if (VAR_8&~VAR_2)
  {
    FUNC_0("unknown flags %08x\n", VAR_8);
    return VAR_0;
  }

  switch (VAR_9)
  {
  case 134:
  case 128:
  case 133:
    break;
  default:
    return VAR_0;
  }

  switch (VAR_10)
  {
  case 132:
  case 131:
  case 130:
  case 129:
    break;
  case 0:
    if (!(VAR_8 & VAR_6))
      return VAR_0;
    break;
  default:
    return VAR_0;
  }

  switch (VAR_11)
  {
  case 136:
  case 135:
    break;
  default:
    return VAR_0;
  }




  if ( (VAR_8 & VAR_6) && (VAR_8 & VAR_5) )
      return VAR_0;





  if ( VAR_11 == 136 && (VAR_8 & VAR_1) )
    return VAR_0;




  if ( (VAR_8 & VAR_3) && !(VAR_8 & VAR_6) )
    return VAR_0;





  if ( (VAR_8 & VAR_4) &&
        (!(VAR_8 & VAR_6) ||
         VAR_10 == 129 ||
         VAR_10 == 130) )
    return VAR_0;

  return VAR_7;
}
