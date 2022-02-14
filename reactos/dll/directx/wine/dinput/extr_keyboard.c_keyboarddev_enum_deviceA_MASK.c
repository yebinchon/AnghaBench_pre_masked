
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPDIDEVICEINSTANCEA ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static HRESULT FUNC_3(DWORD VAR_7, DWORD VAR_8, LPDIDEVICEINSTANCEA VAR_9, DWORD VAR_10, int VAR_11)
{
  if (VAR_11 != 0)
    return VAR_4;

  if (VAR_8 & VAR_3)
    return VAR_5;

  if ((VAR_7 == 0) ||
      ((VAR_7 == VAR_2) && (VAR_10 < 0x0800)) ||
      (((VAR_7 == VAR_0) || (VAR_7 == VAR_1)) && (VAR_10 >= 0x0800))) {
    FUNC_0("Enumerating the Keyboard device\n");

    FUNC_1(VAR_9, VAR_10, FUNC_2());

    return VAR_6;
  }

  return VAR_5;
}
