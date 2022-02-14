
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int GUID ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static unsigned char *FUNC_1(unsigned char *VAR_0)
{
  ULONG VAR_1;

  VAR_1 = *(ULONG *)VAR_0;
  VAR_0 += sizeof(ULONG);

  switch (VAR_1)
  {
    case 0x3:
    case 0xc:
      return VAR_0 + sizeof(GUID);
    case 0x0:
    case 0x2:
    case 0x4:
    case 0x5:
    case 0x6:
    case 0xd:
      return VAR_0 + sizeof(ULONG);
    case 0x1:
      return VAR_0 + 24;
    default:
      FUNC_0("unimplemented type 0x%x\n", VAR_1);
      return VAR_0;
  }
}
