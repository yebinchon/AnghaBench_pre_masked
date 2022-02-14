
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static BOOL FUNC_3(int VAR_1)
{
  BYTE VAR_2[256];
  BOOL VAR_3;

  VAR_3 = FUNC_0(VAR_2);
  FUNC_2(VAR_3, "GetKeyboardState failed.\n");
  if (!VAR_3) return VAR_0;
  VAR_2[VAR_1] &= ~0x80;
  VAR_3 = FUNC_1(VAR_2);
  FUNC_2(VAR_3, "SetKeyboardState failed.\n");
  return VAR_3 != 0;
}
