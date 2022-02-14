
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef unsigned char USHORT ;
typedef int UCHAR ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static VOID
FUNC_1(unsigned char *VAR_0)
{
  USHORT VAR_1;
  UCHAR VAR_2;

  VAR_1 = *VAR_0;
  VAR_0++;
  VAR_1 += (*VAR_0 << 8);
  VAR_0++;
  VAR_2 = *VAR_0;

  FUNC_0("  Fixed I/O Port descriptor\n");
  FUNC_0("    PortBase 0x%hx  Length 0x%x\n",
  VAR_1, VAR_2);
}
