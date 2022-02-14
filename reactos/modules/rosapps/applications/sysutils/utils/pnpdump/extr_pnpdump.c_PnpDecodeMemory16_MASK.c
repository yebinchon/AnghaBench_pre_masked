
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef unsigned char USHORT ;
typedef unsigned char UCHAR ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static VOID
FUNC_1(unsigned char *VAR_0)
{
  UCHAR VAR_1;
  USHORT VAR_2;
  USHORT VAR_3;
  USHORT VAR_4;
  USHORT VAR_5;

  VAR_1 = *VAR_0;
  VAR_0++;

  VAR_2 = *VAR_0;
  VAR_0++;
  VAR_2 += (*VAR_0 << 8);
  VAR_0++;

  VAR_3 = *VAR_0;
  VAR_0++;
  VAR_3 += (*VAR_0 << 8);
  VAR_0++;

  VAR_4 = *VAR_0;
  VAR_0++;
  VAR_4 += (*VAR_0 << 8);
  VAR_0++;

  VAR_5 = *VAR_0;
  VAR_0++;
  VAR_5 += (*VAR_0 << 8);

  FUNC_0("  16-Bit memory range descriptor\n");
  FUNC_0("    MinBase 0x%hx  MaxBase 0x%hx  Align 0x%hx  Length 0x%hx  Flags 0x%02x\n",
  VAR_2, VAR_3, VAR_4,VAR_5, VAR_1);
}
