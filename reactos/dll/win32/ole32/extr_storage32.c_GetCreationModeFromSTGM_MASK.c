
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;


 int FUNC_2 (int ) ;

 int FUNC_3 (int ) ;

__attribute__((used)) static DWORD FUNC_4(DWORD VAR_2)
{
  switch(FUNC_2(VAR_2))
  {
  case 129:
    return VAR_0;
  case 130:
    FUNC_1("STGM_CONVERT not implemented!\n");
    return VAR_1;
  case 128:
    return VAR_1;
  }
  FUNC_0("Invalid create mode!\n");
  FUNC_3(0);
  return 0;
}
