
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef unsigned char ULONG ;
typedef unsigned char UCHAR ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static VOID
FUNC_1(unsigned char *VAR_0)
{
  UCHAR VAR_1;
  ULONG VAR_2;
  ULONG VAR_3;

  VAR_1 = *VAR_0;
  VAR_0++;

  VAR_2 = *VAR_0;
  VAR_0++;
  VAR_2 += (*VAR_0 << 8);
  VAR_0++;
  VAR_2 += (*VAR_0 << 16);
  VAR_0++;
  VAR_2 += (*VAR_0 << 24);
  VAR_0++;

  VAR_3 = *VAR_0;
  VAR_0++;
  VAR_3 += (*VAR_0 << 8);
  VAR_0++;
  VAR_3 += (*VAR_0 << 16);
  VAR_0++;
  VAR_3 += (*VAR_0 << 24);

  FUNC_0("  32-Bit fixed location memory range descriptor\n");
  FUNC_0("    Base 0x%lx  Length 0x%lx  Flags 0x%02x\n",
  VAR_2, VAR_3, VAR_1);
}
