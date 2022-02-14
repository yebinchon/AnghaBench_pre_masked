
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int USHORT ;
typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ UCHAR ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;

VOID
FUNC_0(int VAR_2, UCHAR VAR_3, unsigned VAR_4, unsigned VAR_5)
{
  USHORT *VAR_6;

  VAR_6 = (USHORT *) (ULONG_PTR)(VAR_1 + VAR_5 * VAR_0 + VAR_4 * 2);
  *VAR_6 = ((USHORT) VAR_3 << 8) | (VAR_2 & 0xff);
}
