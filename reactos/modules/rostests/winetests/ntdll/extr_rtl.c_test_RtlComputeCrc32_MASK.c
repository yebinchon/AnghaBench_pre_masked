
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int,int const*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
  DWORD VAR_2 = 0;

  if (!&FUNC_1)
  {
    FUNC_2("RtlComputeCrc32 is not available\n");
    return;
  }

  VAR_2 = FUNC_1(VAR_2, (const BYTE *)VAR_1, VAR_0);
  FUNC_0(VAR_2 == 0x40861dc2,"Expected 0x40861dc2, got %8x\n", VAR_2);
}
